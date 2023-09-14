// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigation/srv/detail/get_velocity__rosidl_typesupport_introspection_c.h"
#include "navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigation/srv/detail/get_velocity__functions.h"
#include "navigation/srv/detail/get_velocity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigation__srv__GetVelocity_Request__init(message_memory);
}

void GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_fini_function(void * message_memory)
{
  navigation__srv__GetVelocity_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_member_array[3] = {
  {
    "linear_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Request, linear_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Request, linear_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Request, angular_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_members = {
  "navigation__srv",  // message namespace
  "GetVelocity_Request",  // message name
  3,  // number of fields
  sizeof(navigation__srv__GetVelocity_Request),
  GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_member_array,  // message members
  GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_type_support_handle = {
  0,
  &GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity_Request)() {
  if (!GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_type_support_handle.typesupport_identifier) {
    GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetVelocity_Request__rosidl_typesupport_introspection_c__GetVelocity_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "navigation/srv/detail/get_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "navigation/srv/detail/get_velocity__functions.h"
// already included above
// #include "navigation/srv/detail/get_velocity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigation__srv__GetVelocity_Response__init(message_memory);
}

void GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_fini_function(void * message_memory)
{
  navigation__srv__GetVelocity_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_member_array[4] = {
  {
    "w1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Response, w1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Response, w2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Response, w3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation__srv__GetVelocity_Response, w4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_members = {
  "navigation__srv",  // message namespace
  "GetVelocity_Response",  // message name
  4,  // number of fields
  sizeof(navigation__srv__GetVelocity_Response),
  GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_member_array,  // message members
  GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_type_support_handle = {
  0,
  &GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity_Response)() {
  if (!GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_type_support_handle.typesupport_identifier) {
    GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetVelocity_Response__rosidl_typesupport_introspection_c__GetVelocity_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "navigation/srv/detail/get_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_members = {
  "navigation__srv",  // service namespace
  "GetVelocity",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_Request_message_type_support_handle,
  NULL  // response message
  // navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_Response_message_type_support_handle
};

static rosidl_service_type_support_t navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_type_support_handle = {
  0,
  &navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity)() {
  if (!navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_type_support_handle.typesupport_identifier) {
    navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation, srv, GetVelocity_Response)()->data;
  }

  return &navigation__srv__detail__get_velocity__rosidl_typesupport_introspection_c__GetVelocity_service_type_support_handle;
}
