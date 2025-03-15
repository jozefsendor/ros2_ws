import os
from glob import glob
from setuptools import setup

package_name = 'tb2_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=['tb2_control'],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
    ],
    install_requires=['setuptools>=42.0.0'],
    zip_safe=True,
    maintainer='jozef',
    maintainer_email='jozef.sendor20@gmail.com',
    description='Control package for TurtleBot2',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'tb2_controller = tb2_control.tb2_control:main',
        ],
    },
)
