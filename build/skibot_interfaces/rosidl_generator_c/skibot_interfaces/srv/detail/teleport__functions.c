// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice
#include "skibot_interfaces/srv/detail/teleport__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
skibot_interfaces__srv__Teleport_Request__init(skibot_interfaces__srv__Teleport_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
skibot_interfaces__srv__Teleport_Request__fini(skibot_interfaces__srv__Teleport_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

skibot_interfaces__srv__Teleport_Request *
skibot_interfaces__srv__Teleport_Request__create()
{
  skibot_interfaces__srv__Teleport_Request * msg = (skibot_interfaces__srv__Teleport_Request *)malloc(sizeof(skibot_interfaces__srv__Teleport_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(skibot_interfaces__srv__Teleport_Request));
  bool success = skibot_interfaces__srv__Teleport_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
skibot_interfaces__srv__Teleport_Request__destroy(skibot_interfaces__srv__Teleport_Request * msg)
{
  if (msg) {
    skibot_interfaces__srv__Teleport_Request__fini(msg);
  }
  free(msg);
}


bool
skibot_interfaces__srv__Teleport_Request__Sequence__init(skibot_interfaces__srv__Teleport_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  skibot_interfaces__srv__Teleport_Request * data = NULL;
  if (size) {
    data = (skibot_interfaces__srv__Teleport_Request *)calloc(size, sizeof(skibot_interfaces__srv__Teleport_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = skibot_interfaces__srv__Teleport_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        skibot_interfaces__srv__Teleport_Request__fini(&data[i - 1]);
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
skibot_interfaces__srv__Teleport_Request__Sequence__fini(skibot_interfaces__srv__Teleport_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      skibot_interfaces__srv__Teleport_Request__fini(&array->data[i]);
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

skibot_interfaces__srv__Teleport_Request__Sequence *
skibot_interfaces__srv__Teleport_Request__Sequence__create(size_t size)
{
  skibot_interfaces__srv__Teleport_Request__Sequence * array = (skibot_interfaces__srv__Teleport_Request__Sequence *)malloc(sizeof(skibot_interfaces__srv__Teleport_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = skibot_interfaces__srv__Teleport_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
skibot_interfaces__srv__Teleport_Request__Sequence__destroy(skibot_interfaces__srv__Teleport_Request__Sequence * array)
{
  if (array) {
    skibot_interfaces__srv__Teleport_Request__Sequence__fini(array);
  }
  free(array);
}


bool
skibot_interfaces__srv__Teleport_Response__init(skibot_interfaces__srv__Teleport_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
skibot_interfaces__srv__Teleport_Response__fini(skibot_interfaces__srv__Teleport_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

skibot_interfaces__srv__Teleport_Response *
skibot_interfaces__srv__Teleport_Response__create()
{
  skibot_interfaces__srv__Teleport_Response * msg = (skibot_interfaces__srv__Teleport_Response *)malloc(sizeof(skibot_interfaces__srv__Teleport_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(skibot_interfaces__srv__Teleport_Response));
  bool success = skibot_interfaces__srv__Teleport_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
skibot_interfaces__srv__Teleport_Response__destroy(skibot_interfaces__srv__Teleport_Response * msg)
{
  if (msg) {
    skibot_interfaces__srv__Teleport_Response__fini(msg);
  }
  free(msg);
}


bool
skibot_interfaces__srv__Teleport_Response__Sequence__init(skibot_interfaces__srv__Teleport_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  skibot_interfaces__srv__Teleport_Response * data = NULL;
  if (size) {
    data = (skibot_interfaces__srv__Teleport_Response *)calloc(size, sizeof(skibot_interfaces__srv__Teleport_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = skibot_interfaces__srv__Teleport_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        skibot_interfaces__srv__Teleport_Response__fini(&data[i - 1]);
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
skibot_interfaces__srv__Teleport_Response__Sequence__fini(skibot_interfaces__srv__Teleport_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      skibot_interfaces__srv__Teleport_Response__fini(&array->data[i]);
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

skibot_interfaces__srv__Teleport_Response__Sequence *
skibot_interfaces__srv__Teleport_Response__Sequence__create(size_t size)
{
  skibot_interfaces__srv__Teleport_Response__Sequence * array = (skibot_interfaces__srv__Teleport_Response__Sequence *)malloc(sizeof(skibot_interfaces__srv__Teleport_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = skibot_interfaces__srv__Teleport_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
skibot_interfaces__srv__Teleport_Response__Sequence__destroy(skibot_interfaces__srv__Teleport_Response__Sequence * array)
{
  if (array) {
    skibot_interfaces__srv__Teleport_Response__Sequence__fini(array);
  }
  free(array);
}
