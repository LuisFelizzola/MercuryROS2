// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice
#include "navigation/srv/detail/get_velocity__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "navigation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navigation/srv/detail/get_velocity__struct.h"
#include "navigation/srv/detail/get_velocity__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetVelocity_Request__ros_msg_type = navigation__srv__GetVelocity_Request;

static bool _GetVelocity_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVelocity_Request__ros_msg_type * ros_message = static_cast<const _GetVelocity_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_x
  {
    cdr << ros_message->linear_x;
  }

  // Field name: linear_y
  {
    cdr << ros_message->linear_y;
  }

  // Field name: angular_z
  {
    cdr << ros_message->angular_z;
  }

  return true;
}

static bool _GetVelocity_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVelocity_Request__ros_msg_type * ros_message = static_cast<_GetVelocity_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_x
  {
    cdr >> ros_message->linear_x;
  }

  // Field name: linear_y
  {
    cdr >> ros_message->linear_y;
  }

  // Field name: angular_z
  {
    cdr >> ros_message->angular_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navigation
size_t get_serialized_size_navigation__srv__GetVelocity_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVelocity_Request__ros_msg_type * ros_message = static_cast<const _GetVelocity_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear_x
  {
    size_t item_size = sizeof(ros_message->linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_y
  {
    size_t item_size = sizeof(ros_message->linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_z
  {
    size_t item_size = sizeof(ros_message->angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetVelocity_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navigation__srv__GetVelocity_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navigation
size_t max_serialized_size_navigation__srv__GetVelocity_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: linear_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: linear_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angular_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetVelocity_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_navigation__srv__GetVelocity_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetVelocity_Request = {
  "navigation::srv",
  "GetVelocity_Request",
  _GetVelocity_Request__cdr_serialize,
  _GetVelocity_Request__cdr_deserialize,
  _GetVelocity_Request__get_serialized_size,
  _GetVelocity_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetVelocity_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVelocity_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation, srv, GetVelocity_Request)() {
  return &_GetVelocity_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "navigation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "navigation/srv/detail/get_velocity__struct.h"
// already included above
// #include "navigation/srv/detail/get_velocity__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetVelocity_Response__ros_msg_type = navigation__srv__GetVelocity_Response;

static bool _GetVelocity_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVelocity_Response__ros_msg_type * ros_message = static_cast<const _GetVelocity_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: w1
  {
    cdr << ros_message->w1;
  }

  // Field name: w2
  {
    cdr << ros_message->w2;
  }

  // Field name: w3
  {
    cdr << ros_message->w3;
  }

  // Field name: w4
  {
    cdr << ros_message->w4;
  }

  return true;
}

static bool _GetVelocity_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVelocity_Response__ros_msg_type * ros_message = static_cast<_GetVelocity_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: w1
  {
    cdr >> ros_message->w1;
  }

  // Field name: w2
  {
    cdr >> ros_message->w2;
  }

  // Field name: w3
  {
    cdr >> ros_message->w3;
  }

  // Field name: w4
  {
    cdr >> ros_message->w4;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navigation
size_t get_serialized_size_navigation__srv__GetVelocity_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVelocity_Response__ros_msg_type * ros_message = static_cast<const _GetVelocity_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name w1
  {
    size_t item_size = sizeof(ros_message->w1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w2
  {
    size_t item_size = sizeof(ros_message->w2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w3
  {
    size_t item_size = sizeof(ros_message->w3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w4
  {
    size_t item_size = sizeof(ros_message->w4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetVelocity_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navigation__srv__GetVelocity_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navigation
size_t max_serialized_size_navigation__srv__GetVelocity_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: w1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetVelocity_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_navigation__srv__GetVelocity_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetVelocity_Response = {
  "navigation::srv",
  "GetVelocity_Response",
  _GetVelocity_Response__cdr_serialize,
  _GetVelocity_Response__cdr_deserialize,
  _GetVelocity_Response__get_serialized_size,
  _GetVelocity_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetVelocity_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVelocity_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation, srv, GetVelocity_Response)() {
  return &_GetVelocity_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "navigation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navigation/srv/get_velocity.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetVelocity__callbacks = {
  "navigation::srv",
  "GetVelocity",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation, srv, GetVelocity_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation, srv, GetVelocity_Response)(),
};

static rosidl_service_type_support_t GetVelocity__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetVelocity__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation, srv, GetVelocity)() {
  return &GetVelocity__handle;
}

#if defined(__cplusplus)
}
#endif
