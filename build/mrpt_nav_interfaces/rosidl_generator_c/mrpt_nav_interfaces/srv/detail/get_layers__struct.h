// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:srv/GetLayers.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__STRUCT_H_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetLayers in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__GetLayers_Request
{
  uint8_t structure_needs_at_least_one_member;
} mrpt_nav_interfaces__srv__GetLayers_Request;

// Struct for a sequence of mrpt_nav_interfaces__srv__GetLayers_Request.
typedef struct mrpt_nav_interfaces__srv__GetLayers_Request__Sequence
{
  mrpt_nav_interfaces__srv__GetLayers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__GetLayers_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'layers'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetLayers in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__srv__GetLayers_Response
{
  rosidl_runtime_c__String__Sequence layers;
} mrpt_nav_interfaces__srv__GetLayers_Response;

// Struct for a sequence of mrpt_nav_interfaces__srv__GetLayers_Response.
typedef struct mrpt_nav_interfaces__srv__GetLayers_Response__Sequence
{
  mrpt_nav_interfaces__srv__GetLayers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__srv__GetLayers_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__STRUCT_H_
