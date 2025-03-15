// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/ObservationRangeBearing.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/observation_range_bearing__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/observation_range_bearing__functions.h"
#include "mrpt_msgs/msg/detail/observation_range_bearing__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_pose_on_robot`
#include "geometry_msgs/msg/pose.h"
// Member `sensor_pose_on_robot`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `sensed_data`
#include "mrpt_msgs/msg/single_range_bearing_observation.h"
// Member `sensed_data`
#include "mrpt_msgs/msg/detail/single_range_bearing_observation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__ObservationRangeBearing__init(message_memory);
}

void mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_fini_function(void * message_memory)
{
  mrpt_msgs__msg__ObservationRangeBearing__fini(message_memory);
}

size_t mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__size_function__ObservationRangeBearing__sensed_data(
  const void * untyped_member)
{
  const mrpt_msgs__msg__SingleRangeBearingObservation__Sequence * member =
    (const mrpt_msgs__msg__SingleRangeBearingObservation__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__get_const_function__ObservationRangeBearing__sensed_data(
  const void * untyped_member, size_t index)
{
  const mrpt_msgs__msg__SingleRangeBearingObservation__Sequence * member =
    (const mrpt_msgs__msg__SingleRangeBearingObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__get_function__ObservationRangeBearing__sensed_data(
  void * untyped_member, size_t index)
{
  mrpt_msgs__msg__SingleRangeBearingObservation__Sequence * member =
    (mrpt_msgs__msg__SingleRangeBearingObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__fetch_function__ObservationRangeBearing__sensed_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrpt_msgs__msg__SingleRangeBearingObservation * item =
    ((const mrpt_msgs__msg__SingleRangeBearingObservation *)
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__get_const_function__ObservationRangeBearing__sensed_data(untyped_member, index));
  mrpt_msgs__msg__SingleRangeBearingObservation * value =
    (mrpt_msgs__msg__SingleRangeBearingObservation *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__assign_function__ObservationRangeBearing__sensed_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrpt_msgs__msg__SingleRangeBearingObservation * item =
    ((mrpt_msgs__msg__SingleRangeBearingObservation *)
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__get_function__ObservationRangeBearing__sensed_data(untyped_member, index));
  const mrpt_msgs__msg__SingleRangeBearingObservation * value =
    (const mrpt_msgs__msg__SingleRangeBearingObservation *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__resize_function__ObservationRangeBearing__sensed_data(
  void * untyped_member, size_t size)
{
  mrpt_msgs__msg__SingleRangeBearingObservation__Sequence * member =
    (mrpt_msgs__msg__SingleRangeBearingObservation__Sequence *)(untyped_member);
  mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__fini(member);
  return mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_pose_on_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, sensor_pose_on_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_sensor_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, min_sensor_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_sensor_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, max_sensor_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_std_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, sensor_std_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_std_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, sensor_std_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_std_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, sensor_std_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensed_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__ObservationRangeBearing, sensed_data),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__size_function__ObservationRangeBearing__sensed_data,  // size() function pointer
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__get_const_function__ObservationRangeBearing__sensed_data,  // get_const(index) function pointer
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__get_function__ObservationRangeBearing__sensed_data,  // get(index) function pointer
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__fetch_function__ObservationRangeBearing__sensed_data,  // fetch(index, &value) function pointer
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__assign_function__ObservationRangeBearing__sensed_data,  // assign(index, value) function pointer
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__resize_function__ObservationRangeBearing__sensed_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "ObservationRangeBearing",  // message name
  8,  // number of fields
  sizeof(mrpt_msgs__msg__ObservationRangeBearing),
  mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_member_array,  // message members
  mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, ObservationRangeBearing)() {
  mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, SingleRangeBearingObservation)();
  if (!mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__ObservationRangeBearing__rosidl_typesupport_introspection_c__ObservationRangeBearing_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
