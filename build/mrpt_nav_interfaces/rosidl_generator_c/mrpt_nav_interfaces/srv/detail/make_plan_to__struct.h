// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:srv/MakePlanTo.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_TO__STRUCT_H_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_TO__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/MakePlanTo in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__MakePlanTo_Request
{
  /// Goal
  geometry_msgs__msg__PoseStamped target;
} mrpt_nav_interfaces__srv__MakePlanTo_Request;

// Struct for a sequence of mrpt_nav_interfaces__srv__MakePlanTo_Request.
typedef struct mrpt_nav_interfaces__srv__MakePlanTo_Request__Sequence
{
  mrpt_nav_interfaces__srv__MakePlanTo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__MakePlanTo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint_sequence__struct.h"

/// Struct defined in srv/MakePlanTo in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__MakePlanTo_Response
{
  bool valid_path_found;
  mrpt_msgs__msg__WaypointSequence waypoints;
} mrpt_nav_interfaces__srv__MakePlanTo_Response;

// Struct for a sequence of mrpt_nav_interfaces__srv__MakePlanTo_Response.
typedef struct mrpt_nav_interfaces__srv__MakePlanTo_Response__Sequence
{
  mrpt_nav_interfaces__srv__MakePlanTo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__MakePlanTo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_TO__STRUCT_H_
