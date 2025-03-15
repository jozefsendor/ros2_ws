// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:action/NavigateWaypoints.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/action/detail/navigate_waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
#include "mrpt_msgs/msg/detail/waypoint_sequence__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__init(mrpt_nav_interfaces__action__NavigateWaypoints_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!mrpt_msgs__msg__WaypointSequence__init(&msg->waypoints)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(mrpt_nav_interfaces__action__NavigateWaypoints_Goal * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  mrpt_msgs__msg__WaypointSequence__fini(&msg->waypoints);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_Goal * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_Goal * rhs)
{
  if (!lhs || !rhs) {
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
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_Goal * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!mrpt_msgs__msg__WaypointSequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_Goal *
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Goal * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_Goal *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Goal));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Goal * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_Goal *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_Goal * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Result__init(mrpt_nav_interfaces__action__NavigateWaypoints_Result * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!mrpt_nav_interfaces__msg__NavigationFinalStatus__init(&msg->state)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(mrpt_nav_interfaces__action__NavigateWaypoints_Result * msg)
{
  if (!msg) {
    return;
  }
  // state
  mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(&msg->state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Result__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_Result * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!mrpt_nav_interfaces__msg__NavigationFinalStatus__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Result__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_Result * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!mrpt_nav_interfaces__msg__NavigationFinalStatus__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_Result *
mrpt_nav_interfaces__action__NavigateWaypoints_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Result * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_Result *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Result));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Result__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Result * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_Result *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_Result * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__init(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!mrpt_nav_interfaces__msg__NavigationFeedback__init(&msg->state)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  mrpt_nav_interfaces__msg__NavigationFeedback__fini(&msg->state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!mrpt_nav_interfaces__msg__NavigationFeedback__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!mrpt_nav_interfaces__msg__NavigationFeedback__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_Feedback *
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_Feedback *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_Feedback *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_Feedback * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_waypoints__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__init(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Goal__init(&msg->goal)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mrpt_nav_interfaces__action__NavigateWaypoints_Goal__fini(&msg->goal);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request *
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__init(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__fini(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response *
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__init(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__fini(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request *
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_waypoints__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__init(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Result__init(&msg->result)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__fini(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mrpt_nav_interfaces__action__NavigateWaypoints_Result__fini(&msg->result);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response *
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_waypoints__functions.h"

bool
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__init(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__init(&msg->feedback)) {
    mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__fini(&msg->feedback);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mrpt_nav_interfaces__action__NavigateWaypoints_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage *
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * msg = (mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage));
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__init(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(&data[i - 1]);
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
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__fini(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * array)
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
      mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(&array->data[i]);
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

mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence *
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * array = (mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__destroy(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__are_equal(const mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * lhs, const mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence__copy(
  const mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * input,
  mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage * data =
      (mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
