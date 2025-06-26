#include <gz/transport/Node.hh>
#include <gz/msgs/marker.pb.h>

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
  }

private:
  gz::transport::Node node_;
  static int zone_counter_;
};

int ZoneMarkerService::zone_counter_ = 0;