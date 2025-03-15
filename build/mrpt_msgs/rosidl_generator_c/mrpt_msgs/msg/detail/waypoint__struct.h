// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Waypoint in the package mrpt_msgs.
typedef struct mrpt_msgs__msg__Waypoint
{
  /// target pose in map frame. Heading may be ignored
  geometry_msgs__msg__Pose target;
  bool ignore_heading;
  bool allow_skip;
  /// minimum distance (meters) to consider the target reached
  double allowed_distance;
  /// [0,1] relative speed at this target. 0=means use slow down
  /// so the robot approaches the goal slowly:
  double speed_ratio;
} mrpt_msgs__msg__Waypoint;

// Struct for a sequence of mrpt_msgs__msg__Waypoint.
typedef struct mrpt_msgs__msg__Waypoint__Sequence
{
  mrpt_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
