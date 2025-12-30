from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_tracker',
    version='0.1.0',
    packages=find_packages(
        include=('turtle_tracker', 'turtle_tracker.*')),
)
