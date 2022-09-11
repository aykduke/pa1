// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__STRUCT_H_
#define SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Teleport in the package skibot_interfaces.
typedef struct skibot_interfaces__srv__Teleport_Request
{
  float x;
  float y;
  float theta;
} skibot_interfaces__srv__Teleport_Request;

// Struct for a sequence of skibot_interfaces__srv__Teleport_Request.
typedef struct skibot_interfaces__srv__Teleport_Request__Sequence
{
  skibot_interfaces__srv__Teleport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skibot_interfaces__srv__Teleport_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Teleport in the package skibot_interfaces.
typedef struct skibot_interfaces__srv__Teleport_Response
{
  bool success;
} skibot_interfaces__srv__Teleport_Response;

// Struct for a sequence of skibot_interfaces__srv__Teleport_Response.
typedef struct skibot_interfaces__srv__Teleport_Response__Sequence
{
  skibot_interfaces__srv__Teleport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skibot_interfaces__srv__Teleport_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKIBOT_INTERFACES__SRV__DETAIL__TELEPORT__STRUCT_H_
