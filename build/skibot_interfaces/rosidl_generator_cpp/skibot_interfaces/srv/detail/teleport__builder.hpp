// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__BUILDER_HPP_
#define SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__BUILDER_HPP_

#include "skibot_interfaces/srv/detail/teleport__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace skibot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Teleport_Request_theta
{
public:
  explicit Init_Teleport_Request_theta(::skibot_interfaces::srv::Teleport_Request & msg)
  : msg_(msg)
  {}
  ::skibot_interfaces::srv::Teleport_Request theta(::skibot_interfaces::srv::Teleport_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skibot_interfaces::srv::Teleport_Request msg_;
};

class Init_Teleport_Request_y
{
public:
  explicit Init_Teleport_Request_y(::skibot_interfaces::srv::Teleport_Request & msg)
  : msg_(msg)
  {}
  Init_Teleport_Request_theta y(::skibot_interfaces::srv::Teleport_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Teleport_Request_theta(msg_);
  }

private:
  ::skibot_interfaces::srv::Teleport_Request msg_;
};

class Init_Teleport_Request_x
{
public:
  Init_Teleport_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleport_Request_y x(::skibot_interfaces::srv::Teleport_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Teleport_Request_y(msg_);
  }

private:
  ::skibot_interfaces::srv::Teleport_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skibot_interfaces::srv::Teleport_Request>()
{
  return skibot_interfaces::srv::builder::Init_Teleport_Request_x();
}

}  // namespace skibot_interfaces


namespace skibot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Teleport_Response_success
{
public:
  Init_Teleport_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::skibot_interfaces::srv::Teleport_Response success(::skibot_interfaces::srv::Teleport_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skibot_interfaces::srv::Teleport_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skibot_interfaces::srv::Teleport_Response>()
{
  return skibot_interfaces::srv::builder::Init_Teleport_Response_success();
}

}  // namespace skibot_interfaces

#endif  // SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__BUILDER_HPP_
