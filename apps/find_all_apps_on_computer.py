import json
import os
import subprocess
import psutil


def get_apps():
    """
    Find all app on computer
    App is app with .exe format in their path
    :return: dict
    """
    command = 'powershell.exe "Get-ItemProperty HKLM:\\Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\* | Select-Object DisplayName, DisplayIcon| convertto-json"'
    k = subprocess.run(command, stdout=subprocess.PIPE, shell=True, creationflags=0x08000000)
    k = k.stdout
    k = k.decode('Windows-1251')
    all_apps = json.loads(k)
    apps_with_exe = {}
    for app in all_apps:
        if app['DisplayIcon'] is not None and app['DisplayName'] is not None:
            apps_with_exe.update({app['DisplayName']: app['DisplayIcon'].split(',')[0]})
    return apps_with_exe


def get_working_apps():
    """
    Find all working apps on computer
    :return: list
    """
    output = os.popen('wmic process get description').read()

    output = [i.split('.')[0] for i in set(output.replace(' ', '').split('\n')) if i != '']
    return output[1:]


def kill_process_with_name(name: str):
    """
    Kill process with name
    :param name: str
    :return: None
    """
    for pid in (process.pid for process in psutil.process_iter() if process.name() == f"{name}.exe"):
        os.kill(pid)


def app_no_more_works(working_app: list, app:str):
    if app not in working_app:
        return True
    return False
