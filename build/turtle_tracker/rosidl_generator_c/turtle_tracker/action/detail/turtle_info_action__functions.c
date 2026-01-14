// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_tracker:action/TurtleInfoAction.idl
// generated code does not contain a copyright notice
#include "turtle_tracker/action/detail/turtle_info_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
turtle_tracker__action__TurtleInfoAction_Goal__init(turtle_tracker__action__TurtleInfoAction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // update_rate
  // catch_distance
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_Goal__fini(turtle_tracker__action__TurtleInfoAction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // update_rate
  // catch_distance
}

bool
turtle_tracker__action__TurtleInfoAction_Goal__are_equal(const turtle_tracker__action__TurtleInfoAction_Goal * lhs, const turtle_tracker__action__TurtleInfoAction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // update_rate
  if (lhs->update_rate != rhs->update_rate) {
    return false;
  }
  // catch_distance
  if (lhs->catch_distance != rhs->catch_distance) {
    return false;
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_Goal__copy(
  const turtle_tracker__action__TurtleInfoAction_Goal * input,
  turtle_tracker__action__TurtleInfoAction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // update_rate
  output->update_rate = input->update_rate;
  // catch_distance
  output->catch_distance = input->catch_distance;
  return true;
}

turtle_tracker__action__TurtleInfoAction_Goal *
turtle_tracker__action__TurtleInfoAction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Goal * msg = (turtle_tracker__action__TurtleInfoAction_Goal *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_Goal));
  bool success = turtle_tracker__action__TurtleInfoAction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_Goal__destroy(turtle_tracker__action__TurtleInfoAction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__init(turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Goal * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_Goal *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_Goal__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__fini(turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_Goal__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_Goal__Sequence *
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array = (turtle_tracker__action__TurtleInfoAction_Goal__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_Goal__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_Goal__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_Goal * data =
      (turtle_tracker__action__TurtleInfoAction_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_tracker__action__TurtleInfoAction_Result__init(turtle_tracker__action__TurtleInfoAction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    turtle_tracker__action__TurtleInfoAction_Result__fini(msg);
    return false;
  }
  // final_distance
  // total_time
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_Result__fini(turtle_tracker__action__TurtleInfoAction_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // final_distance
  // total_time
}

bool
turtle_tracker__action__TurtleInfoAction_Result__are_equal(const turtle_tracker__action__TurtleInfoAction_Result * lhs, const turtle_tracker__action__TurtleInfoAction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // final_distance
  if (lhs->final_distance != rhs->final_distance) {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_Result__copy(
  const turtle_tracker__action__TurtleInfoAction_Result * input,
  turtle_tracker__action__TurtleInfoAction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // final_distance
  output->final_distance = input->final_distance;
  // total_time
  output->total_time = input->total_time;
  return true;
}

turtle_tracker__action__TurtleInfoAction_Result *
turtle_tracker__action__TurtleInfoAction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Result * msg = (turtle_tracker__action__TurtleInfoAction_Result *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_Result));
  bool success = turtle_tracker__action__TurtleInfoAction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_Result__destroy(turtle_tracker__action__TurtleInfoAction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_Result__Sequence__init(turtle_tracker__action__TurtleInfoAction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Result * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_Result *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_Result__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_Result__Sequence__fini(turtle_tracker__action__TurtleInfoAction_Result__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_Result__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_Result__Sequence *
turtle_tracker__action__TurtleInfoAction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Result__Sequence * array = (turtle_tracker__action__TurtleInfoAction_Result__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_Result__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_Result__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_Result__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_Result__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_Result__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_Result * data =
      (turtle_tracker__action__TurtleInfoAction_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `timestamp`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
turtle_tracker__action__TurtleInfoAction_Feedback__init(turtle_tracker__action__TurtleInfoAction_Feedback * msg)
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
    turtle_tracker__action__TurtleInfoAction_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_Feedback__fini(turtle_tracker__action__TurtleInfoAction_Feedback * msg)
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
turtle_tracker__action__TurtleInfoAction_Feedback__are_equal(const turtle_tracker__action__TurtleInfoAction_Feedback * lhs, const turtle_tracker__action__TurtleInfoAction_Feedback * rhs)
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
turtle_tracker__action__TurtleInfoAction_Feedback__copy(
  const turtle_tracker__action__TurtleInfoAction_Feedback * input,
  turtle_tracker__action__TurtleInfoAction_Feedback * output)
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

turtle_tracker__action__TurtleInfoAction_Feedback *
turtle_tracker__action__TurtleInfoAction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Feedback * msg = (turtle_tracker__action__TurtleInfoAction_Feedback *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_Feedback));
  bool success = turtle_tracker__action__TurtleInfoAction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_Feedback__destroy(turtle_tracker__action__TurtleInfoAction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__init(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Feedback * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_Feedback *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_Feedback__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__fini(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_Feedback__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_Feedback__Sequence *
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array = (turtle_tracker__action__TurtleInfoAction_Feedback__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_Feedback * data =
      (turtle_tracker__action__TurtleInfoAction_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_Feedback__copy(
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
// #include "turtle_tracker/action/detail/turtle_info_action__functions.h"

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!turtle_tracker__action__TurtleInfoAction_Goal__init(&msg->goal)) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  turtle_tracker__action__TurtleInfoAction_Goal__fini(&msg->goal);
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Request * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Request * rhs)
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
  if (!turtle_tracker__action__TurtleInfoAction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Request * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request * output)
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
  if (!turtle_tracker__action__TurtleInfoAction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

turtle_tracker__action__TurtleInfoAction_SendGoal_Request *
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg = (turtle_tracker__action__TurtleInfoAction_SendGoal_Request *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Request));
  bool success = turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence *
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array = (turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_SendGoal_Request * data =
      (turtle_tracker__action__TurtleInfoAction_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_SendGoal_Request__copy(
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
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Response * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Response * rhs)
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
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Response * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response * output)
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

turtle_tracker__action__TurtleInfoAction_SendGoal_Response *
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg = (turtle_tracker__action__TurtleInfoAction_SendGoal_Response *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Response));
  bool success = turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence *
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array = (turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_SendGoal_Response * data =
      (turtle_tracker__action__TurtleInfoAction_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_SendGoal_Response__copy(
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
turtle_tracker__action__TurtleInfoAction_GetResult_Request__init(turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Request * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Request * rhs)
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
turtle_tracker__action__TurtleInfoAction_GetResult_Request__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Request * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Request * output)
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

turtle_tracker__action__TurtleInfoAction_GetResult_Request *
turtle_tracker__action__TurtleInfoAction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg = (turtle_tracker__action__TurtleInfoAction_GetResult_Request *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Request));
  bool success = turtle_tracker__action__TurtleInfoAction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__init(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_GetResult_Request * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_GetResult_Request *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence *
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array = (turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_GetResult_Request * data =
      (turtle_tracker__action__TurtleInfoAction_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_GetResult_Request__copy(
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
// #include "turtle_tracker/action/detail/turtle_info_action__functions.h"

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__init(turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!turtle_tracker__action__TurtleInfoAction_Result__init(&msg->result)) {
    turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  turtle_tracker__action__TurtleInfoAction_Result__fini(&msg->result);
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Response * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!turtle_tracker__action__TurtleInfoAction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Response * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!turtle_tracker__action__TurtleInfoAction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

turtle_tracker__action__TurtleInfoAction_GetResult_Response *
turtle_tracker__action__TurtleInfoAction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg = (turtle_tracker__action__TurtleInfoAction_GetResult_Response *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Response));
  bool success = turtle_tracker__action__TurtleInfoAction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__init(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_GetResult_Response * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_GetResult_Response *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence *
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array = (turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_GetResult_Response * data =
      (turtle_tracker__action__TurtleInfoAction_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_GetResult_Response__copy(
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
// #include "turtle_tracker/action/detail/turtle_info_action__functions.h"

bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init(turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!turtle_tracker__action__TurtleInfoAction_Feedback__init(&msg->feedback)) {
    turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  turtle_tracker__action__TurtleInfoAction_Feedback__fini(&msg->feedback);
}

bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__are_equal(const turtle_tracker__action__TurtleInfoAction_FeedbackMessage * lhs, const turtle_tracker__action__TurtleInfoAction_FeedbackMessage * rhs)
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
  if (!turtle_tracker__action__TurtleInfoAction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__copy(
  const turtle_tracker__action__TurtleInfoAction_FeedbackMessage * input,
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage * output)
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
  if (!turtle_tracker__action__TurtleInfoAction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

turtle_tracker__action__TurtleInfoAction_FeedbackMessage *
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg = (turtle_tracker__action__TurtleInfoAction_FeedbackMessage *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_tracker__action__TurtleInfoAction_FeedbackMessage));
  bool success = turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__destroy(turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__init(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage * data = NULL;

  if (size) {
    data = (turtle_tracker__action__TurtleInfoAction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(turtle_tracker__action__TurtleInfoAction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(&data[i - 1]);
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
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__fini(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array)
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
      turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(&array->data[i]);
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

turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence *
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array = (turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_tracker__action__TurtleInfoAction_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_tracker__action__TurtleInfoAction_FeedbackMessage * data =
      (turtle_tracker__action__TurtleInfoAction_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_tracker__action__TurtleInfoAction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
