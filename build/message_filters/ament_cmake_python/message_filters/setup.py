from setuptools import find_packages
from setuptools import setup

setup(
    name='message_filters',
    version='7.0.0',
    packages=find_packages(
        include=('message_filters', 'message_filters.*')),
)
