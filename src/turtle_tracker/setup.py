from setuptools import setup
import os
from glob import glob

package_name = 'turtle_tracker'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*')),
        (os.path.join('share', package_name, 'action'), glob('action/*')),
        (os.path.join('share', package_name, 'srv'), glob('srv/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Student',
    maintainer_email='you@example.com',
    description='Seguimiento de tortugas en TurtleSim',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'spawn_explorer = turtle_tracker.spawn_explorer:main',
            'explorer_follower = turtle_tracker.explorer_follower:main',
            'state_server = turtle_tracker.state_server:main',
            'turtle_info_client = turtle_tracker.turtle_info_client:main',
            'turtle_info_action_client = turtle_tracker.turtle_info_action_client:main',
        ],
    },
)
