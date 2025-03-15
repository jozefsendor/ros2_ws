// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__FUNCTIONS_H_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mrpt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.h"

/// Initialize msg/GraphSlamAgent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_msgs__msg__GraphSlamAgent
 * )) before or use
 * mrpt_msgs__msg__GraphSlamAgent__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphSlamAgent__init(mrpt_msgs__msg__GraphSlamAgent * msg);

/// Finalize msg/GraphSlamAgent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphSlamAgent__fini(mrpt_msgs__msg__GraphSlamAgent * msg);

/// Create msg/GraphSlamAgent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_msgs__msg__GraphSlamAgent__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__GraphSlamAgent *
mrpt_msgs__msg__GraphSlamAgent__create();

/// Destroy msg/GraphSlamAgent message.
/**
 * It calls
 * mrpt_msgs__msg__GraphSlamAgent__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphSlamAgent__destroy(mrpt_msgs__msg__GraphSlamAgent * msg);

/// Check for msg/GraphSlamAgent message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphSlamAgent__are_equal(const mrpt_msgs__msg__GraphSlamAgent * lhs, const mrpt_msgs__msg__GraphSlamAgent * rhs);

/// Copy a msg/GraphSlamAgent message.
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
mrpt_msgs__msg__GraphSlamAgent__copy(
  const mrpt_msgs__msg__GraphSlamAgent * input,
  mrpt_msgs__msg__GraphSlamAgent * output);

/// Initialize array of msg/GraphSlamAgent messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_msgs__msg__GraphSlamAgent__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphSlamAgent__Sequence__init(mrpt_msgs__msg__GraphSlamAgent__Sequence * array, size_t size);

/// Finalize array of msg/GraphSlamAgent messages.
/**
 * It calls
 * mrpt_msgs__msg__GraphSlamAgent__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphSlamAgent__Sequence__fini(mrpt_msgs__msg__GraphSlamAgent__Sequence * array);

/// Create array of msg/GraphSlamAgent messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_msgs__msg__GraphSlamAgent__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__GraphSlamAgent__Sequence *
mrpt_msgs__msg__GraphSlamAgent__Sequence__create(size_t size);

/// Destroy array of msg/GraphSlamAgent messages.
/**
 * It calls
 * mrpt_msgs__msg__GraphSlamAgent__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphSlamAgent__Sequence__destroy(mrpt_msgs__msg__GraphSlamAgent__Sequence * array);

/// Check for msg/GraphSlamAgent message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphSlamAgent__Sequence__are_equal(const mrpt_msgs__msg__GraphSlamAgent__Sequence * lhs, const mrpt_msgs__msg__GraphSlamAgent__Sequence * rhs);

/// Copy an array of msg/GraphSlamAgent messages.
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
mrpt_msgs__msg__GraphSlamAgent__Sequence__copy(
  const mrpt_msgs__msg__GraphSlamAgent__Sequence * input,
  mrpt_msgs__msg__GraphSlamAgent__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__FUNCTIONS_H_
