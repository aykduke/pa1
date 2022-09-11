// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skibot_interfaces:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SKIBOT_INTERFACES__MSG__DETAIL__POSE__STRUCT_H_
#define SKIBOT_INTERFACES__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pose in the package skibot_interfaces.
typedef struct skibot_interfaces__msg__Pose
{
  float x;
  float y;
  float theta;
  float x_velocity;
  float y_velocity;
  float theta_velocity;
} skibot_interfaces__msg__Pose;

// Struct for a sequence of skibot_interfaces__msg__Pose.
typedef struct skibot_interfaces__msg__Pose__Sequence
{
  skibot_interfaces__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skibot_interfaces__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKIBOT_INTERFACES__MSG__DETAIL__POSE__STRUCT_H_
