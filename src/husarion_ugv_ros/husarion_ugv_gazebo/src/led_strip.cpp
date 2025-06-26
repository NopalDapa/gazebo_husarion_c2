// Copyright 2024 Husarion sp. z o.o.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "husarion_ugv_gazebo/led_strip.hpp"

#include <cstddef>
#include <limits>

#include <gz/plugin/Register.hh>
#include <gz/sim/Model.hh>
#include <gz/sim/components/LightCmd.hh>
#include <gz/sim/components/Name.hh>

#include <gz/msgs/color.pb.h>
#include <gz/msgs/marker.pb.h>

namespace husarion_ugv_gazebo
{
// Tambahkan struct untuk zona data
struct PurpleZoneData {
  gz::math::Pose3d pose;
  double radius;
  
  PurpleZoneData(double x, double y, double z, double roll, double pitch, double yaw, double r)
    : pose(x, y, z, roll, pitch, yaw), radius(r) {}
};

void LEDStrip::Configure(
  const gz::sim::Entity & entity, const std::shared_ptr<const sdf::Element> & sdf,
  gz::sim::EntityComponentManager & ecm, gz::sim::EventManager & /*eventMgr*/)
{
  const auto model = gz::sim::Model(entity);
  if (!model.Valid(ecm)) {
    throw std::runtime_error(
      "Error: Failed to initialize because [" + model.Name(ecm) +
      "] (Entity=" + std::to_string(entity) +
      ") is not a model. Please make sure that LEDStrip is attached to a valid model.");
  }

  ParseParameters(sdf);
  light_cmd_ = SetupLightCmd(ecm);

  node_.Subscribe(ns_ + "/" + image_topic_, &LEDStrip::ImageCallback, this);
  
  // Buat zona ungu saat plugin diinisialisasi
  CreatePurpleZoneMarkers();
}

void LEDStrip::PreUpdate(const gz::sim::UpdateInfo & info, gz::sim::EntityComponentManager & ecm)
{
  auto current_time = info.simTime;
  auto period = std::chrono::milliseconds(static_cast<int>(1000 / frequency_));

  if (new_image_available_ && current_time - last_update_time_ >= period) {
    gz::msgs::Image image;
    {
      last_image_.get(image);
      new_image_available_ = false;
    }

    VisualizeLights(ecm, image);

    auto light_pose = ecm.Component<gz::sim::components::Pose>(light_entity_)->Data();
    VisualizeMarkers(image, light_pose);

    last_update_time_ = current_time;
  }
}

void LEDStrip::ParseParameters(const std::shared_ptr<const sdf::Element> & sdf)
{
  if (!sdf->HasElement("light_name")) {
    throw std::runtime_error("Error: The light_name parameter is missing.");
  }
  light_name_ = sdf->Get<std::string>("light_name");

  if (!sdf->HasElement("topic")) {
    throw std::runtime_error("Error: The topic parameter is missing.");
  }
  image_topic_ = sdf->Get<std::string>("topic");

  ns_ = sdf->HasElement("namespace") ? sdf->Get<std::string>("namespace") : ns_;
  frequency_ = sdf->HasElement("frequency") ? sdf->Get<double>("frequency") : frequency_;
  marker_width_ = sdf->HasElement("width") ? sdf->Get<double>("width") : marker_width_;
  marker_height_ = sdf->HasElement("height") ? sdf->Get<double>("height") : marker_height_;
}

gz::msgs::Light LEDStrip::SetupLightCmd(gz::sim::EntityComponentManager & ecm)
{
  gz::msgs::Light light_cmd;

  ecm.Each<gz::sim::components::Name, gz::sim::components::Light>(
    [&](
      const gz::sim::Entity & entity, const gz::sim::components::Name * name,
      const gz::sim::components::Light * light_component) -> bool {
      if (name->Data() != light_name_) {
        return true;  // Continue searching
      }
      light_entity_ = entity;
      igndbg << "Light entity found: " << light_entity_ << std::endl;
      light_cmd = CreateLightMsgFromSdf(light_component->Data());
      return false;  // Stop searching
    });

  if (light_entity_ == gz::sim::kNullEntity) {
    throw std::runtime_error("Error: Light entity not found.");
  }
  return light_cmd;
}

gz::msgs::Light LEDStrip::CreateLightMsgFromSdf(const sdf::Light & light_sdf)
{
  gz::msgs::Light light_cmd;

  light_cmd.set_name(light_sdf.Name());
  light_cmd.set_range(light_sdf.AttenuationRange());
  light_cmd.set_cast_shadows(light_sdf.CastShadows());
  light_cmd.set_spot_inner_angle(light_sdf.SpotInnerAngle().Radian());
  light_cmd.set_spot_outer_angle(light_sdf.SpotOuterAngle().Radian());
  light_cmd.set_spot_falloff(light_sdf.SpotFalloff());
  light_cmd.set_attenuation_constant(light_sdf.ConstantAttenuationFactor());
  light_cmd.set_attenuation_linear(light_sdf.LinearAttenuationFactor());
  light_cmd.set_attenuation_quadratic(light_sdf.QuadraticAttenuationFactor());
  light_cmd.set_intensity(light_sdf.Intensity());

  gz::msgs::Set(light_cmd.mutable_diffuse(), light_sdf.Diffuse());
  gz::msgs::Set(light_cmd.mutable_specular(), light_sdf.Specular());
  gz::msgs::Set(light_cmd.mutable_direction(), light_sdf.Direction());

  // Set the light type
  switch (light_sdf.Type()) {
    case sdf::LightType::POINT:
      light_cmd.set_type(gz::msgs::Light::POINT);
      break;
    case sdf::LightType::SPOT:
      light_cmd.set_type(gz::msgs::Light::SPOT);
      break;
    case sdf::LightType::DIRECTIONAL:
      light_cmd.set_type(gz::msgs::Light::DIRECTIONAL);
      break;
    default:
      light_cmd.set_type(gz::msgs::Light::POINT);
      break;
  }

  return light_cmd;
}

void LEDStrip::ImageCallback(const gz::msgs::Image & msg)
{
  if (!IsEncodingValid(msg)) {
    ignerr << "Error: Incorrect image encoding." << std::endl;
    return;
  }

  last_image_.set(msg);
  new_image_available_ = true;
}

bool LEDStrip::IsEncodingValid(const gz::msgs::Image & msg)
{
  return msg.pixel_format_type() == gz::msgs::PixelFormatType::RGBA_INT8 ||
         msg.pixel_format_type() == gz::msgs::PixelFormatType::RGB_INT8;
}

gz::math::Color LEDStrip::CalculateMeanColor(const gz::msgs::Image & msg)
{
  size_t sum_r = 0, sum_g = 0, sum_b = 0, sum_a = 0;
  size_t pixel_count = msg.width() * msg.height();

  const std::string & data = msg.data();
  bool is_rgba = (msg.pixel_format_type() == gz::msgs::PixelFormatType::RGBA_INT8);
  int step = is_rgba ? 4 : 3;

  for (size_t i = 0; i < pixel_count * step; i += step) {
    sum_r += static_cast<uint8_t>(data[i]);
    sum_g += static_cast<uint8_t>(data[i + 1]);
    sum_b += static_cast<uint8_t>(data[i + 2]);
    if (is_rgba) {
      sum_a += static_cast<uint8_t>(data[i + 3]);
    }
  }

  const float max_value = std::numeric_limits<uint8_t>::max();
  const float norm_factor = max_value * pixel_count;

  float norm_mean_r = sum_r / norm_factor;
  float norm_mean_g = sum_g / norm_factor;
  float norm_mean_b = sum_b / norm_factor;
  float norm_mean_a = is_rgba ? sum_a / norm_factor : 1.0f;

  auto mean_color = gz::math::Color(norm_mean_r, norm_mean_g, norm_mean_b, norm_mean_a);

  return mean_color;
}

void LEDStrip::VisualizeLights(gz::sim::EntityComponentManager & ecm, const gz::msgs::Image & image)
{
  gz::math::Color mean_color = CalculateMeanColor(image);

  gz::msgs::Set(light_cmd_.mutable_diffuse(), mean_color);
  gz::msgs::Set(light_cmd_.mutable_specular(), mean_color);

  auto light_on = light_cmd_.mutable_header()->add_data();
  light_on->set_key("isLightOn");
  light_on->add_value()->assign("1");

  auto visualize = light_cmd_.mutable_header()->add_data();
  visualize->set_key("visualizeVisual");
  visualize->add_value()->assign("0");

  ecm.SetComponentData<gz::sim::components::LightCmd>(light_entity_, light_cmd_);

  ecm.SetChanged(
    light_entity_, gz::sim::components::LightCmd::typeId, gz::sim::ComponentState::PeriodicChange);
}

void LEDStrip::VisualizeMarkers(const gz::msgs::Image & image, const gz::math::Pose3d & light_pose)
{
  const std::string & data = image.data();

  double step_width = marker_width_ / image.width();
  double step_height = marker_height_ / image.height();

  const float max_value = std::numeric_limits<uint8_t>::max();
  bool is_rgba = (image.pixel_format_type() == gz::msgs::PixelFormatType::RGBA_INT8);
  int step = is_rgba ? 4 : 3;

  const auto pixel_size = gz::math::Vector3d(0.001, step_width, step_height);

  for (size_t y = 0; y < image.height(); ++y) {
    for (size_t x = 0; x < image.width(); ++x) {
      size_t idx = (y * image.width() + x) * step;

      float r = static_cast<uint8_t>(data[idx]) / max_value;
      float g = static_cast<uint8_t>(data[idx + 1]) / max_value;
      float b = static_cast<uint8_t>(data[idx + 2]) / max_value;
      float a = is_rgba ? static_cast<uint8_t>(data[idx + 3]) / max_value : 1.0f;
      auto pixel_color = gz::math::Color(r, g, b, a);

      double x_pos = light_pose.Pos().X();
      double y_pos = light_pose.Pos().Y() + x * step_width - marker_width_ / 2.0 + step_width / 2.0;
      double z_pos = light_pose.Pos().Z() + y * step_height;
      double roll = light_pose.Rot().Roll();
      double pitch = light_pose.Rot().Pitch();
      double yaw = light_pose.Rot().Yaw();
      auto pose = gz::math::Pose3d(x_pos, y_pos, z_pos, roll, pitch, yaw);

      CreateMarker(idx, pose, pixel_color, pixel_size);
    }
  }
}

void LEDStrip::CreateMarker(
  const uint id, const gz::math::Pose3d pose, const gz::math::Color & color,
  const gz::math::Vector3d size)
{
  gz::msgs::Marker marker_msg;
  marker_msg.set_action(gz::msgs::Marker::ADD_MODIFY);
  marker_msg.set_ns(ns_ + light_name_);
  marker_msg.set_id(id + 1);  // Markers with IDs 0 cannot be overwritten
  if (ns_.empty()) {
    marker_msg.set_parent("panther");
  } else {
    marker_msg.set_parent(ns_);
  }
  marker_msg.set_type(gz::msgs::Marker::BOX);

  gz::msgs::Set(marker_msg.mutable_pose(), pose);
  gz::msgs::Set(marker_msg.mutable_scale(), size);

  gz::msgs::Set(marker_msg.mutable_material()->mutable_ambient(), color);
  gz::msgs::Set(marker_msg.mutable_material()->mutable_diffuse(), color);

  // Using Request to ensure markers are visible
  node_.Request("/marker", marker_msg);
}

void LEDStrip::CreatePurpleZoneMarkers()
{
  // Koordinat pusat zona ungu dengan radius masing-masing
  std::vector<PurpleZoneData> purple_zones = {
    PurpleZoneData(13.0, 17.0, 3.0, 0, 0, 0, 2.5),  // Zona 1, radius 2.5m
    PurpleZoneData(0.0, 12.0, 2.0, 0, 0, 0, 1.8),   // Zona 2, radius 1.8m
    PurpleZoneData(8.0, 22.0, 4.0, 0, 0, 0, 2.0),   // Zona 3, radius 3.2m
  };

  // Buat 7 lapis untuk setiap zona dengan radius berbeda
  for (size_t zone_idx = 0; zone_idx < purple_zones.size(); ++zone_idx) {
    CreateLayeredPurpleZone(purple_zones[zone_idx].pose, purple_zones[zone_idx].radius, zone_idx * 100);
  }
}

void LEDStrip::CreateLayeredPurpleZone(const gz::math::Pose3d& center_pose, double max_radius, int base_id)
{
  const int num_layers = 7;
  
  std::vector<gz::math::Color> dark_purple_gradient = {
    gz::math::Color(0.6, 0.3, 0.8, 0.4),  // Layer 0 
    gz::math::Color(0.5, 0.2, 0.7, 0.5),  // Layer 1 
    gz::math::Color(0.4, 0.15, 0.6, 0.6), // Layer 2 
    gz::math::Color(0.3, 0.1, 0.5, 0.7),  // Layer 3 
    gz::math::Color(0.2, 0.05, 0.4, 0.8), // Layer 4 
    gz::math::Color(0.15, 0.03, 0.3, 0.85),// Layer 5 
    gz::math::Color(0.1, 0.01, 0.2, 0.9)  // Layer 6
  };
  
  for (int layer = 0; layer < num_layers; ++layer) {
    double radius = max_radius * (1.0 - static_cast<double>(layer) / num_layers);
    
    gz::math::Pose3d layer_pose = center_pose;
    layer_pose.Pos().Z(0.15 + (static_cast<double>(layer) * 0.01));
    
    CreateCircularMarker(base_id + layer, layer_pose, dark_purple_gradient[layer], radius);
  }
}

void LEDStrip::CreateCircularMarker(
  const uint id, const gz::math::Pose3d pose, const gz::math::Color & color, const double radius)
{
  gz::msgs::Marker marker_msg;
  marker_msg.set_action(gz::msgs::Marker::ADD_MODIFY);
  marker_msg.set_ns(ns_ + light_name_);
  marker_msg.set_id(id + 1);  // Markers with IDs 0 cannot be overwritten
  if (ns_.empty()) {
    marker_msg.set_parent("panther");
  } else {
    marker_msg.set_parent(ns_);
  }
  
  // GUNAKAN CYLINDER untuk bentuk lingkaran
  marker_msg.set_type(gz::msgs::Marker::CYLINDER);

  gz::msgs::Set(marker_msg.mutable_pose(), pose);
  
  // Ukuran cylinder: diameter x diameter x tinggi (ubah dari 0.02 ke 0.3)
  gz::math::Vector3d size(radius * 2, radius * 2, 0.3);  // Tinggi sekarang 0.3 meter
  gz::msgs::Set(marker_msg.mutable_scale(), size);

  gz::msgs::Set(marker_msg.mutable_material()->mutable_ambient(), color);
  gz::msgs::Set(marker_msg.mutable_material()->mutable_diffuse(), color);

  // Using Request to ensure markers are visible
  node_.Request("/marker", marker_msg);
}
}  // namespace husarion_ugv_gazebo

GZ_ADD_PLUGIN(
  husarion_ugv_gazebo::LEDStrip, gz::sim::System, husarion_ugv_gazebo::LEDStrip::ISystemConfigure,
  husarion_ugv_gazebo::LEDStrip::ISystemPreUpdate)
