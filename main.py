from fastapi import FastAPI, WebSocket, WebSocketDisconnect
from sqlalchemy import select
import uvicorn
from fastapi_utils.tasks import repeat_every
from database import init_db, engine
from apps.find_all_apps_on_computer import get_apps, get_working_apps, kill_process_with_name, app_no_more_works
from apps.models import AppOnComputer, StartApp
from sqlalchemy.orm import Session
import os
import datetime
from fastapi.responses import PlainTextResponse

app = FastAPI()

# Find all apps
all_apps = get_apps()
# Find all working app
working_app = get_working_apps()


class ConnectionManager:
    def __init__(self):
        self.active_connections: list[WebSocket] = []

    async def connect(self, websocket: WebSocket):
        await websocket.accept()
        self.active_connections.append(websocket)

    def disconnect(self, websocket: WebSocket):
        self.active_connections.remove(websocket)

    async def send_personal_message(self, message: str, websocket: WebSocket):
        await websocket.send_text(message)

    async def broadcast(self, message: str):
        for connection in self.active_connections:
            await connection.send_text(message)


manager = ConnectionManager()


@repeat_every(seconds=1)
def app_no_work():
    # Find all working app on computer
    working_app = get_working_apps()
    # Find all app with field active = True
    session = Session(engine)
    statement = select(AppOnComputer).filter_by(active=True)
    app_name = session.scalars(statement).all()
    for one_app in app_name:
        if app_no_more_works(working_app, one_app[0].name):
            data = f'App {one_app[0].name} was closed by user'
            return PlainTextResponse(content=data)


# def get_db():
#     db = session()
#     try:
#         yield db
#     finally:
#         db.close()


@app.on_event("startup")
async def on_startup():
    """
    What should do when application is load
    :db: Session
    :return: None
    """
    # Create a table in database
    init_db()
    # Save all_apps in database, if there is no such app
    # find all app in database
    with Session(engine) as session:
        to_add = []
        for k in all_apps:
            statement = select(AppOnComputer).filter_by(name=k)
            app_name = session.scalars(statement).all()
            app_name_from_exe = all_apps[k].split('\\')[-1].split('.')[0]
            try:
                app_name[0].name
                if k != app_name[0].name:
                    if app_name_from_exe in working_app:
                        new_line = AppOnComputer(name=k, path=all_apps[k], active=True)
                    else:
                        new_line = AppOnComputer(name=k, path=all_apps[k], active=False)
                    to_add.append(new_line)
            except:
                if app_name_from_exe in working_app:
                    new_line = AppOnComputer(name=k, path=all_apps[k], active=True)
                else:
                    new_line = AppOnComputer(name=k, path=all_apps[k], active=False)
                to_add.append(new_line)
        if to_add:
            session.add_all(to_add)
            session.commit()
            session.refresh(AppOnComputer)
            session.close()
    await app_no_work()


@app.get('/')
def list_():
    """
    Print all app with their status
    :return:list
    """
    with Session(engine) as session:
        result = select(AppOnComputer.name, AppOnComputer.active)
        rows = session.execute(result).all()
        session.close()
        return rows


@app.get('/start/{name}')
def start_app(name: str):
    """
    Start app
    :param name: str
    :return: str
    """
    session = Session(engine)
    statement = select(AppOnComputer).filter_by(name=name)
    app_name = session.scalars(statement).first()
    try:
        app_name.name
        os.startfile(app_name.path)
        app_name.active = True
        session.commit()
        now = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
        new_line = StartApp(name_id=app_name.id, start_time=now)
        session.add(new_line)
        session.commit()
        session.close()
        return f'App {name} is start'
    except:
        return 'There is no such app'


@app.get('/shutdown/{name}')
def shutdown_app(name: str):
    """
    Kill process with name
    :param name: str
    :return: str
    """
    session = Session(engine)
    statement = select(AppOnComputer).filter_by(name=name)
    app_name = session.scalars(statement).first()
    try:
        app_name_name = app_name.name
        kill_process_with_name(app_name_name)
        app_name.active = False
        session.commit()
        session.close()
        return f'App {name} is shutdown'
    except:
        return 'There is no such app'


@app.get('/shutdown')
def shutdown_all():
    """
    Kill all working process
    :return: str
    """
    session = Session(engine)
    statement = select(AppOnComputer).filter_by(active=True)
    app_name = session.scalars(statement).all()
    for app in app_name:
        print(app.name)
        kill_process_with_name(app.path)
        app.active = False
    session.commit()
    session.close()
    return 'All apps are shutdown'


@app.get('/history/all')
def history_all():
    """
    Show all history of all apps
    :return: dict
    """
    session = Session(engine)
    result = session.query(AppOnComputer.name, StartApp.start_time).filter(StartApp.name_id == AppOnComputer.id).all()
    return result


@app.get('/history/{name}')
def history(name: str):
    """
    Show app history
    :param name: str
    :return: dict
    """
    session = Session(engine)
    statement = select(AppOnComputer).filter_by(name=name)
    app_name = session.scalars(statement).first()
    try:
        app_name.name
        result = session.query(AppOnComputer.name, StartApp.start_time).filter(StartApp.name_id == AppOnComputer.id,
                                                                               AppOnComputer.name == name).all()
        return result
    except:
        return 'Name error or no history for this app'


@app.websocket("/ws/{client_id}")
async def websocket_endpoint(websocket: WebSocket, client_id: int):
    await manager.connect(websocket)
    try:
        while True:
            data = await websocket.receive_text()
    except WebSocketDisconnect:
        manager.disconnect(websocket)


if __name__ == '__main__':
    uvicorn.run(app, host='localhost', port=8000)
