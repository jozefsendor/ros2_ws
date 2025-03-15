// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:srv/MakePlanFromTo.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `start`
// Member `target`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__init(mrpt_nav_interfaces__srv__MakePlanFromTo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Pose__init(&msg->start)) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(msg);
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__init(&msg->target)) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(mrpt_nav_interfaces__srv__MakePlanFromTo_Request * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__Pose__fini(&msg->start);
  // target
  geometry_msgs__msg__Pose__fini(&msg->target);
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__are_equal(const mrpt_nav_interfaces__srv__MakePlanFromTo_Request * lhs, const mrpt_nav_interfaces__srv__MakePlanFromTo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__copy(
  const mrpt_nav_interfaces__srv__MakePlanFromTo_Request * input,
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Pose__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__srv__MakePlanFromTo_Request *
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request * msg = (mrpt_nav_interfaces__srv__MakePlanFromTo_Request *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request));
  bool success = mrpt_nav_interfaces__srv__MakePlanFromTo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__destroy(mrpt_nav_interfaces__srv__MakePlanFromTo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__init(mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__srv__MakePlanFromTo_Request *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__srv__MakePlanFromTo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(&data[i - 1]);
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
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__fini(mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * array)
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
      mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(&array->data[i]);
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

mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence *
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * array = (mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__destroy(mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__are_equal(const mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * lhs, const mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence__copy(
  const mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * input,
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__srv__MakePlanFromTo_Request * data =
      (mrpt_nav_interfaces__srv__MakePlanFromTo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `waypoints`
#include "mrpt_msgs/msg/detail/waypoint_sequence__functions.h"

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__init(mrpt_nav_interfaces__srv__MakePlanFromTo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid_path_found
  // waypoints
  if (!mrpt_msgs__msg__WaypointSequence__init(&msg->waypoints)) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(mrpt_nav_interfaces__srv__MakePlanFromTo_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid_path_found
  // waypoints
  mrpt_msgs__msg__WaypointSequence__fini(&msg->waypoints);
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__are_equal(const mrpt_nav_interfaces__srv__MakePlanFromTo_Response * lhs, const mrpt_nav_interfaces__srv__MakePlanFromTo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid_path_found
  if (lhs->valid_path_found != rhs->valid_path_found) {
    return false;
  }
  // waypoints
  if (!mrpt_msgs__msg__WaypointSequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__copy(
  const mrpt_nav_interfaces__srv__MakePlanFromTo_Response * input,
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid_path_found
  output->valid_path_found = input->valid_path_found;
  // waypoints
  if (!mrpt_msgs__msg__WaypointSequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__srv__MakePlanFromTo_Response *
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response * msg = (mrpt_nav_interfaces__srv__MakePlanFromTo_Response *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response));
  bool success = mrpt_nav_interfaces__srv__MakePlanFromTo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__destroy(mrpt_nav_interfaces__srv__MakePlanFromTo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__init(mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__srv__MakePlanFromTo_Response *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__srv__MakePlanFromTo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(&data[i - 1]);
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
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__fini(mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * array)
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
      mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(&array->data[i]);
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

mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence *
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * array = (mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__destroy(mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__are_equal(const mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * lhs, const mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence__copy(
  const mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * input,
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__srv__MakePlanFromTo_Response * data =
      (mrpt_nav_interfaces__srv__MakePlanFromTo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
