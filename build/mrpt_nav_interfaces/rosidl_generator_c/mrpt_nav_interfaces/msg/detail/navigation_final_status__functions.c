// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__init(mrpt_nav_interfaces__msg__NavigationFinalStatus * msg)
{
  if (!msg) {
    return false;
  }
  // navigation_status
  return true;
}

void
mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(mrpt_nav_interfaces__msg__NavigationFinalStatus * msg)
{
  if (!msg) {
    return;
  }
  // navigation_status
}

bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__are_equal(const mrpt_nav_interfaces__msg__NavigationFinalStatus * lhs, const mrpt_nav_interfaces__msg__NavigationFinalStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // navigation_status
  if (lhs->navigation_status != rhs->navigation_status) {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__copy(
  const mrpt_nav_interfaces__msg__NavigationFinalStatus * input,
  mrpt_nav_interfaces__msg__NavigationFinalStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // navigation_status
  output->navigation_status = input->navigation_status;
  return true;
}

mrpt_nav_interfaces__msg__NavigationFinalStatus *
mrpt_nav_interfaces__msg__NavigationFinalStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__NavigationFinalStatus * msg = (mrpt_nav_interfaces__msg__NavigationFinalStatus *)allocator.allocate(sizeof(mrpt_nav_interfaces__msg__NavigationFinalStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__msg__NavigationFinalStatus));
  bool success = mrpt_nav_interfaces__msg__NavigationFinalStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__msg__NavigationFinalStatus__destroy(mrpt_nav_interfaces__msg__NavigationFinalStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__init(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__NavigationFinalStatus * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__msg__NavigationFinalStatus *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__msg__NavigationFinalStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__msg__NavigationFinalStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(&data[i - 1]);
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
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__fini(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array)
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
      mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(&array->data[i]);
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

mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence *
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array = (mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__destroy(mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__are_equal(const mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * lhs, const mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__msg__NavigationFinalStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence__copy(
  const mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * input,
  mrpt_nav_interfaces__msg__NavigationFinalStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__msg__NavigationFinalStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__msg__NavigationFinalStatus * data =
      (mrpt_nav_interfaces__msg__NavigationFinalStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__msg__NavigationFinalStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__msg__NavigationFinalStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__msg__NavigationFinalStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
