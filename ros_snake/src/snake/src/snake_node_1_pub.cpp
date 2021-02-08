#include <ros/ros.h>
#include <string.h>
#include <std_msgs/Float64MultiArray.h>
#include <sensor_msgs/JointState.h>
#include <robot_state_publisher/robot_state_publisher.h>
#include <iostream>

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "snake_node1_pub");
	ros::NodeHandle nh;
	ros::Publisher joint_pub = nh.advertise<std_msgs::Float64MultiArray>("/snake/joints_position_controller/command", 100);
	
	ros::Rate loop_rate(50);
	int count = 0;
	double time = 0;

	while (ros::ok())
	{
		std_msgs::Float64MultiArray joints_data;
		joints_data.data.resize(20);

		while(ros::ok())
		{
			for (size_t i = 0; i < 10; i++)
			{
				joints_data.data[2*i] = std::sin(3.1415926/2.0*time+i*2*3.1415926*2/10.0)*60.0/180.0*3.1415926;
				joints_data.data[2*i+1] = std::sin(3.1415926/2.0*time+i*2*3.1415926*2/10.0+3.1415926/2.0)*30.0/180.0*3.1415926;

				// joints_data.data[2*i] = std::sin(3.1415926/2.0*time+i*2*3.1415926*2/10.0)*80.0/180.0*3.1415926;
				// joints_data.data[2*i+1] = 0;

				// joints_data.data[2*i] = 0;
				// joints_data.data[2*i+1] = std::sin(3.1415926/1.0*time+i*3*3.1415926*2/10.0+3.1415926/2.0)*40.0/180.0*3.1415926;

				// joints_data.data[2*i] = std::sin(3.1415926/2*time)*10.0/180.0*3.1415926;
				// joints_data.data[2*i+1] = std::sin(3.1415926/2*time-3.1415926/2.0)*10.0/180.0*3.1415926;

				// joints_data.data[2*i] = std::sin(3.1415926/2*time+i*2*3.1415926*2/10.0)*80.0/180.0*3.1415926;
				// joints_data.data[2*i+1] = std::cos(3.1415926/1*time+i*4*3.1415926*2/10.0)*40.0/180.0*3.1415926;
			}

			joint_pub.publish(joints_data);

			ROS_INFO("joints_date[0]---[%f]", joints_data.data[0]);
			ROS_INFO("joints_date[1]---[%f]", joints_data.data[1]);
			ROS_INFO("joints_date[2]---[%f]", joints_data.data[2]);
			ROS_INFO("joints_date[3]---[%f]", joints_data.data[3]);
			
			ros::spinOnce();
			loop_rate.sleep();
			++count;
			time += 1.0/50;
		}
	}
	return 0;
}