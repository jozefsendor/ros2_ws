// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/GraphSlamStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/graph_slam_stats__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/graph_slam_stats__functions.h"
#include "mrpt_msgs/msg/detail/graph_slam_stats__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `slam_evaluation_metric`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__GraphSlamStats__init(message_memory);
}

void mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_fini_function(void * message_memory)
{
  mrpt_msgs__msg__GraphSlamStats__fini(message_memory);
}

size_t mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__size_function__GraphSlamStats__slam_evaluation_metric(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__get_const_function__GraphSlamStats__slam_evaluation_metric(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__get_function__GraphSlamStats__slam_evaluation_metric(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__fetch_function__GraphSlamStats__slam_evaluation_metric(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__get_const_function__GraphSlamStats__slam_evaluation_metric(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__assign_function__GraphSlamStats__slam_evaluation_metric(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__get_function__GraphSlamStats__slam_evaluation_metric(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__resize_function__GraphSlamStats__slam_evaluation_metric(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, nodes_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edges_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, edges_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edges_icp_2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, edges_icp_2d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edges_icp_3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, edges_icp_3d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edges_odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, edges_odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_closures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, loop_closures),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slam_evaluation_metric",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamStats, slam_evaluation_metric),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__size_function__GraphSlamStats__slam_evaluation_metric,  // size() function pointer
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__get_const_function__GraphSlamStats__slam_evaluation_metric,  // get_const(index) function pointer
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__get_function__GraphSlamStats__slam_evaluation_metric,  // get(index) function pointer
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__fetch_function__GraphSlamStats__slam_evaluation_metric,  // fetch(index, &value) function pointer
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__assign_function__GraphSlamStats__slam_evaluation_metric,  // assign(index, value) function pointer
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__resize_function__GraphSlamStats__slam_evaluation_metric  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "GraphSlamStats",  // message name
  8,  // number of fields
  sizeof(mrpt_msgs__msg__GraphSlamStats),
  mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_member_array,  // message members
  mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, GraphSlamStats)() {
  mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__GraphSlamStats__rosidl_typesupport_introspection_c__GraphSlamStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
