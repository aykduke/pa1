// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "skibot_interfaces/srv/detail/teleport__rosidl_typesupport_introspection_c.h"
#include "skibot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "skibot_interfaces/srv/detail/teleport__functions.h"
#include "skibot_interfaces/srv/detail/teleport__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skibot_interfaces__srv__Teleport_Request__init(message_memory);
}

void Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_fini_function(void * message_memory)
{
  skibot_interfaces__srv__Teleport_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skibot_interfaces__srv__Teleport_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skibot_interfaces__srv__Teleport_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skibot_interfaces__srv__Teleport_Request, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_members = {
  "skibot_interfaces__srv",  // message namespace
  "Teleport_Request",  // message name
  3,  // number of fields
  sizeof(skibot_interfaces__srv__Teleport_Request),
  Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_member_array,  // message members
  Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_type_support_handle = {
  0,
  &Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skibot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Request)() {
  if (!Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_type_support_handle.typesupport_identifier) {
    Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleport_Request__rosidl_typesupport_introspection_c__Teleport_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "skibot_interfaces/srv/detail/teleport__rosidl_typesupport_introspection_c.h"
// already included above
// #include "skibot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "skibot_interfaces/srv/detail/teleport__functions.h"
// already included above
// #include "skibot_interfaces/srv/detail/teleport__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skibot_interfaces__srv__Teleport_Response__init(message_memory);
}

void Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_fini_function(void * message_memory)
{
  skibot_interfaces__srv__Teleport_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skibot_interfaces__srv__Teleport_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_members = {
  "skibot_interfaces__srv",  // message namespace
  "Teleport_Response",  // message name
  1,  // number of fields
  sizeof(skibot_interfaces__srv__Teleport_Response),
  Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_member_array,  // message members
  Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_type_support_handle = {
  0,
  &Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skibot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Response)() {
  if (!Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_type_support_handle.typesupport_identifier) {
    Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleport_Response__rosidl_typesupport_introspection_c__Teleport_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "skibot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "skibot_interfaces/srv/detail/teleport__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_members = {
  "skibot_interfaces__srv",  // service namespace
  "Teleport",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_Request_message_type_support_handle,
  NULL  // response message
  // skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_Response_message_type_support_handle
};

static rosidl_service_type_support_t skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_type_support_handle = {
  0,
  &skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skibot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport)() {
  if (!skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_type_support_handle.typesupport_identifier) {
    skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Response)()->data;
  }

  return &skibot_interfaces__srv__detail__teleport__rosidl_typesupport_introspection_c__Teleport_service_type_support_handle;
}
