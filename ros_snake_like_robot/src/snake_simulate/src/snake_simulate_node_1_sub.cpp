#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float64MultiArray.h>
#include <iostream>

double Pi = 3.1415926;

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

ros::Publisher *pub1;
ros::Publisher *pub2;
ros::Publisher *pub3;
ros::Publisher *pub4;
ros::Publisher *pub5;
ros::Publisher *pub6;
ros::Publisher *pub7;
ros::Publisher *pub8;
ros::Publisher *pub9;
ros::Publisher *pub10;
ros::Publisher *pub11;
ros::Publisher *pub12;
ros::Publisher *pub13;
ros::Publisher *pub14;
ros::Publisher *pub15;
ros::Publisher *pub16;
ros::Publisher *pub17;
ros::Publisher *pub18;
ros::Publisher *pub19;
ros::Publisher *pub20;

void Callback(const std_msgs::Float64MultiArray::ConstPtr& msg)
{
	joint1_angle.data = msg->data[0]/180.0*Pi;
	joint2_angle.data = msg->data[1]/180.0*Pi;
	joint3_angle.data = msg->data[2]/180.0*Pi;
	joint4_angle.data = msg->data[3]/180.0*Pi;
	joint5_angle.data = msg->data[4]/180.0*Pi;
	joint6_angle.data = msg->data[5]/180.0*Pi;
	joint7_angle.data = msg->data[6]/180.0*Pi;
	joint8_angle.data = msg->data[7]/180.0*Pi;
	joint9_angle.data = msg->data[8]/180.0*Pi;
	joint10_angle.data = msg->data[9]/180.0*Pi;
	joint11_angle.data = msg->data[10]/180.0*Pi;
	joint12_angle.data = msg->data[11]/180.0*Pi;
	joint13_angle.data = msg->data[12]/180.0*Pi;
	joint14_angle.data = msg->data[13]/180.0*Pi;
	joint15_angle.data = msg->data[14]/180.0*Pi;
	joint16_angle.data = msg->data[15]/180.0*Pi;
	joint17_angle.data = msg->data[16]/180.0*Pi;
	joint18_angle.data = msg->data[17]/180.0*Pi;
	joint19_angle.data = msg->data[18]/180.0*Pi;
	joint20_angle.data = msg->data[19]/180.0*Pi;

	ROS_INFO("I heard: [%f]", msg->data[0]/180.0*Pi);

	pub1->publish(joint1_angle);
	pub2->publish(joint2_angle);
	pub3->publish(joint3_angle);
	pub4->publish(joint4_angle);
	pub5->publish(joint5_angle);
	pub6->publish(joint6_angle);
	pub7->publish(joint7_angle);
	pub8->publish(joint8_angle);
	pub9->publish(joint9_angle);
	pub10->publish(joint10_angle);
	pub11->publish(joint11_angle);
	pub12->publish(joint12_angle);
	pub13->publish(joint13_angle);
	pub14->publish(joint14_angle);
	pub15->publish(joint15_angle);
	pub16->publish(joint16_angle);
	pub17->publish(joint17_angle);
	pub18->publish(joint18_angle);
	pub19->publish(joint19_angle);
	pub20->publish(joint20_angle);
	ROS_INFO("pub: [%f]", joint1_angle.data);
}

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "snake_simulate_node_1_sub");

	ros::NodeHandle nh;

	ros::Subscriber sub = nh.subscribe("snake_joint_angle", 100, Callback);

	pub1 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint1_position_controller/command", 100));
	pub2 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint2_position_controller/command", 100));
	pub3 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint3_position_controller/command", 100));
	pub4 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint4_position_controller/command", 100));
	pub5 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint5_position_controller/command", 100));
	pub6 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint6_position_controller/command", 100));
	pub7 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint7_position_controller/command", 100));
	pub8 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint8_position_controller/command", 100));
	pub9 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint9_position_controller/command", 100));
	pub10 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint10_position_controller/command", 100));
	pub11 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint11_position_controller/command", 100));
	pub12 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint12_position_controller/command", 100));
	pub13 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint13_position_controller/command", 100));
	pub14 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint14_position_controller/command", 100));
	pub15 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint15_position_controller/command", 100));
	pub16 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint16_position_controller/command", 100));
	pub17 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint17_position_controller/command", 100));
	pub18 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint18_position_controller/command", 100));
	pub19 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint19_position_controller/command", 100));
	pub20 = new ros::Publisher(nh.advertise<std_msgs::Float64>("/snake_simulate/joint20_position_controller/command", 100));
	// ros::Rate loop_rate(20);

	ros::spin();
	// loop_rate.sleep();
	delete pub1;
	delete pub2;
	delete pub3;
	delete pub4;
	delete pub5;
	delete pub6;
	delete pub7;
	delete pub8;
	delete pub9;
	delete pub10;
	delete pub11;
	delete pub12;
	delete pub13;
	delete pub14;
	delete pub15;
	delete pub16;
	delete pub17;
	delete pub18;
	delete pub19;
	delete pub20;

	return 0;
}