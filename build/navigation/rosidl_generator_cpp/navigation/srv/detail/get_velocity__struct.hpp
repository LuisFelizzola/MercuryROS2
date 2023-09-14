// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION__SRV__DETAIL__GET_VELOCITY__STRUCT_HPP_
#define NAVIGATION__SRV__DETAIL__GET_VELOCITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__navigation__srv__GetVelocity_Request __attribute__((deprecated))
#else
# define DEPRECATED__navigation__srv__GetVelocity_Request __declspec(deprecated)
#endif

namespace navigation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetVelocity_Request_
{
  using Type = GetVelocity_Request_<ContainerAllocator>;

  explicit GetVelocity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->linear_y = 0.0;
      this->angular_z = 0.0;
    }
  }

  explicit GetVelocity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->linear_y = 0.0;
      this->angular_z = 0.0;
    }
  }

  // field types and members
  using _linear_x_type =
    double;
  _linear_x_type linear_x;
  using _linear_y_type =
    double;
  _linear_y_type linear_y;
  using _angular_z_type =
    double;
  _angular_z_type angular_z;

  // setters for named parameter idiom
  Type & set__linear_x(
    const double & _arg)
  {
    this->linear_x = _arg;
    return *this;
  }
  Type & set__linear_y(
    const double & _arg)
  {
    this->linear_y = _arg;
    return *this;
  }
  Type & set__angular_z(
    const double & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigation::srv::GetVelocity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigation::srv::GetVelocity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigation::srv::GetVelocity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigation::srv::GetVelocity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigation__srv__GetVelocity_Request
    std::shared_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigation__srv__GetVelocity_Request
    std::shared_ptr<navigation::srv::GetVelocity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetVelocity_Request_ & other) const
  {
    if (this->linear_x != other.linear_x) {
      return false;
    }
    if (this->linear_y != other.linear_y) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetVelocity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetVelocity_Request_

// alias to use template instance with default allocator
using GetVelocity_Request =
  navigation::srv::GetVelocity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navigation


#ifndef _WIN32
# define DEPRECATED__navigation__srv__GetVelocity_Response __attribute__((deprecated))
#else
# define DEPRECATED__navigation__srv__GetVelocity_Response __declspec(deprecated)
#endif

namespace navigation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetVelocity_Response_
{
  using Type = GetVelocity_Response_<ContainerAllocator>;

  explicit GetVelocity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->w1 = 0.0;
      this->w2 = 0.0;
      this->w3 = 0.0;
      this->w4 = 0.0;
    }
  }

  explicit GetVelocity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->w1 = 0.0;
      this->w2 = 0.0;
      this->w3 = 0.0;
      this->w4 = 0.0;
    }
  }

  // field types and members
  using _w1_type =
    double;
  _w1_type w1;
  using _w2_type =
    double;
  _w2_type w2;
  using _w3_type =
    double;
  _w3_type w3;
  using _w4_type =
    double;
  _w4_type w4;

  // setters for named parameter idiom
  Type & set__w1(
    const double & _arg)
  {
    this->w1 = _arg;
    return *this;
  }
  Type & set__w2(
    const double & _arg)
  {
    this->w2 = _arg;
    return *this;
  }
  Type & set__w3(
    const double & _arg)
  {
    this->w3 = _arg;
    return *this;
  }
  Type & set__w4(
    const double & _arg)
  {
    this->w4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigation::srv::GetVelocity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigation::srv::GetVelocity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigation::srv::GetVelocity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigation::srv::GetVelocity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigation__srv__GetVelocity_Response
    std::shared_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigation__srv__GetVelocity_Response
    std::shared_ptr<navigation::srv::GetVelocity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetVelocity_Response_ & other) const
  {
    if (this->w1 != other.w1) {
      return false;
    }
    if (this->w2 != other.w2) {
      return false;
    }
    if (this->w3 != other.w3) {
      return false;
    }
    if (this->w4 != other.w4) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetVelocity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetVelocity_Response_

// alias to use template instance with default allocator
using GetVelocity_Response =
  navigation::srv::GetVelocity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navigation

namespace navigation
{

namespace srv
{

struct GetVelocity
{
  using Request = navigation::srv::GetVelocity_Request;
  using Response = navigation::srv::GetVelocity_Response;
};

}  // namespace srv

}  // namespace navigation

#endif  // NAVIGATION__SRV__DETAIL__GET_VELOCITY__STRUCT_HPP_
