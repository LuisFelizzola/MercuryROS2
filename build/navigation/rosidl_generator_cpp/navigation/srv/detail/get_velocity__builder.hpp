// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION__SRV__DETAIL__GET_VELOCITY__BUILDER_HPP_
#define NAVIGATION__SRV__DETAIL__GET_VELOCITY__BUILDER_HPP_

#include "navigation/srv/detail/get_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace navigation
{

namespace srv
{

namespace builder
{

class Init_GetVelocity_Request_angular_z
{
public:
  explicit Init_GetVelocity_Request_angular_z(::navigation::srv::GetVelocity_Request & msg)
  : msg_(msg)
  {}
  ::navigation::srv::GetVelocity_Request angular_z(::navigation::srv::GetVelocity_Request::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Request msg_;
};

class Init_GetVelocity_Request_linear_y
{
public:
  explicit Init_GetVelocity_Request_linear_y(::navigation::srv::GetVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_GetVelocity_Request_angular_z linear_y(::navigation::srv::GetVelocity_Request::_linear_y_type arg)
  {
    msg_.linear_y = std::move(arg);
    return Init_GetVelocity_Request_angular_z(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Request msg_;
};

class Init_GetVelocity_Request_linear_x
{
public:
  Init_GetVelocity_Request_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVelocity_Request_linear_y linear_x(::navigation::srv::GetVelocity_Request::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_GetVelocity_Request_linear_y(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation::srv::GetVelocity_Request>()
{
  return navigation::srv::builder::Init_GetVelocity_Request_linear_x();
}

}  // namespace navigation


namespace navigation
{

namespace srv
{

namespace builder
{

class Init_GetVelocity_Response_w4
{
public:
  explicit Init_GetVelocity_Response_w4(::navigation::srv::GetVelocity_Response & msg)
  : msg_(msg)
  {}
  ::navigation::srv::GetVelocity_Response w4(::navigation::srv::GetVelocity_Response::_w4_type arg)
  {
    msg_.w4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Response msg_;
};

class Init_GetVelocity_Response_w3
{
public:
  explicit Init_GetVelocity_Response_w3(::navigation::srv::GetVelocity_Response & msg)
  : msg_(msg)
  {}
  Init_GetVelocity_Response_w4 w3(::navigation::srv::GetVelocity_Response::_w3_type arg)
  {
    msg_.w3 = std::move(arg);
    return Init_GetVelocity_Response_w4(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Response msg_;
};

class Init_GetVelocity_Response_w2
{
public:
  explicit Init_GetVelocity_Response_w2(::navigation::srv::GetVelocity_Response & msg)
  : msg_(msg)
  {}
  Init_GetVelocity_Response_w3 w2(::navigation::srv::GetVelocity_Response::_w2_type arg)
  {
    msg_.w2 = std::move(arg);
    return Init_GetVelocity_Response_w3(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Response msg_;
};

class Init_GetVelocity_Response_w1
{
public:
  Init_GetVelocity_Response_w1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVelocity_Response_w2 w1(::navigation::srv::GetVelocity_Response::_w1_type arg)
  {
    msg_.w1 = std::move(arg);
    return Init_GetVelocity_Response_w2(msg_);
  }

private:
  ::navigation::srv::GetVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation::srv::GetVelocity_Response>()
{
  return navigation::srv::builder::Init_GetVelocity_Response_w1();
}

}  // namespace navigation

#endif  // NAVIGATION__SRV__DETAIL__GET_VELOCITY__BUILDER_HPP_
