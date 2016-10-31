#include <moveit/move_group_interface/move_group.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_group_interface_demo", ros::init_options::AnonymousName);

  ros::AsyncSpinner spinner(1);
  spinner.start();

  moveit::planning_interface::MoveGroup group("arm");

  geometry_msgs::Pose target_pose1;
  target_pose1.orientation.w = 0.726282;
  target_pose1.orientation.x= 4.04423e-07;
  target_pose1.orientation.y = -0.687396;
  target_pose1.orientation.z = 4.81813e-07;

  target_pose1.position.x = 0.0261186;
  target_pose1.position.y = 4.50972e-07;
  target_pose1.position.z = 0.573659;
  group.setPoseTarget(target_pose1);

  group.move();

  ros::shutdown();
  return 0;
}
