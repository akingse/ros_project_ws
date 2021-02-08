#include "ros/ros.h"
#include "cpg_hopf_control_1/msg_jointangle.h"

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "cpg_hopf_control_1_node_1_pub");
	ros::NodeHandle nh;
	ros::Publisher pub = nh.advertise<cpg_hopf_control_1::msg_jointangle>("snake_joint_angle1", 100);
	ros::Rate loop_rate(1);
	int count = 0;
	while (ros::ok())
	{
		cpg_hopf_control_1::msg_jointangle msg;
		msg.stamp = ros::Time::now();

		for (int i = 0; i < msg.jointangle.size(); i++)
		{
			msg.jointangle[i] = i+count;
			ROS_INFO("msg = %f", msg.jointangle[i]);
		}
		ROS_INFO("***************************************************************");

		pub.publish(msg);
		ros::spinOnce();
		loop_rate.sleep();
		count ++;
	}
	return 0;
}