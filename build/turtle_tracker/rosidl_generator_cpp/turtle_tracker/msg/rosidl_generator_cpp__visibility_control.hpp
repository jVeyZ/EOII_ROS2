// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define TURTLE_TRACKER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_turtle_tracker __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_turtle_tracker __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_turtle_tracker __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_turtle_tracker __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_turtle_tracker
    #define ROSIDL_GENERATOR_CPP_PUBLIC_turtle_tracker ROSIDL_GENERATOR_CPP_EXPORT_turtle_tracker
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_turtle_tracker ROSIDL_GENERATOR_CPP_IMPORT_turtle_tracker
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_turtle_tracker __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_turtle_tracker
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_turtle_tracker __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_turtle_tracker
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_TRACKER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
