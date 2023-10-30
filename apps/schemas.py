from pydantic import BaseModel, ConfigDict
from datetime import datetime


class AppOnComputerModel(BaseModel):
    """Validation"""
    model_config = ConfigDict(arbitrary_types_allowed=True)
    id: int
    name: str
    path: str
    active: bool

    # class Config:
    #     orm_mode = True


class StartAppModel(BaseModel):
    """Validation"""
    model_config = ConfigDict(arbitrary_types_allowed=True)
    id: int
    name_id: int
    start_time: datetime
    #
    # class Config:
    #     orm_mode = True
