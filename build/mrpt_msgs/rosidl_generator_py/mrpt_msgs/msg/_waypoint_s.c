// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrpt_msgs:msg/Waypoint.idl
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
#include "mrpt_msgs/msg/detail/waypoint__struct.h"
#include "mrpt_msgs/msg/detail/waypoint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrpt_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("mrpt_msgs.msg._waypoint.Waypoint", full_classname_dest, 32) == 0);
  }
  mrpt_msgs__msg__Waypoint * ros_message = _ros_message;
  {  // target
    PyObject * field = PyObject_GetAttrString(_pymsg, "target");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ignore_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // allow_skip
    PyObject * field = PyObject_GetAttrString(_pymsg, "allow_skip");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->allow_skip = (Py_True == field);
    Py_DECREF(field);
  }
  {  // allowed_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "allowed_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->allowed_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrpt_msgs__msg__waypoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Waypoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrpt_msgs.msg._waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Waypoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrpt_msgs__msg__Waypoint * ros_message = (mrpt_msgs__msg__Waypoint *)raw_ros_message;
  {  // target
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allow_skip
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->allow_skip ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "allow_skip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allowed_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->allowed_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "allowed_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
