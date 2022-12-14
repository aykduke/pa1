// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from skibot_interfaces:srv/Teleport.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "skibot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "skibot_interfaces/srv/detail/teleport__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace skibot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Teleport_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleport_Request_type_support_ids_t;

static const _Teleport_Request_type_support_ids_t _Teleport_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleport_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleport_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleport_Request_type_support_symbol_names_t _Teleport_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skibot_interfaces, srv, Teleport_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Request)),
  }
};

typedef struct _Teleport_Request_type_support_data_t
{
  void * data[2];
} _Teleport_Request_type_support_data_t;

static _Teleport_Request_type_support_data_t _Teleport_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleport_Request_message_typesupport_map = {
  2,
  "skibot_interfaces",
  &_Teleport_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Teleport_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Teleport_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleport_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleport_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace skibot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_skibot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, skibot_interfaces, srv, Teleport_Request)() {
  return &::skibot_interfaces::srv::rosidl_typesupport_c::Teleport_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "skibot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "skibot_interfaces/srv/detail/teleport__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace skibot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Teleport_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleport_Response_type_support_ids_t;

static const _Teleport_Response_type_support_ids_t _Teleport_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleport_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleport_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleport_Response_type_support_symbol_names_t _Teleport_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skibot_interfaces, srv, Teleport_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport_Response)),
  }
};

typedef struct _Teleport_Response_type_support_data_t
{
  void * data[2];
} _Teleport_Response_type_support_data_t;

static _Teleport_Response_type_support_data_t _Teleport_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleport_Response_message_typesupport_map = {
  2,
  "skibot_interfaces",
  &_Teleport_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Teleport_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Teleport_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleport_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleport_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace skibot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_skibot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, skibot_interfaces, srv, Teleport_Response)() {
  return &::skibot_interfaces::srv::rosidl_typesupport_c::Teleport_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "skibot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace skibot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Teleport_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleport_type_support_ids_t;

static const _Teleport_type_support_ids_t _Teleport_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleport_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleport_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleport_type_support_symbol_names_t _Teleport_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skibot_interfaces, srv, Teleport)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skibot_interfaces, srv, Teleport)),
  }
};

typedef struct _Teleport_type_support_data_t
{
  void * data[2];
} _Teleport_type_support_data_t;

static _Teleport_type_support_data_t _Teleport_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleport_service_typesupport_map = {
  2,
  "skibot_interfaces",
  &_Teleport_service_typesupport_ids.typesupport_identifier[0],
  &_Teleport_service_typesupport_symbol_names.symbol_name[0],
  &_Teleport_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Teleport_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleport_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace skibot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_skibot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, skibot_interfaces, srv, Teleport)() {
  return &::skibot_interfaces::srv::rosidl_typesupport_c::Teleport_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
