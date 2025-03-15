// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/NodeIDWithPoseVec.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vec`
#include "mrpt_msgs/msg/detail/node_id_with_pose__functions.h"

bool
mrpt_msgs__msg__NodeIDWithPoseVec__init(mrpt_msgs__msg__NodeIDWithPoseVec * msg)
{
  if (!msg) {
    return false;
  }
  // vec
  if (!mrpt_msgs__msg__NodeIDWithPose__Sequence__init(&msg->vec, 0)) {
    mrpt_msgs__msg__NodeIDWithPoseVec__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__msg__NodeIDWithPoseVec__fini(mrpt_msgs__msg__NodeIDWithPoseVec * msg)
{
  if (!msg) {
    return;
  }
  // vec
  mrpt_msgs__msg__NodeIDWithPose__Sequence__fini(&msg->vec);
}

bool
mrpt_msgs__msg__NodeIDWithPoseVec__are_equal(const mrpt_msgs__msg__NodeIDWithPoseVec * lhs, const mrpt_msgs__msg__NodeIDWithPoseVec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vec
  if (!mrpt_msgs__msg__NodeIDWithPose__Sequence__are_equal(
      &(lhs->vec), &(rhs->vec)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__NodeIDWithPoseVec__copy(
  const mrpt_msgs__msg__NodeIDWithPoseVec * input,
  mrpt_msgs__msg__NodeIDWithPoseVec * output)
{
  if (!input || !output) {
    return false;
  }
  // vec
  if (!mrpt_msgs__msg__NodeIDWithPose__Sequence__copy(
      &(input->vec), &(output->vec)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__msg__NodeIDWithPoseVec *
mrpt_msgs__msg__NodeIDWithPoseVec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithPoseVec * msg = (mrpt_msgs__msg__NodeIDWithPoseVec *)allocator.allocate(sizeof(mrpt_msgs__msg__NodeIDWithPoseVec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__NodeIDWithPoseVec));
  bool success = mrpt_msgs__msg__NodeIDWithPoseVec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__NodeIDWithPoseVec__destroy(mrpt_msgs__msg__NodeIDWithPoseVec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__NodeIDWithPoseVec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__init(mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithPoseVec * data = NULL;

  if (size) {
    data = (mrpt_msgs__msg__NodeIDWithPoseVec *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__NodeIDWithPoseVec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__NodeIDWithPoseVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__NodeIDWithPoseVec__fini(&data[i - 1]);
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
mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__fini(mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * array)
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
      mrpt_msgs__msg__NodeIDWithPoseVec__fini(&array->data[i]);
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

mrpt_msgs__msg__NodeIDWithPoseVec__Sequence *
mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * array = (mrpt_msgs__msg__NodeIDWithPoseVec__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__NodeIDWithPoseVec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__destroy(mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__are_equal(const mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * lhs, const mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__NodeIDWithPoseVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__copy(
  const mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * input,
  mrpt_msgs__msg__NodeIDWithPoseVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__NodeIDWithPoseVec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__NodeIDWithPoseVec * data =
      (mrpt_msgs__msg__NodeIDWithPoseVec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__NodeIDWithPoseVec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__NodeIDWithPoseVec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__NodeIDWithPoseVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
