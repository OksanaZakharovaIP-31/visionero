from sqlalchemy import DateTime, Text, Integer, Column, String, Boolean, ForeignKey
from sqlalchemy.orm import relationship
from sqlalchemy.ext.declarative import declarative_base

from database import engine, Base


class AppOnComputer(Base):
    """Create a model"""
    __tablename__ = 'apponcomputer'
    id = Column(Integer, primary_key=True, index=True, nullable=False)
    name = Column(String, unique=True, nullable=False)
    path = Column(String, unique=True, nullable=False)
    active = Column(Boolean, nullable=False)

    def __repr__(self):
        if self.active:
            return f'App {self.name!r} is working'
        return f'App {self.name!r} is stop'


class StartApp(Base):
    __tablename__ = 'startapp'
    id = Column(Integer, primary_key=True, index=True, nullable=False)
    name_id = Column(Integer, ForeignKey("apponcomputer.id", ondelete="CASCADE"), nullable=False)
    start_time = Column(DateTime)
    name_app = relationship('AppOnComputer')

    def __repr__(self):
        return f'App {self.name!r} starts at {self.start_time!r}'


Base.metadata.create_all(bind=engine)
