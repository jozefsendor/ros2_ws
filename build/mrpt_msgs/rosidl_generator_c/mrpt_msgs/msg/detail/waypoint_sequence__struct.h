// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/WaypointSequence.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint__struct.h"

/// Struct defined in msg/WaypointSequence in the package mrpt_msgs.
/**
  * Time of sensor data acquisition, coordinate frame ID.
 */
typedef struct mrpt_msgs__msg__WaypointSequence
{
  std_msgs__msg__Header header;
  mrpt_msgs__msg__Waypoint__Sequence waypoints;
} mrpt_msgs__msg__WaypointSequence;

// Struct for a sequence of mrpt_msgs__msg__WaypointSequence.
typedef struct mrpt_msgs__msg__WaypointSequence__Sequence
{
  mrpt_msgs__msg__WaypointSequence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__WaypointSequence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__STRUCT_H_
