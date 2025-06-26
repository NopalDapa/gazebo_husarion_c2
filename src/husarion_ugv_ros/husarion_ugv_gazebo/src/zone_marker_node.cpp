#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <std_msgs/msg/float64.hpp>

// Tambahkan include yang diperlukan untuk Gazebo
#include <gz/transport/Node.hh>
#include <gz/msgs/marker.pb.h>
#include <gz/msgs/Utility.hh>
#include <gz/math/Pose3.hh>
#include <gz/math/Vector3.hh>
#include <gz/math/Color.hh>

class ZoneMarkerService 
{
public:
  void CreateZoneMarker(double x, double y, double radius = 2.0) 
  {
    gz::msgs::Marker marker_msg;
    marker_msg.set_action(gz::msgs::Marker::ADD_MODIFY);
    marker_msg.set_ns("purple_zones");
    marker_msg.set_id(zone_counter_++);
    marker_msg.set_type(gz::msgs::Marker::CYLINDER);
    
    // Set posisi
    gz::math::Pose3d pose(x, y, 0.05, 0, 0, 0);
    gz::msgs::Set(marker_msg.mutable_pose(), pose);
    
    // Set ukuran (radius zona)
    gz::math::Vector3d size(radius * 2, radius * 2, 0.1);
    gz::msgs::Set(marker_msg.mutable_scale(), size);
    
    // Set warna ungu transparan
    gz::math::Color purple(0.6, 0.2, 0.8, 0.6);
    gz::msgs::Set(marker_msg.mutable_material()->mutable_ambient(), purple);
    gz::msgs::Set(marker_msg.mutable_material()->mutable_diffuse(), purple);
    
    // Kirim marker
    node_.Request("/marker", marker_msg);
    
    RCLCPP_INFO(rclcpp::get_logger("zone_marker"), 
                "Created purple zone at (%.2f, %.2f) with radius %.2f", x, y, radius);
  }

private:
  gz::transport::Node node_;
  static int zone_counter_;
};

int ZoneMarkerService::zone_counter_ = 0;

class ZoneMarkerNode : public rclcpp::Node
{
public:
  ZoneMarkerNode() : Node("zone_marker_node")
  {
    // Subscriber untuk menerima koordinat zona
    zone_subscriber_ = this->create_subscription<geometry_msgs::msg::Point>(
      "add_zone_topic", 10,
      std::bind(&ZoneMarkerNode::ZoneCallback, this, std::placeholders::_1)
    );
    
    RCLCPP_INFO(this->get_logger(), "Zone Marker Node started");
    RCLCPP_INFO(this->get_logger(), "Publish to /add_zone_topic to add purple zones");
  }

private:
  void ZoneCallback(const geometry_msgs::msg::Point::SharedPtr msg)
  {
    zone_service_.CreateZoneMarker(msg->x, msg->y, 2.0);
  }

  rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr zone_subscriber_;
  ZoneMarkerService zone_service_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ZoneMarkerNode>());
  rclcpp::shutdown();
  return 0;
}