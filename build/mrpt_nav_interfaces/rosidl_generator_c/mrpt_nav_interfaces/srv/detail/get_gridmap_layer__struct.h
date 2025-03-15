// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:srv/GetGridmapLayer.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__STRUCT_H_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'layer_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGridmapLayer in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__GetGridmapLayer_Request
{
  rosidl_runtime_c__String layer_name;
} mrpt_nav_interfaces__srv__GetGridmapLayer_Request;

// Struct for a sequence of mrpt_nav_interfaces__srv__GetGridmapLayer_Request.
typedef struct mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence
{
  mrpt_nav_interfaces__srv__GetGridmapLayer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'grid'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in srv/GetGridmapLayer in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__GetGridmapLayer_Response
{
  bool valid;
  nav_msgs__msg__OccupancyGrid grid;
} mrpt_nav_interfaces__srv__GetGridmapLayer_Response;

// Struct for a sequence of mrpt_nav_interfaces__srv__GetGridmapLayer_Response.
typedef struct mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence
{
  mrpt_nav_interfaces__srv__GetGridmapLayer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__STRUCT_H_
