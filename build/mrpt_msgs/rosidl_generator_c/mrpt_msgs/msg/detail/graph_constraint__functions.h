// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__FUNCTIONS_H_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mrpt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mrpt_msgs/msg/detail/graph_constraint__struct.h"

/// Initialize msg/GraphConstraint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_msgs__msg__GraphConstraint
 * )) before or use
 * mrpt_msgs__msg__GraphConstraint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphConstraint__init(mrpt_msgs__msg__GraphConstraint * msg);

/// Finalize msg/GraphConstraint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphConstraint__fini(mrpt_msgs__msg__GraphConstraint * msg);

/// Create msg/GraphConstraint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_msgs__msg__GraphConstraint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__GraphConstraint *
mrpt_msgs__msg__GraphConstraint__create();

/// Destroy msg/GraphConstraint message.
/**
 * It calls
 * mrpt_msgs__msg__GraphConstraint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphConstraint__destroy(mrpt_msgs__msg__GraphConstraint * msg);

/// Check for msg/GraphConstraint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphConstraint__are_equal(const mrpt_msgs__msg__GraphConstraint * lhs, const mrpt_msgs__msg__GraphConstraint * rhs);

/// Copy a msg/GraphConstraint message.
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
mrpt_msgs__msg__GraphConstraint__copy(
  const mrpt_msgs__msg__GraphConstraint * input,
  mrpt_msgs__msg__GraphConstraint * output);

/// Initialize array of msg/GraphConstraint messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_msgs__msg__GraphConstraint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphConstraint__Sequence__init(mrpt_msgs__msg__GraphConstraint__Sequence * array, size_t size);

/// Finalize array of msg/GraphConstraint messages.
/**
 * It calls
 * mrpt_msgs__msg__GraphConstraint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphConstraint__Sequence__fini(mrpt_msgs__msg__GraphConstraint__Sequence * array);

/// Create array of msg/GraphConstraint messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_msgs__msg__GraphConstraint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__GraphConstraint__Sequence *
mrpt_msgs__msg__GraphConstraint__Sequence__create(size_t size);

/// Destroy array of msg/GraphConstraint messages.
/**
 * It calls
 * mrpt_msgs__msg__GraphConstraint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__GraphConstraint__Sequence__destroy(mrpt_msgs__msg__GraphConstraint__Sequence * array);

/// Check for msg/GraphConstraint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__GraphConstraint__Sequence__are_equal(const mrpt_msgs__msg__GraphConstraint__Sequence * lhs, const mrpt_msgs__msg__GraphConstraint__Sequence * rhs);

/// Copy an array of msg/GraphConstraint messages.
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
mrpt_msgs__msg__GraphConstraint__Sequence__copy(
  const mrpt_msgs__msg__GraphConstraint__Sequence * input,
  mrpt_msgs__msg__GraphConstraint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__FUNCTIONS_H_
