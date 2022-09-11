// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__TRAITS_HPP_
#define SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__TRAITS_HPP_

#include "skibot_interfaces/srv/detail/teleport__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<skibot_interfaces::srv::Teleport_Request>()
{
  return "skibot_interfaces::srv::Teleport_Request";
}

template<>
inline const char * name<skibot_interfaces::srv::Teleport_Request>()
{
  return "skibot_interfaces/srv/Teleport_Request";
}

template<>
struct has_fixed_size<skibot_interfaces::srv::Teleport_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<skibot_interfaces::srv::Teleport_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<skibot_interfaces::srv::Teleport_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<skibot_interfaces::srv::Teleport_Response>()
{
  return "skibot_interfaces::srv::Teleport_Response";
}

template<>
inline const char * name<skibot_interfaces::srv::Teleport_Response>()
{
  return "skibot_interfaces/srv/Teleport_Response";
}

template<>
struct has_fixed_size<skibot_interfaces::srv::Teleport_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<skibot_interfaces::srv::Teleport_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<skibot_interfaces::srv::Teleport_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<skibot_interfaces::srv::Teleport>()
{
  return "skibot_interfaces::srv::Teleport";
}

template<>
inline const char * name<skibot_interfaces::srv::Teleport>()
{
  return "skibot_interfaces/srv/Teleport";
}

template<>
struct has_fixed_size<skibot_interfaces::srv::Teleport>
  : std::integral_constant<
    bool,
    has_fixed_size<skibot_interfaces::srv::Teleport_Request>::value &&
    has_fixed_size<skibot_interfaces::srv::Teleport_Response>::value
  >
{
};

template<>
struct has_bounded_size<skibot_interfaces::srv::Teleport>
  : std::integral_constant<
    bool,
    has_bounded_size<skibot_interfaces::srv::Teleport_Request>::value &&
    has_bounded_size<skibot_interfaces::srv::Teleport_Response>::value
  >
{
};

template<>
struct is_service<skibot_interfaces::srv::Teleport>
  : std::true_type
{
};

template<>
struct is_service_request<skibot_interfaces::srv::Teleport_Request>
  : std::true_type
{
};

template<>
struct is_service_response<skibot_interfaces::srv::Teleport_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__TRAITS_HPP_
