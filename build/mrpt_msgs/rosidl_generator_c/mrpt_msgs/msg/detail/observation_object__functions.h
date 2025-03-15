// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrpt_msgs:msg/ObservationObject.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__OBSERVATION_OBJECT__FUNCTIONS_H_
#define MRPT_MSGS__MSG__DETAIL__OBSERVATION_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mrpt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mrpt_msgs/msg/detail/observation_object__struct.h"

/// Initialize msg/ObservationObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_msgs__msg__ObservationObject
 * )) before or use
 * mrpt_msgs__msg__ObservationObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__ObservationObject__init(mrpt_msgs__msg__ObservationObject * msg);

/// Finalize msg/ObservationObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__ObservationObject__fini(mrpt_msgs__msg__ObservationObject * msg);

/// Create msg/ObservationObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_msgs__msg__ObservationObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__ObservationObject *
mrpt_msgs__msg__ObservationObject__create();

/// Destroy msg/ObservationObject message.
/**
 * It calls
 * mrpt_msgs__msg__ObservationObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__ObservationObject__destroy(mrpt_msgs__msg__ObservationObject * msg);

/// Check for msg/ObservationObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__ObservationObject__are_equal(const mrpt_msgs__msg__ObservationObject * lhs, const mrpt_msgs__msg__ObservationObject * rhs);

/// Copy a msg/ObservationObject message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__ObservationObject__copy(
  const mrpt_msgs__msg__ObservationObject * input,
  mrpt_msgs__msg__ObservationObject * output);

/// Initialize array of msg/ObservationObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_msgs__msg__ObservationObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__ObservationObject__Sequence__init(mrpt_msgs__msg__ObservationObject__Sequence * array, size_t size);

/// Finalize array of msg/ObservationObject messages.
/**
 * It calls
 * mrpt_msgs__msg__ObservationObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__ObservationObject__Sequence__fini(mrpt_msgs__msg__ObservationObject__Sequence * array);

/// Create array of msg/ObservationObject messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_msgs__msg__ObservationObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__ObservationObject__Sequence *
mrpt_msgs__msg__ObservationObject__Sequence__create(size_t size);

/// Destroy array of msg/ObservationObject messages.
/**
 * It calls
 * mrpt_msgs__msg__ObservationObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__ObservationObject__Sequence__destroy(mrpt_msgs__msg__ObservationObject__Sequence * array);

/// Check for msg/ObservationObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__ObservationObject__Sequence__are_equal(const mrpt_msgs__msg__ObservationObject__Sequence * lhs, const mrpt_msgs__msg__ObservationObject__Sequence * rhs);

/// Copy an array of msg/ObservationObject messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__ObservationObject__Sequence__copy(
  const mrpt_msgs__msg__ObservationObject__Sequence * input,
  mrpt_msgs__msg__ObservationObject__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__OBSERVATION_OBJECT__FUNCTIONS_H_
