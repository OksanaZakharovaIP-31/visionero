from subprocess import getoutput
from json import loads
import os
import subprocess
import psutil


def get_apps():
    """
    Find all app on computer
    App is app with .exe format in their path
    :return: dict
    """
    cmd = 'powershell -ExecutionPolicy Bypass "Get-StartApps|convertto-json"'
    apps = loads(getoutput(cmd))
    names = {}
    for each in apps:
        if each['AppID'].endswith('.exe'):
            names.update({each['Name']: each['AppID']})
    return names


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
