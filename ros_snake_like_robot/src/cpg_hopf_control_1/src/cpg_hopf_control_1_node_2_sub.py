#!/usr/bin/env python
'''cpg_hopf_control_1_node_2_sub ROS Node'''
import rospy
from std_msgs.msg import String

def callback(data):
    '''cpg_hopf_control_1_node_2_sub Callback Function'''
    rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)

def listener():
    '''cpg_hopf_control_1_node_2_sub Subscriber'''
    # In ROS, nodes are uniquely named. If two nodes with the same
    # node are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'listener' node so that multiple listeners can
    # run simultaneously.
    rospy.init_node('cpg_hopf_control_1_node_2_sub', anonymous=True)

    rospy.Subscriber("chatter", String, callback)

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

if __name__ == '__main__':
    listener()
