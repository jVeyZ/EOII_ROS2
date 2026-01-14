cmake_minimum_required(VERSION 3.14)
project(turtle_tracker)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Set Python executable explicitly for rosidl
set(Python3_EXECUTABLE "$ENV{CONDA_PREFIX}/bin/python3")
set(PYTHON_EXECUTABLE "$ENV{CONDA_PREFIX}/bin/python3")

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED)

# Generate interfaces (services and actions)
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/TurtleInfo.srv"
  "action/TurtleInfoAction.action"
  DEPENDENCIES std_msgs geometry_msgs action_msgs
)

# Install Python executables
install(PROGRAMS
  scripts/turtle_spawner.py
  scripts/turtle_tracker.py
  scripts/turtle_info_service.py
  scripts/turtle_info_client.py
  scripts/turtle_info_action_server.py
  scripts/turtle_info_action_client.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
