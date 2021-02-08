#include <ros/ros.h>
#include <iostream>
#include <math.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float64MultiArray.h>

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "snake_node_2_pub");
	ros::NodeHandle nh;
	ros::Publisher pub1 = nh.advertise<std_msgs::Float64>("/snake/joint1_position_controller/command", 100);
	ros::Publisher pub2 = nh.advertise<std_msgs::Float64>("/snake/joint2_position_controller/command", 100);
	ros::Publisher pub3 = nh.advertise<std_msgs::Float64>("/snake/joint3_position_controller/command", 100);
	ros::Publisher pub4 = nh.advertise<std_msgs::Float64>("/snake/joint4_position_controller/command", 100);
	ros::Publisher pub5 = nh.advertise<std_msgs::Float64>("/snake/joint5_position_controller/command", 100);
	ros::Publisher pub6 = nh.advertise<std_msgs::Float64>("/snake/joint6_position_controller/command", 100);
	ros::Publisher pub7 = nh.advertise<std_msgs::Float64>("/snake/joint7_position_controller/command", 100);
	ros::Publisher pub8 = nh.advertise<std_msgs::Float64>("/snake/joint8_position_controller/command", 100);
	ros::Publisher pub9 = nh.advertise<std_msgs::Float64>("/snake/joint9_position_controller/command", 100);
	ros::Publisher pub10 = nh.advertise<std_msgs::Float64>("/snake/joint10_position_controller/command", 100);
	ros::Publisher pub11 = nh.advertise<std_msgs::Float64>("/snake/joint11_position_controller/command", 100);
	ros::Publisher pub12 = nh.advertise<std_msgs::Float64>("/snake/joint12_position_controller/command", 100);
	ros::Publisher pub13 = nh.advertise<std_msgs::Float64>("/snake/joint13_position_controller/command", 100);
	ros::Publisher pub14 = nh.advertise<std_msgs::Float64>("/snake/joint14_position_controller/command", 100);
	ros::Publisher pub15 = nh.advertise<std_msgs::Float64>("/snake/joint15_position_controller/command", 100);
	ros::Publisher pub16 = nh.advertise<std_msgs::Float64>("/snake/joint16_position_controller/command", 100);
	ros::Publisher pub17 = nh.advertise<std_msgs::Float64>("/snake/joint17_position_controller/command", 100);
	ros::Publisher pub18 = nh.advertise<std_msgs::Float64>("/snake/joint18_position_controller/command", 100);
	ros::Publisher pub19 = nh.advertise<std_msgs::Float64>("/snake/joint19_position_controller/command", 100);
	ros::Publisher pub20 = nh.advertise<std_msgs::Float64>("/snake/joint20_position_controller/command", 100);

	int rate = 10;
	ros::Rate loop_rate(rate);
	double time = 0;

	int N = 10;
	double Pi = 3.1415926;

	double wave_yaw = 2;
	double wave_pitch = 2;
	
	double A_yaw = 40.0/180.0*Pi;
	double A_pitch = 10.0/180.0*Pi;

	double omega_yaw = Pi/3;
	double omega_pitch = Pi/3;

	double phi_yaw = wave_yaw*2*Pi/N;
	double phi_pitch = wave_pitch*2*Pi/N;

	double fai_yaw = 0.0/180.0*Pi;
	double fai_pitch = 0.0/180.0*Pi;

	std_msgs::Float64MultiArray joints_angle;
	std_msgs::Float64 joint1_angle;
	std_msgs::Float64 joint2_angle;
	std_msgs::Float64 joint3_angle;
	std_msgs::Float64 joint4_angle;
	std_msgs::Float64 joint5_angle;
	std_msgs::Float64 joint6_angle;
	std_msgs::Float64 joint7_angle;
	std_msgs::Float64 joint8_angle;
	std_msgs::Float64 joint9_angle;
	std_msgs::Float64 joint10_angle;
	std_msgs::Float64 joint11_angle;
	std_msgs::Float64 joint12_angle;
	std_msgs::Float64 joint13_angle;
	std_msgs::Float64 joint14_angle;
	std_msgs::Float64 joint15_angle;
	std_msgs::Float64 joint16_angle;
	std_msgs::Float64 joint17_angle;
	std_msgs::Float64 joint18_angle;
	std_msgs::Float64 joint19_angle;
	std_msgs::Float64 joint20_angle;

	while (ros::ok())
	{
		joints_angle.data.resize(2*N);
		for(int i = 0; i < N; i++)
		{
			joints_angle.data[2*i] = A_yaw*sin(omega_yaw*time+i*phi_yaw)+fai_yaw;
			joints_angle.data[2*i+1] = A_pitch*sin(omega_pitch*time+i*phi_pitch+Pi/2)+fai_pitch;
		}

		joint1_angle.data = joints_angle.data[0];
		joint2_angle.data = joints_angle.data[1];
		joint3_angle.data = joints_angle.data[2];
		joint4_angle.data = joints_angle.data[3];
		joint5_angle.data = joints_angle.data[4];
		joint6_angle.data = joints_angle.data[5];
		joint7_angle.data = joints_angle.data[6];
		joint8_angle.data = joints_angle.data[7];
		joint9_angle.data = joints_angle.data[8];
		joint10_angle.data = joints_angle.data[9];
		joint11_angle.data = joints_angle.data[10];
		joint12_angle.data = joints_angle.data[11];
		joint13_angle.data = joints_angle.data[12];
		joint14_angle.data = joints_angle.data[13];
		joint15_angle.data = joints_angle.data[14];
		joint16_angle.data = joints_angle.data[15];
		joint17_angle.data = joints_angle.data[16];
		joint18_angle.data = joints_angle.data[17];
		joint19_angle.data = joints_angle.data[18];
		joint20_angle.data = joints_angle.data[19];

		pub1.publish(joint1_angle);
		pub2.publish(joint2_angle);
		pub3.publish(joint3_angle);
		pub4.publish(joint4_angle);
		pub5.publish(joint5_angle);
		pub6.publish(joint6_angle);
		pub7.publish(joint7_angle);
		pub8.publish(joint8_angle);
		pub9.publish(joint9_angle);
		pub10.publish(joint10_angle);
		pub11.publish(joint11_angle);
		pub12.publish(joint12_angle);
		pub13.publish(joint13_angle);
		pub14.publish(joint14_angle);
		pub15.publish(joint15_angle);
		pub16.publish(joint16_angle);
		pub17.publish(joint17_angle);
		pub18.publish(joint18_angle);
		pub19.publish(joint19_angle);
		pub20.publish(joint20_angle);

		ROS_INFO("joints_angle[0]---[%f]", joints_angle.data[0]);
		ROS_INFO("joints_angle[1]---[%f]", joints_angle.data[1]);

		ros::spinOnce();
		time += 1.0/rate;
		loop_rate.sleep();
	}
	return 0;
}