// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_nav_interfaces:msg/GeoreferencingMetadata.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_nav_interfaces/msg/detail/georeferencing_metadata__rosidl_typesupport_introspection_c.h"
#include "mrpt_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_nav_interfaces/msg/detail/georeferencing_metadata__functions.h"
#include "mrpt_nav_interfaces/msg/detail/georeferencing_metadata__struct.h"


// Include directives for member types
// Member `t_enu_to_map`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `t_enu_to_map`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `t_enu_to_utm`
#include "geometry_msgs/msg/pose.h"
// Member `t_enu_to_utm`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `utm_band`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__init(message_memory);
}

void mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_fini_function(void * message_memory)
{
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_member_array[8] = {
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_enu_to_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, t_enu_to_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_enu_to_utm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, t_enu_to_utm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "utm_zone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, utm_zone),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "utm_band",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__msg__GeoreferencingMetadata, utm_band),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_members = {
  "mrpt_nav_interfaces__msg",  // message namespace
  "GeoreferencingMetadata",  // message name
  8,  // number of fields
  sizeof(mrpt_nav_interfaces__msg__GeoreferencingMetadata),
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_member_array,  // message members
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_type_support_handle = {
  0,
  &mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, msg, GeoreferencingMetadata)() {
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_type_support_handle.typesupport_identifier) {
    mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_nav_interfaces__msg__GeoreferencingMetadata__rosidl_typesupport_introspection_c__GeoreferencingMetadata_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
