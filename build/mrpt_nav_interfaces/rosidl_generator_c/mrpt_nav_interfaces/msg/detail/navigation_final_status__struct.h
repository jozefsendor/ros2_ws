// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__STRUCT_H_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_SUCCESS'.
enum
{
  mrpt_nav_interfaces__msg__NavigationFinalStatus__STATUS_SUCCESS = 0
};

/// Constant 'STATUS_ERROR'.
enum
{
  mrpt_nav_interfaces__msg__NavigationFinalStatus__STATUS_ERROR = 1
};

/// Constant 'STATUS_CANCELLED'.
enum
{
  mrpt_nav_interfaces__msg__NavigationFinalStatus__STATUS_CANCELLED = 2
};

/// Struct defined in msg/NavigationFinalStatus in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__msg__NavigationFinalStatus
{
  int8_t navigation_status;
} mrpt_nav_interfaces__msg__NavigationFinalStatus;

// Struct for a sequence of mrpt_nav_interfaces__msg__NavigationFinalStatus.
typedef struct mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence
{
  mrpt_nav_interfaces__msg__NavigationFinalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__STRUCT_H_
