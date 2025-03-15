// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:msg/GeoreferencingMetadata.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/msg/detail/georeferencing_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `t_enu_to_map`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `t_enu_to_utm`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `utm_band`
#include "rosidl_runtime_c/string_functions.h"

bool
mrpt_nav_interfaces__msg__GeoreferencingMetadata__init(mrpt_nav_interfaces__msg__GeoreferencingMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // valid
  // t_enu_to_map
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->t_enu_to_map)) {
    mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(msg);
    return false;
  }
  // t_enu_to_utm
  if (!geometry_msgs__msg__Pose__init(&msg->t_enu_to_utm)) {
    mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // height
  // utm_zone
  // utm_band
  if (!rosidl_runtime_c__String__init(&msg->utm_band)) {
    mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(mrpt_nav_interfaces__msg__GeoreferencingMetadata * msg)
{
  if (!msg) {
    return;
  }
  // valid
  // t_enu_to_map
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->t_enu_to_map);
  // t_enu_to_utm
  geometry_msgs__msg__Pose__fini(&msg->t_enu_to_utm);
  // latitude
  // longitude
  // height
  // utm_zone
  // utm_band
  rosidl_runtime_c__String__fini(&msg->utm_band);
}

bool
mrpt_nav_interfaces__msg__GeoreferencingMetadata__are_equal(const mrpt_nav_interfaces__msg__GeoreferencingMetadata * lhs, const mrpt_nav_interfaces__msg__GeoreferencingMetadata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // t_enu_to_map
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->t_enu_to_map), &(rhs->t_enu_to_map)))
  {
    return false;
  }
  // t_enu_to_utm
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->t_enu_to_utm), &(rhs->t_enu_to_utm)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // utm_zone
  if (lhs->utm_zone != rhs->utm_zone) {
    return false;
  }
  // utm_band
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->utm_band), &(rhs->utm_band)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__msg__GeoreferencingMetadata__copy(
  const mrpt_nav_interfaces__msg__GeoreferencingMetadata * input,
  mrpt_nav_interfaces__msg__GeoreferencingMetadata * output)
{
  if (!input || !output) {
    return false;
  }
  // valid
  output->valid = input->valid;
  // t_enu_to_map
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->t_enu_to_map), &(output->t_enu_to_map)))
  {
    return false;
  }
  // t_enu_to_utm
  if (!geometry_msgs__msg__Pose__copy(
      &(input->t_enu_to_utm), &(output->t_enu_to_utm)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // height
  output->height = input->height;
  // utm_zone
  output->utm_zone = input->utm_zone;
  // utm_band
  if (!rosidl_runtime_c__String__copy(
      &(input->utm_band), &(output->utm_band)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__msg__GeoreferencingMetadata *
mrpt_nav_interfaces__msg__GeoreferencingMetadata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__GeoreferencingMetadata * msg = (mrpt_nav_interfaces__msg__GeoreferencingMetadata *)allocator.allocate(sizeof(mrpt_nav_interfaces__msg__GeoreferencingMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__msg__GeoreferencingMetadata));
  bool success = mrpt_nav_interfaces__msg__GeoreferencingMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__msg__GeoreferencingMetadata__destroy(mrpt_nav_interfaces__msg__GeoreferencingMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__init(mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__GeoreferencingMetadata * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__msg__GeoreferencingMetadata *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__msg__GeoreferencingMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__msg__GeoreferencingMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(&data[i - 1]);
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
mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__fini(mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * array)
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
      mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(&array->data[i]);
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

mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence *
mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * array = (mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__destroy(mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__are_equal(const mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * lhs, const mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__msg__GeoreferencingMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence__copy(
  const mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * input,
  mrpt_nav_interfaces__msg__GeoreferencingMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__msg__GeoreferencingMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__msg__GeoreferencingMetadata * data =
      (mrpt_nav_interfaces__msg__GeoreferencingMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__msg__GeoreferencingMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__msg__GeoreferencingMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__msg__GeoreferencingMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
