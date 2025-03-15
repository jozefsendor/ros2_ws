// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/GenericObject.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GenericObject in the package mrpt_msgs.
/**
  * This message holds an mrpt::serialization::CObject polymorphic object
  * serialized into a binary stream via mrpt::serialization methods.
 */
typedef struct mrpt_msgs__msg__GenericObject
{
  /// Object data
  rosidl_runtime_c__uint8__Sequence data;
} mrpt_msgs__msg__GenericObject;

// Struct for a sequence of mrpt_msgs__msg__GenericObject.
typedef struct mrpt_msgs__msg__GenericObject__Sequence
{
  mrpt_msgs__msg__GenericObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__GenericObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__STRUCT_H_
