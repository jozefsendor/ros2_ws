// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:msg/GeoreferencingMetadata.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__STRUCT_H_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't_enu_to_map'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 't_enu_to_utm'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'utm_band'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GeoreferencingMetadata in the package mrpt_nav_interfaces.
/**
  * For a diagram of the frames defined in this message, refer to online docs: 
  * https://docs.mola-slam.org/latest/geo-referencing.html
 */
typedef struct mrpt_nav_interfaces__msg__GeoreferencingMetadata
{
  /// This is true only if the map is georeferenced. If it is false,
  /// the rest of the fields in this message should be ignored.
  bool valid;
  geometry_msgs__msg__PoseWithCovariance t_enu_to_map;
  geometry_msgs__msg__Pose t_enu_to_utm;
  /// The geodetic coordinates of the ENU reference frame:
  double latitude;
  double longitude;
  double height;
  /// UTM zone, for the ENU point.
  int32_t utm_zone;
  /// just one letter (or empty if valid=false)
  rosidl_runtime_c__String utm_band;
} mrpt_nav_interfaces__msg__GeoreferencingMetadata;

// Struct for a sequence of mrpt_nav_interfaces__msg__GeoreferencingMetadata.
typedef struct mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence
{
  mrpt_nav_interfaces__msg__GeoreferencingMetadata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__STRUCT_H_
