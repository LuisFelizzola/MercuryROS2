// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice
#include "navigation/srv/detail/get_velocity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "navigation/srv/detail/get_velocity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace navigation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
cdr_serialize(
  const navigation::srv::GetVelocity_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear_x
  cdr << ros_message.linear_x;
  // Member: linear_y
  cdr << ros_message.linear_y;
  // Member: angular_z
  cdr << ros_message.angular_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  navigation::srv::GetVelocity_Request & ros_message)
{
  // Member: linear_x
  cdr >> ros_message.linear_x;

  // Member: linear_y
  cdr >> ros_message.linear_y;

  // Member: angular_z
  cdr >> ros_message.angular_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
get_serialized_size(
  const navigation::srv::GetVelocity_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear_x
  {
    size_t item_size = sizeof(ros_message.linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_y
  {
    size_t item_size = sizeof(ros_message.linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_z
  {
    size_t item_size = sizeof(ros_message.angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
max_serialized_size_GetVelocity_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: linear_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: linear_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetVelocity_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const navigation::srv::GetVelocity_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetVelocity_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<navigation::srv::GetVelocity_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetVelocity_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const navigation::srv::GetVelocity_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetVelocity_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetVelocity_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetVelocity_Request__callbacks = {
  "navigation::srv",
  "GetVelocity_Request",
  _GetVelocity_Request__cdr_serialize,
  _GetVelocity_Request__cdr_deserialize,
  _GetVelocity_Request__get_serialized_size,
  _GetVelocity_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetVelocity_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetVelocity_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace navigation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_navigation
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation::srv::GetVelocity_Request>()
{
  return &navigation::srv::typesupport_fastrtps_cpp::_GetVelocity_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation, srv, GetVelocity_Request)() {
  return &navigation::srv::typesupport_fastrtps_cpp::_GetVelocity_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace navigation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
cdr_serialize(
  const navigation::srv::GetVelocity_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: w1
  cdr << ros_message.w1;
  // Member: w2
  cdr << ros_message.w2;
  // Member: w3
  cdr << ros_message.w3;
  // Member: w4
  cdr << ros_message.w4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  navigation::srv::GetVelocity_Response & ros_message)
{
  // Member: w1
  cdr >> ros_message.w1;

  // Member: w2
  cdr >> ros_message.w2;

  // Member: w3
  cdr >> ros_message.w3;

  // Member: w4
  cdr >> ros_message.w4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
get_serialized_size(
  const navigation::srv::GetVelocity_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: w1
  {
    size_t item_size = sizeof(ros_message.w1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w2
  {
    size_t item_size = sizeof(ros_message.w2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w3
  {
    size_t item_size = sizeof(ros_message.w3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w4
  {
    size_t item_size = sizeof(ros_message.w4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation
max_serialized_size_GetVelocity_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: w1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetVelocity_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const navigation::srv::GetVelocity_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetVelocity_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<navigation::srv::GetVelocity_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetVelocity_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const navigation::srv::GetVelocity_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetVelocity_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetVelocity_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetVelocity_Response__callbacks = {
  "navigation::srv",
  "GetVelocity_Response",
  _GetVelocity_Response__cdr_serialize,
  _GetVelocity_Response__cdr_deserialize,
  _GetVelocity_Response__get_serialized_size,
  _GetVelocity_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetVelocity_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetVelocity_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace navigation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_navigation
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation::srv::GetVelocity_Response>()
{
  return &navigation::srv::typesupport_fastrtps_cpp::_GetVelocity_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation, srv, GetVelocity_Response)() {
  return &navigation::srv::typesupport_fastrtps_cpp::_GetVelocity_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace navigation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetVelocity__callbacks = {
  "navigation::srv",
  "GetVelocity",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation, srv, GetVelocity_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation, srv, GetVelocity_Response)(),
};

static rosidl_service_type_support_t _GetVelocity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetVelocity__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace navigation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_navigation
const rosidl_service_type_support_t *
get_service_type_support_handle<navigation::srv::GetVelocity>()
{
  return &navigation::srv::typesupport_fastrtps_cpp::_GetVelocity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation, srv, GetVelocity)() {
  return &navigation::srv::typesupport_fastrtps_cpp::_GetVelocity__handle;
}

#ifdef __cplusplus
}
#endif
