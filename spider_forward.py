import sys
import time
#from spider_msgs.msg import apm_imu
#from spider_msgs.msg import BodyCommand
#from spider_msgs.msg import BodyState
#from spider_msgs.msg import GaitCommand
#from spider_msgs.msg import LegIKRequest
#from spider_msgs.msg import LegJointsState
#from spider_msgs.msg import LegPositionState
#from spider_msgs.msg import LegsJointsState
from sensor_msgs.msg import Joy

import rospy

seconds = 10

rospy.init_node('spider_forward', anonymous=True)

################
## INITIALIZE ##
################
pub = rospy.Publisher('/joy', Joy, queue_size=10)
msg = Joy()
msg.header.stamp = rospy.Time.now()
rate = rospy.Rate(10)

valueAxe = 0.0
valueButton = 0
for i in range (0, 20):
 msg.axes.append(valueAxe)
for e in range (0, 17):
 msg.buttons.append(valueButton)

################
##    WALK    ##
################
walking_time=float(seconds)+0.4 ##manual time calibration

start = time.time()

msg.axes[1] = 1

bo=True
while not rospy.is_shutdown() and bo:
 sample_time = time.time()
 if ((sample_time - start) > walking_time):
  bo=False
  msg.axes[0] = 0
  msg.axes[1] = 0
 pub.publish(msg)
 rate.sleep()
