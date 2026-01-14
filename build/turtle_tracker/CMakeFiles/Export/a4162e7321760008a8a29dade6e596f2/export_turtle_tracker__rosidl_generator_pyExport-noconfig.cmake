#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "turtle_tracker::turtle_tracker__rosidl_generator_py" for configuration ""
set_property(TARGET turtle_tracker::turtle_tracker__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(turtle_tracker::turtle_tracker__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "turtle_tracker::turtle_tracker__rosidl_generator_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libturtle_tracker__rosidl_generator_py.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libturtle_tracker__rosidl_generator_py.dylib"
  )

list(APPEND _cmake_import_check_targets turtle_tracker::turtle_tracker__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_turtle_tracker::turtle_tracker__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libturtle_tracker__rosidl_generator_py.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
