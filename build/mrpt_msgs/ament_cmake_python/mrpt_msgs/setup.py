from setuptools import find_packages
from setuptools import setup

setup(
    name='mrpt_msgs',
    version='0.5.0',
    packages=find_packages(
        include=('mrpt_msgs', 'mrpt_msgs.*')),
)
