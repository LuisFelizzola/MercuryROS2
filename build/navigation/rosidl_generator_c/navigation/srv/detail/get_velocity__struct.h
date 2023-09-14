// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION__SRV__DETAIL__GET_VELOCITY__STRUCT_H_
#define NAVIGATION__SRV__DETAIL__GET_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetVelocity in the package navigation.
typedef struct navigation__srv__GetVelocity_Request
{
  double linear_x;
  double linear_y;
  double angular_z;
} navigation__srv__GetVelocity_Request;

// Struct for a sequence of navigation__srv__GetVelocity_Request.
typedef struct navigation__srv__GetVelocity_Request__Sequence
{
  navigation__srv__GetVelocity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation__srv__GetVelocity_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetVelocity in the package navigation.
typedef struct navigation__srv__GetVelocity_Response
{
  double w1;
  double w2;
  double w3;
  double w4;
} navigation__srv__GetVelocity_Response;

// Struct for a sequence of navigation__srv__GetVelocity_Response.
typedef struct navigation__srv__GetVelocity_Response__Sequence
{
  navigation__srv__GetVelocity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation__srv__GetVelocity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION__SRV__DETAIL__GET_VELOCITY__STRUCT_H_
