// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__STRUCT_HPP_
#define SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__skibot_interfaces__srv__Teleport_Request __attribute__((deprecated))
#else
# define DEPRECATED__skibot_interfaces__srv__Teleport_Request __declspec(deprecated)
#endif

namespace skibot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Teleport_Request_
{
  using Type = Teleport_Request_<ContainerAllocator>;

  explicit Teleport_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit Teleport_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
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

  // constant declarations

  // pointer types
  using RawPtr =
    skibot_interfaces::srv::Teleport_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const skibot_interfaces::srv::Teleport_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skibot_interfaces::srv::Teleport_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skibot_interfaces::srv::Teleport_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skibot_interfaces__srv__Teleport_Request
    std::shared_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skibot_interfaces__srv__Teleport_Request
    std::shared_ptr<skibot_interfaces::srv::Teleport_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Teleport_Request_ & other) const
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
    return true;
  }
  bool operator!=(const Teleport_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Teleport_Request_

// alias to use template instance with default allocator
using Teleport_Request =
  skibot_interfaces::srv::Teleport_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skibot_interfaces


#ifndef _WIN32
# define DEPRECATED__skibot_interfaces__srv__Teleport_Response __attribute__((deprecated))
#else
# define DEPRECATED__skibot_interfaces__srv__Teleport_Response __declspec(deprecated)
#endif

namespace skibot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Teleport_Response_
{
  using Type = Teleport_Response_<ContainerAllocator>;

  explicit Teleport_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Teleport_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    skibot_interfaces::srv::Teleport_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const skibot_interfaces::srv::Teleport_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skibot_interfaces::srv::Teleport_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skibot_interfaces::srv::Teleport_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skibot_interfaces__srv__Teleport_Response
    std::shared_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skibot_interfaces__srv__Teleport_Response
    std::shared_ptr<skibot_interfaces::srv::Teleport_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Teleport_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Teleport_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Teleport_Response_

// alias to use template instance with default allocator
using Teleport_Response =
  skibot_interfaces::srv::Teleport_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skibot_interfaces

namespace skibot_interfaces
{

namespace srv
{

struct Teleport
{
  using Request = skibot_interfaces::srv::Teleport_Request;
  using Response = skibot_interfaces::srv::Teleport_Response;
};

}  // namespace srv

}  // namespace skibot_interfaces

#endif  // SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__STRUCT_HPP_
