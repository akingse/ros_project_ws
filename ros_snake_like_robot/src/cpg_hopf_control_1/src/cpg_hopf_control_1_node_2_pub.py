#!/usr/bin/env python
'''cpg_hopf_control_1_node_2_pub ROS Node'''
import time
import rospy
import serial
from std_msgs.msg import Float64MultiArray


ser = serial.Serial("/dev/ttyUSB0", 115200, timeout=0.5)


def callback(msg):
    rospy.loginfo("length---[%f] data[0]---[%f] data[1]---[%f]", len(msg.data), msg.data[0], msg.data[1])
    for i in range(1,11):
        ser_str = "{#%03dP%04dT%04d!#%03dP%04dT%04d!}" % (
            int(2*i-1), int((msg.data[2*i-1-1])*1000/135+1500+0.5), int(msg.data[len(msg.data)-1]*1000),
            int(2*i), int((msg.data[2*i-1])*1000/135+1500+0.5), int(msg.data[len(msg.data)-1]*1000))
        ser.write(ser_str.encode('utf-8'))


def listener():
    rospy.init_node('cpg_hopf_control_1_node_2_pub', anonymous=True)
    rospy.Subscriber("snake_joint_angle", Float64MultiArray, callback)
    rospy.spin()


if __name__ == '__main__':
    listener()
