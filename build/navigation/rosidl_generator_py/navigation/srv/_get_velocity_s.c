// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from navigation:srv/GetVelocity.idl
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
#include "navigation/srv/detail/get_velocity__struct.h"
#include "navigation/srv/detail/get_velocity__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool navigation__srv__get_velocity__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("navigation.srv._get_velocity.GetVelocity_Request", full_classname_dest, 48) == 0);
  }
  navigation__srv__GetVelocity_Request * ros_message = _ros_message;
  {  // linear_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // linear_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * navigation__srv__get_velocity__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetVelocity_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("navigation.srv._get_velocity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetVelocity_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  navigation__srv__GetVelocity_Request * ros_message = (navigation__srv__GetVelocity_Request *)raw_ros_message;
  {  // linear_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_z", field);
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
// #include "navigation/srv/detail/get_velocity__struct.h"
// already included above
// #include "navigation/srv/detail/get_velocity__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool navigation__srv__get_velocity__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("navigation.srv._get_velocity.GetVelocity_Response", full_classname_dest, 49) == 0);
  }
  navigation__srv__GetVelocity_Response * ros_message = _ros_message;
  {  // w1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w3
    PyObject * field = PyObject_GetAttrString(_pymsg, "w3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w4
    PyObject * field = PyObject_GetAttrString(_pymsg, "w4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * navigation__srv__get_velocity__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetVelocity_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("navigation.srv._get_velocity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetVelocity_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  navigation__srv__GetVelocity_Response * ros_message = (navigation__srv__GetVelocity_Response *)raw_ros_message;
  {  // w1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
