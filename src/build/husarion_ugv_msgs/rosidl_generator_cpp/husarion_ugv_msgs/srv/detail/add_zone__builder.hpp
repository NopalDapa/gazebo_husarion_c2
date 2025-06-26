// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from husarion_ugv_msgs:srv/AddZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "husarion_ugv_msgs/srv/add_zone.hpp"


#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__ADD_ZONE__BUILDER_HPP_
#define HUSARION_UGV_MSGS__SRV__DETAIL__ADD_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "husarion_ugv_msgs/srv/detail/add_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace husarion_ugv_msgs
{

namespace srv
{

namespace builder
{

class Init_AddZone_Request_radius
{
public:
  explicit Init_AddZone_Request_radius(::husarion_ugv_msgs::srv::AddZone_Request & msg)
  : msg_(msg)
  {}
  ::husarion_ugv_msgs::srv::AddZone_Request radius(::husarion_ugv_msgs::srv::AddZone_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Request msg_;
};

class Init_AddZone_Request_position
{
public:
  Init_AddZone_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddZone_Request_radius position(::husarion_ugv_msgs::srv::AddZone_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_AddZone_Request_radius(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::husarion_ugv_msgs::srv::AddZone_Request>()
{
  return husarion_ugv_msgs::srv::builder::Init_AddZone_Request_position();
}

}  // namespace husarion_ugv_msgs


namespace husarion_ugv_msgs
{

namespace srv
{

namespace builder
{

class Init_AddZone_Response_message
{
public:
  explicit Init_AddZone_Response_message(::husarion_ugv_msgs::srv::AddZone_Response & msg)
  : msg_(msg)
  {}
  ::husarion_ugv_msgs::srv::AddZone_Response message(::husarion_ugv_msgs::srv::AddZone_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Response msg_;
};

class Init_AddZone_Response_success
{
public:
  Init_AddZone_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddZone_Response_message success(::husarion_ugv_msgs::srv::AddZone_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddZone_Response_message(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::husarion_ugv_msgs::srv::AddZone_Response>()
{
  return husarion_ugv_msgs::srv::builder::Init_AddZone_Response_success();
}

}  // namespace husarion_ugv_msgs


namespace husarion_ugv_msgs
{

namespace srv
{

namespace builder
{

class Init_AddZone_Event_response
{
public:
  explicit Init_AddZone_Event_response(::husarion_ugv_msgs::srv::AddZone_Event & msg)
  : msg_(msg)
  {}
  ::husarion_ugv_msgs::srv::AddZone_Event response(::husarion_ugv_msgs::srv::AddZone_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Event msg_;
};

class Init_AddZone_Event_request
{
public:
  explicit Init_AddZone_Event_request(::husarion_ugv_msgs::srv::AddZone_Event & msg)
  : msg_(msg)
  {}
  Init_AddZone_Event_response request(::husarion_ugv_msgs::srv::AddZone_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddZone_Event_response(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Event msg_;
};

class Init_AddZone_Event_info
{
public:
  Init_AddZone_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddZone_Event_request info(::husarion_ugv_msgs::srv::AddZone_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddZone_Event_request(msg_);
  }

private:
  ::husarion_ugv_msgs::srv::AddZone_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::husarion_ugv_msgs::srv::AddZone_Event>()
{
  return husarion_ugv_msgs::srv::builder::Init_AddZone_Event_info();
}

}  // namespace husarion_ugv_msgs

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__ADD_ZONE__BUILDER_HPP_
