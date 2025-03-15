// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mrpt_msgs__msg__Waypoint__init(mrpt_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__init(&msg->target)) {
    mrpt_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // ignore_heading
  // allow_skip
  // allowed_distance
  // speed_ratio
  return true;
}

void
mrpt_msgs__msg__Waypoint__fini(mrpt_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // target
  geometry_msgs__msg__Pose__fini(&msg->target);
  // ignore_heading
  // allow_skip
  // allowed_distance
  // speed_ratio
}

bool
mrpt_msgs__msg__Waypoint__are_equal(const mrpt_msgs__msg__Waypoint * lhs, const mrpt_msgs__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // ignore_heading
  if (lhs->ignore_heading != rhs->ignore_heading) {
    return false;
  }
  // allow_skip
  if (lhs->allow_skip != rhs->allow_skip) {
    return false;
  }
  // allowed_distance
  if (lhs->allowed_distance != rhs->allowed_distance) {
    return false;
  }
  // speed_ratio
  if (lhs->speed_ratio != rhs->speed_ratio) {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__Waypoint__copy(
  const mrpt_msgs__msg__Waypoint * input,
  mrpt_msgs__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // ignore_heading
  output->ignore_heading = input->ignore_heading;
  // allow_skip
  output->allow_skip = input->allow_skip;
  // allowed_distance
  output->allowed_distance = input->allowed_distance;
  // speed_ratio
  output->speed_ratio = input->speed_ratio;
  return true;
}

mrpt_msgs__msg__Waypoint *
mrpt_msgs__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__Waypoint * msg = (mrpt_msgs__msg__Waypoint *)allocator.allocate(sizeof(mrpt_msgs__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__Waypoint));
  bool success = mrpt_msgs__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__Waypoint__destroy(mrpt_msgs__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__Waypoint__Sequence__init(mrpt_msgs__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__Waypoint * data = NULL;

  if (size) {
    data = (mrpt_msgs__msg__Waypoint *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__Waypoint__fini(&data[i - 1]);
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
mrpt_msgs__msg__Waypoint__Sequence__fini(mrpt_msgs__msg__Waypoint__Sequence * array)
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
      mrpt_msgs__msg__Waypoint__fini(&array->data[i]);
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

mrpt_msgs__msg__Waypoint__Sequence *
mrpt_msgs__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__Waypoint__Sequence * array = (mrpt_msgs__msg__Waypoint__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__Waypoint__Sequence__destroy(mrpt_msgs__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__Waypoint__Sequence__are_equal(const mrpt_msgs__msg__Waypoint__Sequence * lhs, const mrpt_msgs__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__Waypoint__Sequence__copy(
  const mrpt_msgs__msg__Waypoint__Sequence * input,
  mrpt_msgs__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__Waypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__Waypoint * data =
      (mrpt_msgs__msg__Waypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__Waypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__Waypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
