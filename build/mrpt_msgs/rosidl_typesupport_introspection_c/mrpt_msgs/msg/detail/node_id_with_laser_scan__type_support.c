// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__functions.h"
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__struct.h"


// Include directives for member types
// Member `scan`
#include "sensor_msgs/msg/laser_scan.h"
// Member `scan`
#include "sensor_msgs/msg/detail/laser_scan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__NodeIDWithLaserScan__init(message_memory);
}

void mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_fini_function(void * message_memory)
{
  mrpt_msgs__msg__NodeIDWithLaserScan__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_member_array[2] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__NodeIDWithLaserScan, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__NodeIDWithLaserScan, scan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "NodeIDWithLaserScan",  // message name
  2,  // number of fields
  sizeof(mrpt_msgs__msg__NodeIDWithLaserScan),
  mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_member_array,  // message members
  mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, NodeIDWithLaserScan)() {
  mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, LaserScan)();
  if (!mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__NodeIDWithLaserScan__rosidl_typesupport_introspection_c__NodeIDWithLaserScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
