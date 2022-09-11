// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from skibot_interfaces:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__MSG__DETAIL__POSE__BUILDER_HPP_
#define SKIBOT_INTERFACES__MSG__DETAIL__POSE__BUILDER_HPP_

#include "skibot_interfaces/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace skibot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pose_theta_velocity
{
public:
  explicit Init_Pose_theta_velocity(::skibot_interfaces::msg::Pose & msg)
  : msg_(msg)
  {}
  ::skibot_interfaces::msg::Pose theta_velocity(::skibot_interfaces::msg::Pose::_theta_velocity_type arg)
  {
    msg_.theta_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skibot_interfaces::msg::Pose msg_;
};

class Init_Pose_y_velocity
{
public:
  explicit Init_Pose_y_velocity(::skibot_interfaces::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_theta_velocity y_velocity(::skibot_interfaces::msg::Pose::_y_velocity_type arg)
  {
    msg_.y_velocity = std::move(arg);
    return Init_Pose_theta_velocity(msg_);
  }

private:
  ::skibot_interfaces::msg::Pose msg_;
};

class Init_Pose_x_velocity
{
public:
  explicit Init_Pose_x_velocity(::skibot_interfaces::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_y_velocity x_velocity(::skibot_interfaces::msg::Pose::_x_velocity_type arg)
  {
    msg_.x_velocity = std::move(arg);
    return Init_Pose_y_velocity(msg_);
  }

private:
  ::skibot_interfaces::msg::Pose msg_;
};

class Init_Pose_theta
{
public:
  explicit Init_Pose_theta(::skibot_interfaces::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_x_velocity theta(::skibot_interfaces::msg::Pose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Pose_x_velocity(msg_);
  }

private:
  ::skibot_interfaces::msg::Pose msg_;
};

class Init_Pose_y
{
public:
  explicit Init_Pose_y(::skibot_interfaces::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_theta y(::skibot_interfaces::msg::Pose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose_theta(msg_);
  }

private:
  ::skibot_interfaces::msg::Pose msg_;
};

class Init_Pose_x
{
public:
  Init_Pose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_y x(::skibot_interfaces::msg::Pose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose_y(msg_);
  }

private:
  ::skibot_interfaces::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::skibot_interfaces::msg::Pose>()
{
  return skibot_interfaces::msg::builder::Init_Pose_x();
}

}  // namespace skibot_interfaces

#endif  // SKIBOT_INTERFACES__MSG__DETAIL__POSE__BUILDER_HPP_
