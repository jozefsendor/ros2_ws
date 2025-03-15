// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:srv/GetPointmapLayer.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_POINTMAP_LAYER__STRUCT_H_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_POINTMAP_LAYER__STRUCT_H_

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

/// Struct defined in srv/GetPointmapLayer in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__GetPointmapLayer_Request
{
  rosidl_runtime_c__String layer_name;
} mrpt_nav_interfaces__srv__GetPointmapLayer_Request;

// Struct for a sequence of mrpt_nav_interfaces__srv__GetPointmapLayer_Request.
typedef struct mrpt_nav_interfaces__srv__GetPointmapLayer_Request__Sequence
{
  mrpt_nav_interfaces__srv__GetPointmapLayer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__GetPointmapLayer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/GetPointmapLayer in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__GetPointmapLayer_Response
{
  bool valid;
  sensor_msgs__msg__PointCloud2 points;
} mrpt_nav_interfaces__srv__GetPointmapLayer_Response;

// Struct for a sequence of mrpt_nav_interfaces__srv__GetPointmapLayer_Response.
typedef struct mrpt_nav_interfaces__srv__GetPointmapLayer_Response__Sequence
{
  mrpt_nav_interfaces__srv__GetPointmapLayer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__GetPointmapLayer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_POINTMAP_LAYER__STRUCT_H_
