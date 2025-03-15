// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrpt_nav_interfaces__msg__NavigationFeedback__init(mrpt_nav_interfaces__msg__NavigationFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // total_waypoints
  // reached_waypoints
  return true;
}

void
mrpt_nav_interfaces__msg__NavigationFeedback__fini(mrpt_nav_interfaces__msg__NavigationFeedback * msg)
{
  if (!msg) {
    return;
  }
  // total_waypoints
  // reached_waypoints
}

bool
mrpt_nav_interfaces__msg__NavigationFeedback__are_equal(const mrpt_nav_interfaces__msg__NavigationFeedback * lhs, const mrpt_nav_interfaces__msg__NavigationFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_waypoints
  if (lhs->total_waypoints != rhs->total_waypoints) {
    return false;
  }
  // reached_waypoints
  if (lhs->reached_waypoints != rhs->reached_waypoints) {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__msg__NavigationFeedback__copy(
  const mrpt_nav_interfaces__msg__NavigationFeedback * input,
  mrpt_nav_interfaces__msg__NavigationFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // total_waypoints
  output->total_waypoints = input->total_waypoints;
  // reached_waypoints
  output->reached_waypoints = input->reached_waypoints;
  return true;
}

mrpt_nav_interfaces__msg__NavigationFeedback *
mrpt_nav_interfaces__msg__NavigationFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__NavigationFeedback * msg = (mrpt_nav_interfaces__msg__NavigationFeedback *)allocator.allocate(sizeof(mrpt_nav_interfaces__msg__NavigationFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__msg__NavigationFeedback));
  bool success = mrpt_nav_interfaces__msg__NavigationFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__msg__NavigationFeedback__destroy(mrpt_nav_interfaces__msg__NavigationFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__msg__NavigationFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__init(mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__NavigationFeedback * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__msg__NavigationFeedback *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__msg__NavigationFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__msg__NavigationFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__msg__NavigationFeedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__fini(mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mrpt_nav_interfaces__msg__NavigationFeedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mrpt_nav_interfaces__msg__NavigationFeedback__Sequence *
mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * array = (mrpt_nav_interfaces__msg__NavigationFeedback__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__msg__NavigationFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__destroy(mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__are_equal(const mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * lhs, const mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__msg__NavigationFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__msg__NavigationFeedback__Sequence__copy(
  const mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * input,
  mrpt_nav_interfaces__msg__NavigationFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__msg__NavigationFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__msg__NavigationFeedback * data =
      (mrpt_nav_interfaces__msg__NavigationFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__msg__NavigationFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__msg__NavigationFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__msg__NavigationFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
