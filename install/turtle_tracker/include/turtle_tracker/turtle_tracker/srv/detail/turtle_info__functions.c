// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_tracker:srv/TurtleInfo.idl
// generated code does not contain a copyright notice
#include "turtle_tracker/srv/detail/turtle_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtle_tracker__srv__TurtleInfo_Request__init(turtle_tracker__srv__TurtleInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
turtle_tracker__srv__TurtleInfo_Request__fini(turtle_tracker__srv__TurtleInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
turtle_tracker__srv__TurtleInfo_Request__are_equal(const turtle_tracker__srv__TurtleInfo_Request * lhs, const turtle_tracker__srv__TurtleInfo_Request * rhs)
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
turtle_tracker__srv__TurtleInfo_Request__copy(
  const turtle_tracker__srv__TurtleInfo_Request * input,
  turtle_tracker__srv__TurtleInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

turtle_tracker__srv__TurtleInfo_Request *
turtle_tracker__srv__TurtleInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__srv__TurtleInfo_Request * msg = (turtle_tracker__srv__TurtleInfo_Request *)allocator.allocate(sizeof(turtle_tracker__srv__TurtleInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__srv__TurtleInfo_Request));
  bool success = turtle_tracker__srv__TurtleInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__srv__TurtleInfo_Request__destroy(turtle_tracker__srv__TurtleInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__srv__TurtleInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__srv__TurtleInfo_Request__Sequence__init(turtle_tracker__srv__TurtleInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__srv__TurtleInfo_Request * data = NULL;

  if (size) {
    data = (turtle_tracker__srv__TurtleInfo_Request *)allocator.zero_allocate(size, sizeof(turtle_tracker__srv__TurtleInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__srv__TurtleInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__srv__TurtleInfo_Request__fini(&data[i - 1]);
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
turtle_tracker__srv__TurtleInfo_Request__Sequence__fini(turtle_tracker__srv__TurtleInfo_Request__Sequence * array)
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
      turtle_tracker__srv__TurtleInfo_Request__fini(&array->data[i]);
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

turtle_tracker__srv__TurtleInfo_Request__Sequence *
turtle_tracker__srv__TurtleInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__srv__TurtleInfo_Request__Sequence * array = (turtle_tracker__srv__TurtleInfo_Request__Sequence *)allocator.allocate(sizeof(turtle_tracker__srv__TurtleInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__srv__TurtleInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__srv__TurtleInfo_Request__Sequence__destroy(turtle_tracker__srv__TurtleInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__srv__TurtleInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__srv__TurtleInfo_Request__Sequence__are_equal(const turtle_tracker__srv__TurtleInfo_Request__Sequence * lhs, const turtle_tracker__srv__TurtleInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__srv__TurtleInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__srv__TurtleInfo_Request__Sequence__copy(
  const turtle_tracker__srv__TurtleInfo_Request__Sequence * input,
  turtle_tracker__srv__TurtleInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__srv__TurtleInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__srv__TurtleInfo_Request * data =
      (turtle_tracker__srv__TurtleInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__srv__TurtleInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__srv__TurtleInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__srv__TurtleInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `timestamp`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_tracker__srv__TurtleInfo_Response__init(turtle_tracker__srv__TurtleInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // turtle1_x
  // turtle1_y
  // turtle1_theta
  // explorer_x
  // explorer_y
  // explorer_theta
  // turtle1_linear_vel
  // turtle1_angular_vel
  // explorer_linear_vel
  // explorer_angular_vel
  // distance
  // timestamp
  if (!rosidl_runtime_c__String__init(&msg->timestamp)) {
    turtle_tracker__srv__TurtleInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__srv__TurtleInfo_Response__fini(turtle_tracker__srv__TurtleInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // turtle1_x
  // turtle1_y
  // turtle1_theta
  // explorer_x
  // explorer_y
  // explorer_theta
  // turtle1_linear_vel
  // turtle1_angular_vel
  // explorer_linear_vel
  // explorer_angular_vel
  // distance
  // timestamp
  rosidl_runtime_c__String__fini(&msg->timestamp);
}

bool
turtle_tracker__srv__TurtleInfo_Response__are_equal(const turtle_tracker__srv__TurtleInfo_Response * lhs, const turtle_tracker__srv__TurtleInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtle1_x
  if (lhs->turtle1_x != rhs->turtle1_x) {
    return false;
  }
  // turtle1_y
  if (lhs->turtle1_y != rhs->turtle1_y) {
    return false;
  }
  // turtle1_theta
  if (lhs->turtle1_theta != rhs->turtle1_theta) {
    return false;
  }
  // explorer_x
  if (lhs->explorer_x != rhs->explorer_x) {
    return false;
  }
  // explorer_y
  if (lhs->explorer_y != rhs->explorer_y) {
    return false;
  }
  // explorer_theta
  if (lhs->explorer_theta != rhs->explorer_theta) {
    return false;
  }
  // turtle1_linear_vel
  if (lhs->turtle1_linear_vel != rhs->turtle1_linear_vel) {
    return false;
  }
  // turtle1_angular_vel
  if (lhs->turtle1_angular_vel != rhs->turtle1_angular_vel) {
    return false;
  }
  // explorer_linear_vel
  if (lhs->explorer_linear_vel != rhs->explorer_linear_vel) {
    return false;
  }
  // explorer_angular_vel
  if (lhs->explorer_angular_vel != rhs->explorer_angular_vel) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
turtle_tracker__srv__TurtleInfo_Response__copy(
  const turtle_tracker__srv__TurtleInfo_Response * input,
  turtle_tracker__srv__TurtleInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // turtle1_x
  output->turtle1_x = input->turtle1_x;
  // turtle1_y
  output->turtle1_y = input->turtle1_y;
  // turtle1_theta
  output->turtle1_theta = input->turtle1_theta;
  // explorer_x
  output->explorer_x = input->explorer_x;
  // explorer_y
  output->explorer_y = input->explorer_y;
  // explorer_theta
  output->explorer_theta = input->explorer_theta;
  // turtle1_linear_vel
  output->turtle1_linear_vel = input->turtle1_linear_vel;
  // turtle1_angular_vel
  output->turtle1_angular_vel = input->turtle1_angular_vel;
  // explorer_linear_vel
  output->explorer_linear_vel = input->explorer_linear_vel;
  // explorer_angular_vel
  output->explorer_angular_vel = input->explorer_angular_vel;
  // distance
  output->distance = input->distance;
  // timestamp
  if (!rosidl_runtime_c__String__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

turtle_tracker__srv__TurtleInfo_Response *
turtle_tracker__srv__TurtleInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__srv__TurtleInfo_Response * msg = (turtle_tracker__srv__TurtleInfo_Response *)allocator.allocate(sizeof(turtle_tracker__srv__TurtleInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__srv__TurtleInfo_Response));
  bool success = turtle_tracker__srv__TurtleInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__srv__TurtleInfo_Response__destroy(turtle_tracker__srv__TurtleInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__srv__TurtleInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__srv__TurtleInfo_Response__Sequence__init(turtle_tracker__srv__TurtleInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__srv__TurtleInfo_Response * data = NULL;

  if (size) {
    data = (turtle_tracker__srv__TurtleInfo_Response *)allocator.zero_allocate(size, sizeof(turtle_tracker__srv__TurtleInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__srv__TurtleInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__srv__TurtleInfo_Response__fini(&data[i - 1]);
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
turtle_tracker__srv__TurtleInfo_Response__Sequence__fini(turtle_tracker__srv__TurtleInfo_Response__Sequence * array)
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
      turtle_tracker__srv__TurtleInfo_Response__fini(&array->data[i]);
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

turtle_tracker__srv__TurtleInfo_Response__Sequence *
turtle_tracker__srv__TurtleInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__srv__TurtleInfo_Response__Sequence * array = (turtle_tracker__srv__TurtleInfo_Response__Sequence *)allocator.allocate(sizeof(turtle_tracker__srv__TurtleInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__srv__TurtleInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__srv__TurtleInfo_Response__Sequence__destroy(turtle_tracker__srv__TurtleInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__srv__TurtleInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__srv__TurtleInfo_Response__Sequence__are_equal(const turtle_tracker__srv__TurtleInfo_Response__Sequence * lhs, const turtle_tracker__srv__TurtleInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__srv__TurtleInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__srv__TurtleInfo_Response__Sequence__copy(
  const turtle_tracker__srv__TurtleInfo_Response__Sequence * input,
  turtle_tracker__srv__TurtleInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__srv__TurtleInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__srv__TurtleInfo_Response * data =
      (turtle_tracker__srv__TurtleInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__srv__TurtleInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__srv__TurtleInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__srv__TurtleInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
