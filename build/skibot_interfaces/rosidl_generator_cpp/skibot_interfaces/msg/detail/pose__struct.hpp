// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from skibot_interfaces:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__MSG__DETAIL__POSE__STRUCT_HPP_
#define SKIBOT_INTERFACES__MSG__DETAIL__POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__skibot_interfaces__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__skibot_interfaces__msg__Pose __declspec(deprecated)
#endif

namespace skibot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->x_velocity = 0.0f;
      this->y_velocity = 0.0f;
      this->theta_velocity = 0.0f;
    }
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->x_velocity = 0.0f;
      this->y_velocity = 0.0f;
      this->theta_velocity = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;
  using _x_velocity_type =
    float;
  _x_velocity_type x_velocity;
  using _y_velocity_type =
    float;
  _y_velocity_type y_velocity;
  using _theta_velocity_type =
    float;
  _theta_velocity_type theta_velocity;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__x_velocity(
    const float & _arg)
  {
    this->x_velocity = _arg;
    return *this;
  }
  Type & set__y_velocity(
    const float & _arg)
  {
    this->y_velocity = _arg;
    return *this;
  }
  Type & set__theta_velocity(
    const float & _arg)
  {
    this->theta_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    skibot_interfaces::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const skibot_interfaces::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skibot_interfaces::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skibot_interfaces::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skibot_interfaces__msg__Pose
    std::shared_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skibot_interfaces__msg__Pose
    std::shared_ptr<skibot_interfaces::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->x_velocity != other.x_velocity) {
      return false;
    }
    if (this->y_velocity != other.y_velocity) {
      return false;
    }
    if (this->theta_velocity != other.theta_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  skibot_interfaces::msg::Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace skibot_interfaces

#endif  // SKIBOT_INTERFACES__MSG__DETAIL__POSE__STRUCT_HPP_
