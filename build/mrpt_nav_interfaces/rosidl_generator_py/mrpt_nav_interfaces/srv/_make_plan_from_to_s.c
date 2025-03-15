// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrpt_nav_interfaces:srv/MakePlanFromTo.idl
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
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.h"
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrpt_nav_interfaces__srv__make_plan_from_to__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("mrpt_nav_interfaces.srv._make_plan_from_to.MakePlanFromTo_Request", full_classname_dest, 65) == 0);
  }
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request * ros_message = _ros_message;
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->start)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrpt_nav_interfaces__srv__make_plan_from_to__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MakePlanFromTo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrpt_nav_interfaces.srv._make_plan_from_to");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MakePlanFromTo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request * ros_message = (mrpt_nav_interfaces__srv__MakePlanFromTo_Request *)raw_ros_message;
  {  // start
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->start);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.h"
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool mrpt_msgs__msg__waypoint_sequence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * mrpt_msgs__msg__waypoint_sequence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrpt_nav_interfaces__srv__make_plan_from_to__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("mrpt_nav_interfaces.srv._make_plan_from_to.MakePlanFromTo_Response", full_classname_dest, 66) == 0);
  }
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response * ros_message = _ros_message;
  {  // valid_path_found
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_path_found");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid_path_found = (Py_True == field);
    Py_DECREF(field);
  }
  {  // waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints");
    if (!field) {
      return false;
    }
    if (!mrpt_msgs__msg__waypoint_sequence__convert_from_py(field, &ros_message->waypoints)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrpt_nav_interfaces__srv__make_plan_from_to__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MakePlanFromTo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrpt_nav_interfaces.srv._make_plan_from_to");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MakePlanFromTo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response * ros_message = (mrpt_nav_interfaces__srv__MakePlanFromTo_Response *)raw_ros_message;
  {  // valid_path_found
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid_path_found ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_path_found", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoints
    PyObject * field = NULL;
    field = mrpt_msgs__msg__waypoint_sequence__convert_to_py(&ros_message->waypoints);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
