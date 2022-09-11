// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from skibot_interfaces:msg/Pose.idl
// generated code does not contain a copyright notice
#include "skibot_interfaces/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
skibot_interfaces__msg__Pose__init(skibot_interfaces__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  // x_velocity
  // y_velocity
  // theta_velocity
  return true;
}

void
skibot_interfaces__msg__Pose__fini(skibot_interfaces__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
  // x_velocity
  // y_velocity
  // theta_velocity
}

skibot_interfaces__msg__Pose *
skibot_interfaces__msg__Pose__create()
{
  skibot_interfaces__msg__Pose * msg = (skibot_interfaces__msg__Pose *)malloc(sizeof(skibot_interfaces__msg__Pose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(skibot_interfaces__msg__Pose));
  bool success = skibot_interfaces__msg__Pose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
skibot_interfaces__msg__Pose__destroy(skibot_interfaces__msg__Pose * msg)
{
  if (msg) {
    skibot_interfaces__msg__Pose__fini(msg);
  }
  free(msg);
}


bool
skibot_interfaces__msg__Pose__Sequence__init(skibot_interfaces__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  skibot_interfaces__msg__Pose * data = NULL;
  if (size) {
    data = (skibot_interfaces__msg__Pose *)calloc(size, sizeof(skibot_interfaces__msg__Pose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = skibot_interfaces__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        skibot_interfaces__msg__Pose__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
skibot_interfaces__msg__Pose__Sequence__fini(skibot_interfaces__msg__Pose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      skibot_interfaces__msg__Pose__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

skibot_interfaces__msg__Pose__Sequence *
skibot_interfaces__msg__Pose__Sequence__create(size_t size)
{
  skibot_interfaces__msg__Pose__Sequence * array = (skibot_interfaces__msg__Pose__Sequence *)malloc(sizeof(skibot_interfaces__msg__Pose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = skibot_interfaces__msg__Pose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
skibot_interfaces__msg__Pose__Sequence__destroy(skibot_interfaces__msg__Pose__Sequence * array)
{
  if (array) {
    skibot_interfaces__msg__Pose__Sequence__fini(array);
  }
  free(array);
}
