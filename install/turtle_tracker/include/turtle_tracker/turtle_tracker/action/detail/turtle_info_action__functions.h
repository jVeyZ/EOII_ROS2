// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_tracker:action/TurtleInfoAction.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__FUNCTIONS_H_
#define TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_tracker/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_tracker/action/detail/turtle_info_action__struct.h"

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_Goal
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Goal__init(turtle_tracker__action__TurtleInfoAction_Goal * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Goal__fini(turtle_tracker__action__TurtleInfoAction_Goal * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_Goal *
turtle_tracker__action__TurtleInfoAction_Goal__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Goal__destroy(turtle_tracker__action__TurtleInfoAction_Goal * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Goal__are_equal(const turtle_tracker__action__TurtleInfoAction_Goal * lhs, const turtle_tracker__action__TurtleInfoAction_Goal * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Goal__copy(
  const turtle_tracker__action__TurtleInfoAction_Goal * input,
  turtle_tracker__action__TurtleInfoAction_Goal * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__init(turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__fini(turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_Goal__Sequence *
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_Goal__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_Goal__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_Goal__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Goal__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_Goal__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_Goal__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_Result
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Result__init(turtle_tracker__action__TurtleInfoAction_Result * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Result__fini(turtle_tracker__action__TurtleInfoAction_Result * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_Result *
turtle_tracker__action__TurtleInfoAction_Result__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Result__destroy(turtle_tracker__action__TurtleInfoAction_Result * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Result__are_equal(const turtle_tracker__action__TurtleInfoAction_Result * lhs, const turtle_tracker__action__TurtleInfoAction_Result * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Result__copy(
  const turtle_tracker__action__TurtleInfoAction_Result * input,
  turtle_tracker__action__TurtleInfoAction_Result * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Result__Sequence__init(turtle_tracker__action__TurtleInfoAction_Result__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Result__Sequence__fini(turtle_tracker__action__TurtleInfoAction_Result__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_Result__Sequence *
turtle_tracker__action__TurtleInfoAction_Result__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Result__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_Result__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Result__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_Result__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_Result__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Result__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_Result__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_Result__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_Feedback
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Feedback__init(turtle_tracker__action__TurtleInfoAction_Feedback * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Feedback__fini(turtle_tracker__action__TurtleInfoAction_Feedback * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_Feedback *
turtle_tracker__action__TurtleInfoAction_Feedback__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Feedback__destroy(turtle_tracker__action__TurtleInfoAction_Feedback * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Feedback__are_equal(const turtle_tracker__action__TurtleInfoAction_Feedback * lhs, const turtle_tracker__action__TurtleInfoAction_Feedback * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Feedback__copy(
  const turtle_tracker__action__TurtleInfoAction_Feedback * input,
  turtle_tracker__action__TurtleInfoAction_Feedback * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__init(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__fini(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence *
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_Feedback__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_Feedback__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_SendGoal_Request *
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Request * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Request * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Request * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Request * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence *
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_SendGoal_Response *
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Response * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Response * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Response * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Response * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__init(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__fini(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence *
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__init(turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_GetResult_Request *
turtle_tracker__action__TurtleInfoAction_GetResult_Request__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Request * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Request * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Request * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Request * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Request * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__init(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence *
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__init(turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_GetResult_Response *
turtle_tracker__action__TurtleInfoAction_GetResult_Response__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Response * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Response * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Response * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Response * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Response * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__init(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__fini(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence *
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence * output);

/// Initialize action/TurtleInfoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage
 * )) before or use
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init(turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg);

/// Finalize action/TurtleInfoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini(turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg);

/// Create action/TurtleInfoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_FeedbackMessage *
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__create();

/// Destroy action/TurtleInfoAction message.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__destroy(turtle_tracker__action__TurtleInfoAction_FeedbackMessage * msg);

/// Check for action/TurtleInfoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__are_equal(const turtle_tracker__action__TurtleInfoAction_FeedbackMessage * lhs, const turtle_tracker__action__TurtleInfoAction_FeedbackMessage * rhs);

/// Copy a action/TurtleInfoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__copy(
  const turtle_tracker__action__TurtleInfoAction_FeedbackMessage * input,
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage * output);

/// Initialize array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__init(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__fini(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array);

/// Create array of action/TurtleInfoAction messages.
/**
 * It allocates the memory for the array and calls
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence *
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TurtleInfoAction messages.
/**
 * It calls
 * turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
void
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__destroy(turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * array);

/// Check for action/TurtleInfoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__are_equal(const turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * lhs, const turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TurtleInfoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_tracker
bool
turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence__copy(
  const turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * input,
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__FUNCTIONS_H_
