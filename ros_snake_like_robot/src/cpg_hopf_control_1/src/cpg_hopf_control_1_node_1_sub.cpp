#include "ros/ros.h"
#include "cpg_hopf_control_1/msg_jointangle.h"
#include "serial/serial.h"

void jointangle_callback(const cpg_hopf_control_1::msg_jointangle::ConstPtr& msg)
{
	for (int i = 0; i < msg->jointangle.size(); i++)
	{
		ROS_INFO("msg = [%f]", msg->jointangle[i]);
	}
	ROS_INFO("***************************************************************");
}

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "cpg_hopf_control_1_node_1_sub");
	ros::NodeHandle nh;
	ros::Subscriber sub = nh.subscribe("snake_joint_angle1", 1000, jointangle_callback);
	ros::spin();
	return 0;
}