from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker
from sqlmodel import SQLModel

from apps.config import DB_USER, DB_PASS, DB_HOST, DB_PORT, DB_NAME

"""Connection to DB"""
SQLALCHEMY_DATABASE_URL = f"postgresql://{DB_USER}:{DB_PASS}@{DB_HOST}:{DB_PORT}/{DB_NAME}"

engine = create_engine(SQLALCHEMY_DATABASE_URL)
session = sessionmaker(autocommit=False,
                       autoflush=False,
                       bind=engine)
""" Make session """
db = session()

Base = declarative_base()


# Creation db

def init_db():
    SQLModel.metadata.create_all(engine)
