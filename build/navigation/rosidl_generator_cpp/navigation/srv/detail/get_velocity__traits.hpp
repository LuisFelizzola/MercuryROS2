// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION__SRV__DETAIL__GET_VELOCITY__TRAITS_HPP_
#define NAVIGATION__SRV__DETAIL__GET_VELOCITY__TRAITS_HPP_

#include "navigation/srv/detail/get_velocity__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigation::srv::GetVelocity_Request>()
{
  return "navigation::srv::GetVelocity_Request";
}

template<>
inline const char * name<navigation::srv::GetVelocity_Request>()
{
  return "navigation/srv/GetVelocity_Request";
}

template<>
struct has_fixed_size<navigation::srv::GetVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigation::srv::GetVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigation::srv::GetVelocity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigation::srv::GetVelocity_Response>()
{
  return "navigation::srv::GetVelocity_Response";
}

template<>
inline const char * name<navigation::srv::GetVelocity_Response>()
{
  return "navigation/srv/GetVelocity_Response";
}

template<>
struct has_fixed_size<navigation::srv::GetVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigation::srv::GetVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigation::srv::GetVelocity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigation::srv::GetVelocity>()
{
  return "navigation::srv::GetVelocity";
}

template<>
inline const char * name<navigation::srv::GetVelocity>()
{
  return "navigation/srv/GetVelocity";
}

template<>
struct has_fixed_size<navigation::srv::GetVelocity>
  : std::integral_constant<
    bool,
    has_fixed_size<navigation::srv::GetVelocity_Request>::value &&
    has_fixed_size<navigation::srv::GetVelocity_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigation::srv::GetVelocity>
  : std::integral_constant<
    bool,
    has_bounded_size<navigation::srv::GetVelocity_Request>::value &&
    has_bounded_size<navigation::srv::GetVelocity_Response>::value
  >
{
};

template<>
struct is_service<navigation::srv::GetVelocity>
  : std::true_type
{
};

template<>
struct is_service_request<navigation::srv::GetVelocity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigation::srv::GetVelocity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAVIGATION__SRV__DETAIL__GET_VELOCITY__TRAITS_HPP_
