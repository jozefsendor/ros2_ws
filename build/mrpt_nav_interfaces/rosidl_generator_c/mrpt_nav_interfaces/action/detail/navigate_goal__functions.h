// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrpt_nav_interfaces:action/NavigateGoal.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__FUNCTIONS_H_
#define MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mrpt_nav_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mrpt_nav_interfaces/action/detail/navigate_goal__struct.h"

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_Goal
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Goal__init(mrpt_nav_interfaces__action__NavigateGoal_Goal * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Goal__fini(mrpt_nav_interfaces__action__NavigateGoal_Goal * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_Goal *
mrpt_nav_interfaces__action__NavigateGoal_Goal__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Goal__destroy(mrpt_nav_interfaces__action__NavigateGoal_Goal * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Goal__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_Goal * lhs, const mrpt_nav_interfaces__action__NavigateGoal_Goal * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Goal__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_Goal * input,
  mrpt_nav_interfaces__action__NavigateGoal_Goal * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_Result
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Result__init(mrpt_nav_interfaces__action__NavigateGoal_Result * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Result__fini(mrpt_nav_interfaces__action__NavigateGoal_Result * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_Result *
mrpt_nav_interfaces__action__NavigateGoal_Result__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Result__destroy(mrpt_nav_interfaces__action__NavigateGoal_Result * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Result__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_Result * lhs, const mrpt_nav_interfaces__action__NavigateGoal_Result * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Result__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_Result * input,
  mrpt_nav_interfaces__action__NavigateGoal_Result * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Feedback__init(mrpt_nav_interfaces__action__NavigateGoal_Feedback * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Feedback__fini(mrpt_nav_interfaces__action__NavigateGoal_Feedback * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_Feedback *
mrpt_nav_interfaces__action__NavigateGoal_Feedback__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Feedback__destroy(mrpt_nav_interfaces__action__NavigateGoal_Feedback * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Feedback__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_Feedback * lhs, const mrpt_nav_interfaces__action__NavigateGoal_Feedback * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Feedback__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_Feedback * input,
  mrpt_nav_interfaces__action__NavigateGoal_Feedback * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__init(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__fini(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request *
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__destroy(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * lhs, const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * input,
  mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__init(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__fini(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response *
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__destroy(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * lhs, const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * input,
  mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__init(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__fini(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request *
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__destroy(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * lhs, const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * input,
  mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__init(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__fini(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response *
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__destroy(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * lhs, const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * input,
  mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence * output);

/// Initialize action/NavigateGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage
 * )) before or use
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__init(mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * msg);

/// Finalize action/NavigateGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__fini(mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * msg);

/// Create action/NavigateGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage *
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__create();

/// Destroy action/NavigateGoal message.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__destroy(mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * msg);

/// Check for action/NavigateGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * lhs, const mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * rhs);

/// Copy a action/NavigateGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * input,
  mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * output);

/// Initialize array of action/NavigateGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__init(mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__fini(mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * array);

/// Create array of action/NavigateGoal messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence *
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/NavigateGoal messages.
/**
 * It calls
 * mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__destroy(mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * array);

/// Check for action/NavigateGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/NavigateGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * input,
  mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__FUNCTIONS_H_
