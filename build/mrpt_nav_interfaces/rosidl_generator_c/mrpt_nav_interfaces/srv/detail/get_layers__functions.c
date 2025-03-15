// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:srv/GetLayers.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/srv/detail/get_layers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mrpt_nav_interfaces__srv__GetLayers_Request__init(mrpt_nav_interfaces__srv__GetLayers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mrpt_nav_interfaces__srv__GetLayers_Request__fini(mrpt_nav_interfaces__srv__GetLayers_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mrpt_nav_interfaces__srv__GetLayers_Request__are_equal(const mrpt_nav_interfaces__srv__GetLayers_Request * lhs, const mrpt_nav_interfaces__srv__GetLayers_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetLayers_Request__copy(
  const mrpt_nav_interfaces__srv__GetLayers_Request * input,
  mrpt_nav_interfaces__srv__GetLayers_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mrpt_nav_interfaces__srv__GetLayers_Request *
mrpt_nav_interfaces__srv__GetLayers_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetLayers_Request * msg = (mrpt_nav_interfaces__srv__GetLayers_Request *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetLayers_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__srv__GetLayers_Request));
  bool success = mrpt_nav_interfaces__srv__GetLayers_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__srv__GetLayers_Request__destroy(mrpt_nav_interfaces__srv__GetLayers_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__srv__GetLayers_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__init(mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetLayers_Request * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__srv__GetLayers_Request *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__srv__GetLayers_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__srv__GetLayers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__srv__GetLayers_Request__fini(&data[i - 1]);
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
mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__fini(mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * array)
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
      mrpt_nav_interfaces__srv__GetLayers_Request__fini(&array->data[i]);
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

mrpt_nav_interfaces__srv__GetLayers_Request__Sequence *
mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * array = (mrpt_nav_interfaces__srv__GetLayers_Request__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetLayers_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__destroy(mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__are_equal(const mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * lhs, const mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetLayers_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetLayers_Request__Sequence__copy(
  const mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * input,
  mrpt_nav_interfaces__srv__GetLayers_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__srv__GetLayers_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__srv__GetLayers_Request * data =
      (mrpt_nav_interfaces__srv__GetLayers_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__srv__GetLayers_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__srv__GetLayers_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetLayers_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `layers`
#include "rosidl_runtime_c/string_functions.h"

bool
mrpt_nav_interfaces__srv__GetLayers_Response__init(mrpt_nav_interfaces__srv__GetLayers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // layers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->layers, 0)) {
    mrpt_nav_interfaces__srv__GetLayers_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__srv__GetLayers_Response__fini(mrpt_nav_interfaces__srv__GetLayers_Response * msg)
{
  if (!msg) {
    return;
  }
  // layers
  rosidl_runtime_c__String__Sequence__fini(&msg->layers);
}

bool
mrpt_nav_interfaces__srv__GetLayers_Response__are_equal(const mrpt_nav_interfaces__srv__GetLayers_Response * lhs, const mrpt_nav_interfaces__srv__GetLayers_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // layers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->layers), &(rhs->layers)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetLayers_Response__copy(
  const mrpt_nav_interfaces__srv__GetLayers_Response * input,
  mrpt_nav_interfaces__srv__GetLayers_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // layers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->layers), &(output->layers)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__srv__GetLayers_Response *
mrpt_nav_interfaces__srv__GetLayers_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetLayers_Response * msg = (mrpt_nav_interfaces__srv__GetLayers_Response *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetLayers_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__srv__GetLayers_Response));
  bool success = mrpt_nav_interfaces__srv__GetLayers_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__srv__GetLayers_Response__destroy(mrpt_nav_interfaces__srv__GetLayers_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__srv__GetLayers_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__init(mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetLayers_Response * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__srv__GetLayers_Response *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__srv__GetLayers_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__srv__GetLayers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__srv__GetLayers_Response__fini(&data[i - 1]);
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
mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__fini(mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * array)
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
      mrpt_nav_interfaces__srv__GetLayers_Response__fini(&array->data[i]);
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

mrpt_nav_interfaces__srv__GetLayers_Response__Sequence *
mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * array = (mrpt_nav_interfaces__srv__GetLayers_Response__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetLayers_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__destroy(mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__are_equal(const mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * lhs, const mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetLayers_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetLayers_Response__Sequence__copy(
  const mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * input,
  mrpt_nav_interfaces__srv__GetLayers_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__srv__GetLayers_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__srv__GetLayers_Response * data =
      (mrpt_nav_interfaces__srv__GetLayers_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__srv__GetLayers_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__srv__GetLayers_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetLayers_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
