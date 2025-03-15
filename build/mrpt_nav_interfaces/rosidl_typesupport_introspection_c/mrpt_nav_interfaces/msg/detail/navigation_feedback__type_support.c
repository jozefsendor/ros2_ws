// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__rosidl_typesupport_introspection_c.h"
#include "mrpt_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__functions.h"
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_nav_interfaces__msg__NavigationFeedback__init(message_memory);
}

void mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_fini_function(void * message_memory)
{
  mrpt_nav_interfaces__msg__NavigationFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_member_array[2] = {
  {
    "total_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__NavigationFeedback, total_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reached_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__NavigationFeedback, reached_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_members = {
  "mrpt_nav_interfaces__msg",  // message namespace
  "NavigationFeedback",  // message name
  2,  // number of fields
  sizeof(mrpt_nav_interfaces__msg__NavigationFeedback),
  mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_member_array,  // message members
  mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_type_support_handle = {
  0,
  &mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, msg, NavigationFeedback)() {
  if (!mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_type_support_handle.typesupport_identifier) {
    mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_nav_interfaces__msg__NavigationFeedback__rosidl_typesupport_introspection_c__NavigationFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
