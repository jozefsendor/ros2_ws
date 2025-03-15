// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/single_range_beacon_observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrpt_msgs__msg__SingleRangeBeaconObservation__init(mrpt_msgs__msg__SingleRangeBeaconObservation * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // id
  return true;
}

void
mrpt_msgs__msg__SingleRangeBeaconObservation__fini(mrpt_msgs__msg__SingleRangeBeaconObservation * msg)
{
  if (!msg) {
    return;
  }
  // range
  // id
}

bool
mrpt_msgs__msg__SingleRangeBeaconObservation__are_equal(const mrpt_msgs__msg__SingleRangeBeaconObservation * lhs, const mrpt_msgs__msg__SingleRangeBeaconObservation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__SingleRangeBeaconObservation__copy(
  const mrpt_msgs__msg__SingleRangeBeaconObservation * input,
  mrpt_msgs__msg__SingleRangeBeaconObservation * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // id
  output->id = input->id;
  return true;
}

mrpt_msgs__msg__SingleRangeBeaconObservation *
mrpt_msgs__msg__SingleRangeBeaconObservation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__SingleRangeBeaconObservation * msg = (mrpt_msgs__msg__SingleRangeBeaconObservation *)allocator.allocate(sizeof(mrpt_msgs__msg__SingleRangeBeaconObservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__SingleRangeBeaconObservation));
  bool success = mrpt_msgs__msg__SingleRangeBeaconObservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__SingleRangeBeaconObservation__destroy(mrpt_msgs__msg__SingleRangeBeaconObservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__SingleRangeBeaconObservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__SingleRangeBeaconObservation * data = NULL;

  if (size) {
    data = (mrpt_msgs__msg__SingleRangeBeaconObservation *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__SingleRangeBeaconObservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__SingleRangeBeaconObservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__SingleRangeBeaconObservation__fini(&data[i - 1]);
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
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__fini(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array)
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
      mrpt_msgs__msg__SingleRangeBeaconObservation__fini(&array->data[i]);
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

mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence *
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array = (mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__destroy(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__are_equal(const mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * lhs, const mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__SingleRangeBeaconObservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__copy(
  const mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * input,
  mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__SingleRangeBeaconObservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__SingleRangeBeaconObservation * data =
      (mrpt_msgs__msg__SingleRangeBeaconObservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__SingleRangeBeaconObservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__SingleRangeBeaconObservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__SingleRangeBeaconObservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
