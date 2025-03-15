// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__STRUCT_H_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NavigationFeedback in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__msg__NavigationFeedback
{
  int16_t total_waypoints;
  int16_t reached_waypoints;
} mrpt_nav_interfaces__msg__NavigationFeedback;

// Struct for a sequence of mrpt_nav_interfaces__msg__NavigationFeedback.
typedef struct mrpt_nav_interfaces__msg__NavigationFeedback__Sequence
{
  mrpt_nav_interfaces__msg__NavigationFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__msg__NavigationFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__STRUCT_H_
