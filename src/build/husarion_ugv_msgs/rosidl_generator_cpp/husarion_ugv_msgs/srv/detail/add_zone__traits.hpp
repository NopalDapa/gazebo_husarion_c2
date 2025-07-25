// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from husarion_ugv_msgs:srv/AddZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "husarion_ugv_msgs/srv/add_zone.hpp"


#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__ADD_ZONE__TRAITS_HPP_
#define HUSARION_UGV_MSGS__SRV__DETAIL__ADD_ZONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "husarion_ugv_msgs/srv/detail/add_zone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace husarion_ugv_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddZone_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddZone_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddZone_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace husarion_ugv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use husarion_ugv_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const husarion_ugv_msgs::srv::AddZone_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  husarion_ugv_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use husarion_ugv_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const husarion_ugv_msgs::srv::AddZone_Request & msg)
{
  return husarion_ugv_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<husarion_ugv_msgs::srv::AddZone_Request>()
{
  return "husarion_ugv_msgs::srv::AddZone_Request";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::AddZone_Request>()
{
  return "husarion_ugv_msgs/srv/AddZone_Request";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::AddZone_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::AddZone_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<husarion_ugv_msgs::srv::AddZone_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace husarion_ugv_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddZone_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddZone_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddZone_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace husarion_ugv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use husarion_ugv_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const husarion_ugv_msgs::srv::AddZone_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  husarion_ugv_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use husarion_ugv_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const husarion_ugv_msgs::srv::AddZone_Response & msg)
{
  return husarion_ugv_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<husarion_ugv_msgs::srv::AddZone_Response>()
{
  return "husarion_ugv_msgs::srv::AddZone_Response";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::AddZone_Response>()
{
  return "husarion_ugv_msgs/srv/AddZone_Response";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::AddZone_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::AddZone_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<husarion_ugv_msgs::srv::AddZone_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace husarion_ugv_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddZone_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddZone_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddZone_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace husarion_ugv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use husarion_ugv_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const husarion_ugv_msgs::srv::AddZone_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  husarion_ugv_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use husarion_ugv_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const husarion_ugv_msgs::srv::AddZone_Event & msg)
{
  return husarion_ugv_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<husarion_ugv_msgs::srv::AddZone_Event>()
{
  return "husarion_ugv_msgs::srv::AddZone_Event";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::AddZone_Event>()
{
  return "husarion_ugv_msgs/srv/AddZone_Event";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::AddZone_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::AddZone_Event>
  : std::integral_constant<bool, has_bounded_size<husarion_ugv_msgs::srv::AddZone_Request>::value && has_bounded_size<husarion_ugv_msgs::srv::AddZone_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<husarion_ugv_msgs::srv::AddZone_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<husarion_ugv_msgs::srv::AddZone>()
{
  return "husarion_ugv_msgs::srv::AddZone";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::AddZone>()
{
  return "husarion_ugv_msgs/srv/AddZone";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::AddZone>
  : std::integral_constant<
    bool,
    has_fixed_size<husarion_ugv_msgs::srv::AddZone_Request>::value &&
    has_fixed_size<husarion_ugv_msgs::srv::AddZone_Response>::value
  >
{
};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::AddZone>
  : std::integral_constant<
    bool,
    has_bounded_size<husarion_ugv_msgs::srv::AddZone_Request>::value &&
    has_bounded_size<husarion_ugv_msgs::srv::AddZone_Response>::value
  >
{
};

template<>
struct is_service<husarion_ugv_msgs::srv::AddZone>
  : std::true_type
{
};

template<>
struct is_service_request<husarion_ugv_msgs::srv::AddZone_Request>
  : std::true_type
{
};

template<>
struct is_service_response<husarion_ugv_msgs::srv::AddZone_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__ADD_ZONE__TRAITS_HPP_
