// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_tracker:srv/TurtleInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_tracker/srv/detail/turtle_info__struct.h"
#include "turtle_tracker/srv/detail/turtle_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtle_tracker__srv__turtle_info__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("turtle_tracker.srv._turtle_info.TurtleInfo_Request", full_classname_dest, 50) == 0);
  }
  turtle_tracker__srv__TurtleInfo_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_tracker__srv__turtle_info__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TurtleInfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_tracker.srv._turtle_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TurtleInfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "turtle_tracker/srv/detail/turtle_info__struct.h"
// already included above
// #include "turtle_tracker/srv/detail/turtle_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtle_tracker__srv__turtle_info__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("turtle_tracker.srv._turtle_info.TurtleInfo_Response", full_classname_dest, 51) == 0);
  }
  turtle_tracker__srv__TurtleInfo_Response * ros_message = _ros_message;
  {  // turtle1_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "turtle1_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turtle1_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turtle1_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "turtle1_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turtle1_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turtle1_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "turtle1_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turtle1_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // explorer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "explorer_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->explorer_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // explorer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "explorer_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->explorer_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // explorer_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "explorer_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->explorer_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turtle1_linear_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "turtle1_linear_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turtle1_linear_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turtle1_angular_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "turtle1_angular_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turtle1_angular_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // explorer_linear_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "explorer_linear_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->explorer_linear_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // explorer_angular_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "explorer_angular_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->explorer_angular_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->timestamp, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_tracker__srv__turtle_info__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TurtleInfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_tracker.srv._turtle_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TurtleInfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_tracker__srv__TurtleInfo_Response * ros_message = (turtle_tracker__srv__TurtleInfo_Response *)raw_ros_message;
  {  // turtle1_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turtle1_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turtle1_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turtle1_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turtle1_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turtle1_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turtle1_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turtle1_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turtle1_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // explorer_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->explorer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "explorer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // explorer_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->explorer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "explorer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // explorer_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->explorer_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "explorer_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turtle1_linear_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turtle1_linear_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turtle1_linear_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turtle1_angular_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turtle1_angular_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turtle1_angular_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // explorer_linear_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->explorer_linear_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "explorer_linear_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // explorer_angular_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->explorer_angular_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "explorer_angular_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->timestamp.data,
      strlen(ros_message->timestamp.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
