// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__FUNCTIONS_H_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mrpt_nav_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__struct.h"

/// Initialize msg/NavigationFinalStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_nav_interfaces__msg__NavigationFinalStatus
 * )) before or use
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__init(mrpt_nav_interfaces__msg__NavigationFinalStatus * msg);

/// Finalize msg/NavigationFinalStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(mrpt_nav_interfaces__msg__NavigationFinalStatus * msg);

/// Create msg/NavigationFinalStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__msg__NavigationFinalStatus *
mrpt_nav_interfaces__msg__NavigationFinalStatus__create();

/// Destroy msg/NavigationFinalStatus message.
/**
 * It calls
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__msg__NavigationFinalStatus__destroy(mrpt_nav_interfaces__msg__NavigationFinalStatus * msg);

/// Check for msg/NavigationFinalStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__are_equal(const mrpt_nav_interfaces__msg__NavigationFinalStatus * lhs, const mrpt_nav_interfaces__msg__NavigationFinalStatus * rhs);

/// Copy a msg/NavigationFinalStatus message.
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
mrpt_nav_interfaces__msg__NavigationFinalStatus__copy(
  const mrpt_nav_interfaces__msg__NavigationFinalStatus * input,
  mrpt_nav_interfaces__msg__NavigationFinalStatus * output);

/// Initialize array of msg/NavigationFinalStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__init(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array, size_t size);

/// Finalize array of msg/NavigationFinalStatus messages.
/**
 * It calls
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__fini(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array);

/// Create array of msg/NavigationFinalStatus messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence *
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__create(size_t size);

/// Destroy array of msg/NavigationFinalStatus messages.
/**
 * It calls
 * mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
void
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__destroy(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array);

/// Check for msg/NavigationFinalStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_nav_interfaces
bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__are_equal(const mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * lhs, const mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * rhs);

/// Copy an array of msg/NavigationFinalStatus messages.
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
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__copy(
  const mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * input,
  mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__FUNCTIONS_H_
