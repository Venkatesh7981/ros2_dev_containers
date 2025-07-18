#include "rclcpp/rclcpp.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("my_node");
  RCLCPP_INFO(node->get_logger(), "Hello from my_node!");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
