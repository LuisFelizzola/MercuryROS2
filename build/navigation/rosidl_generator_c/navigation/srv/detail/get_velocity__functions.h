// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION__SRV__DETAIL__GET_VELOCITY__FUNCTIONS_H_
#define NAVIGATION__SRV__DETAIL__GET_VELOCITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "navigation/msg/rosidl_generator_c__visibility_control.h"

#include "navigation/srv/detail/get_velocity__struct.h"

/// Initialize srv/GetVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigation__srv__GetVelocity_Request
 * )) before or use
 * navigation__srv__GetVelocity_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Request__init(navigation__srv__GetVelocity_Request * msg);

/// Finalize srv/GetVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Request__fini(navigation__srv__GetVelocity_Request * msg);

/// Create srv/GetVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigation__srv__GetVelocity_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
navigation__srv__GetVelocity_Request *
navigation__srv__GetVelocity_Request__create();

/// Destroy srv/GetVelocity message.
/**
 * It calls
 * navigation__srv__GetVelocity_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Request__destroy(navigation__srv__GetVelocity_Request * msg);

/// Check for srv/GetVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Request__are_equal(const navigation__srv__GetVelocity_Request * lhs, const navigation__srv__GetVelocity_Request * rhs);

/// Copy a srv/GetVelocity message.
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
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Request__copy(
  const navigation__srv__GetVelocity_Request * input,
  navigation__srv__GetVelocity_Request * output);

/// Initialize array of srv/GetVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigation__srv__GetVelocity_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Request__Sequence__init(navigation__srv__GetVelocity_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetVelocity messages.
/**
 * It calls
 * navigation__srv__GetVelocity_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Request__Sequence__fini(navigation__srv__GetVelocity_Request__Sequence * array);

/// Create array of srv/GetVelocity messages.
/**
 * It allocates the memory for the array and calls
 * navigation__srv__GetVelocity_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
navigation__srv__GetVelocity_Request__Sequence *
navigation__srv__GetVelocity_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetVelocity messages.
/**
 * It calls
 * navigation__srv__GetVelocity_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Request__Sequence__destroy(navigation__srv__GetVelocity_Request__Sequence * array);

/// Check for srv/GetVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Request__Sequence__are_equal(const navigation__srv__GetVelocity_Request__Sequence * lhs, const navigation__srv__GetVelocity_Request__Sequence * rhs);

/// Copy an array of srv/GetVelocity messages.
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
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Request__Sequence__copy(
  const navigation__srv__GetVelocity_Request__Sequence * input,
  navigation__srv__GetVelocity_Request__Sequence * output);

/// Initialize srv/GetVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigation__srv__GetVelocity_Response
 * )) before or use
 * navigation__srv__GetVelocity_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Response__init(navigation__srv__GetVelocity_Response * msg);

/// Finalize srv/GetVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Response__fini(navigation__srv__GetVelocity_Response * msg);

/// Create srv/GetVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigation__srv__GetVelocity_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
navigation__srv__GetVelocity_Response *
navigation__srv__GetVelocity_Response__create();

/// Destroy srv/GetVelocity message.
/**
 * It calls
 * navigation__srv__GetVelocity_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Response__destroy(navigation__srv__GetVelocity_Response * msg);

/// Check for srv/GetVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Response__are_equal(const navigation__srv__GetVelocity_Response * lhs, const navigation__srv__GetVelocity_Response * rhs);

/// Copy a srv/GetVelocity message.
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
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Response__copy(
  const navigation__srv__GetVelocity_Response * input,
  navigation__srv__GetVelocity_Response * output);

/// Initialize array of srv/GetVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigation__srv__GetVelocity_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Response__Sequence__init(navigation__srv__GetVelocity_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetVelocity messages.
/**
 * It calls
 * navigation__srv__GetVelocity_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Response__Sequence__fini(navigation__srv__GetVelocity_Response__Sequence * array);

/// Create array of srv/GetVelocity messages.
/**
 * It allocates the memory for the array and calls
 * navigation__srv__GetVelocity_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
navigation__srv__GetVelocity_Response__Sequence *
navigation__srv__GetVelocity_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetVelocity messages.
/**
 * It calls
 * navigation__srv__GetVelocity_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
void
navigation__srv__GetVelocity_Response__Sequence__destroy(navigation__srv__GetVelocity_Response__Sequence * array);

/// Check for srv/GetVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Response__Sequence__are_equal(const navigation__srv__GetVelocity_Response__Sequence * lhs, const navigation__srv__GetVelocity_Response__Sequence * rhs);

/// Copy an array of srv/GetVelocity messages.
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
ROSIDL_GENERATOR_C_PUBLIC_navigation
bool
navigation__srv__GetVelocity_Response__Sequence__copy(
  const navigation__srv__GetVelocity_Response__Sequence * input,
  navigation__srv__GetVelocity_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION__SRV__DETAIL__GET_VELOCITY__FUNCTIONS_H_
