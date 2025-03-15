// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_nav_interfaces:srv/GetGridmapLayer.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/srv/detail/get_gridmap_layer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `layer_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__init(mrpt_nav_interfaces__srv__GetGridmapLayer_Request * msg)
{
  if (!msg) {
    return false;
  }
  // layer_name
  if (!rosidl_runtime_c__String__init(&msg->layer_name)) {
    mrpt_nav_interfaces__srv__GetGridmapLayer_Request__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__fini(mrpt_nav_interfaces__srv__GetGridmapLayer_Request * msg)
{
  if (!msg) {
    return;
  }
  // layer_name
  rosidl_runtime_c__String__fini(&msg->layer_name);
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__are_equal(const mrpt_nav_interfaces__srv__GetGridmapLayer_Request * lhs, const mrpt_nav_interfaces__srv__GetGridmapLayer_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // layer_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->layer_name), &(rhs->layer_name)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__copy(
  const mrpt_nav_interfaces__srv__GetGridmapLayer_Request * input,
  mrpt_nav_interfaces__srv__GetGridmapLayer_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // layer_name
  if (!rosidl_runtime_c__String__copy(
      &(input->layer_name), &(output->layer_name)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__srv__GetGridmapLayer_Request *
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetGridmapLayer_Request * msg = (mrpt_nav_interfaces__srv__GetGridmapLayer_Request *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Request));
  bool success = mrpt_nav_interfaces__srv__GetGridmapLayer_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__destroy(mrpt_nav_interfaces__srv__GetGridmapLayer_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__srv__GetGridmapLayer_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__init(mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetGridmapLayer_Request * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__srv__GetGridmapLayer_Request *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__srv__GetGridmapLayer_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__srv__GetGridmapLayer_Request__fini(&data[i - 1]);
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
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__fini(mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * array)
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
      mrpt_nav_interfaces__srv__GetGridmapLayer_Request__fini(&array->data[i]);
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

mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence *
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * array = (mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__destroy(mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__are_equal(const mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * lhs, const mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetGridmapLayer_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence__copy(
  const mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * input,
  mrpt_nav_interfaces__srv__GetGridmapLayer_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__srv__GetGridmapLayer_Request * data =
      (mrpt_nav_interfaces__srv__GetGridmapLayer_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__srv__GetGridmapLayer_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__srv__GetGridmapLayer_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetGridmapLayer_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `grid`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__init(mrpt_nav_interfaces__srv__GetGridmapLayer_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid
  // grid
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->grid)) {
    mrpt_nav_interfaces__srv__GetGridmapLayer_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__fini(mrpt_nav_interfaces__srv__GetGridmapLayer_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid
  // grid
  nav_msgs__msg__OccupancyGrid__fini(&msg->grid);
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__are_equal(const mrpt_nav_interfaces__srv__GetGridmapLayer_Response * lhs, const mrpt_nav_interfaces__srv__GetGridmapLayer_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // grid
  if (!nav_msgs__msg__OccupancyGrid__are_equal(
      &(lhs->grid), &(rhs->grid)))
  {
    return false;
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__copy(
  const mrpt_nav_interfaces__srv__GetGridmapLayer_Response * input,
  mrpt_nav_interfaces__srv__GetGridmapLayer_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid
  output->valid = input->valid;
  // grid
  if (!nav_msgs__msg__OccupancyGrid__copy(
      &(input->grid), &(output->grid)))
  {
    return false;
  }
  return true;
}

mrpt_nav_interfaces__srv__GetGridmapLayer_Response *
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetGridmapLayer_Response * msg = (mrpt_nav_interfaces__srv__GetGridmapLayer_Response *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Response));
  bool success = mrpt_nav_interfaces__srv__GetGridmapLayer_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__destroy(mrpt_nav_interfaces__srv__GetGridmapLayer_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_nav_interfaces__srv__GetGridmapLayer_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__init(mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetGridmapLayer_Response * data = NULL;

  if (size) {
    data = (mrpt_nav_interfaces__srv__GetGridmapLayer_Response *)allocator.zero_allocate(size, sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_nav_interfaces__srv__GetGridmapLayer_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_nav_interfaces__srv__GetGridmapLayer_Response__fini(&data[i - 1]);
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
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__fini(mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * array)
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
      mrpt_nav_interfaces__srv__GetGridmapLayer_Response__fini(&array->data[i]);
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

mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence *
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * array = (mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence *)allocator.allocate(sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__destroy(mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__are_equal(const mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * lhs, const mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetGridmapLayer_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence__copy(
  const mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * input,
  mrpt_nav_interfaces__srv__GetGridmapLayer_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrpt_nav_interfaces__srv__GetGridmapLayer_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_nav_interfaces__srv__GetGridmapLayer_Response * data =
      (mrpt_nav_interfaces__srv__GetGridmapLayer_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_nav_interfaces__srv__GetGridmapLayer_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_nav_interfaces__srv__GetGridmapLayer_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_nav_interfaces__srv__GetGridmapLayer_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
