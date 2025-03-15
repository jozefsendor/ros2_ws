from setuptools import find_packages
from setuptools import setup

setup(
    name='mrpt_nav_interfaces',
    version='2.2.1',
    packages=find_packages(
        include=('mrpt_nav_interfaces', 'mrpt_nav_interfaces.*')),
)
