/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/ubuntu/catkin_ws/src/crab_msgs/srv/GetLegIKSolver.srv
 *
 */


#ifndef CRAB_MSGS_MESSAGE_GETLEGIKSOLVERREQUEST_H
#define CRAB_MSGS_MESSAGE_GETLEGIKSOLVERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <crab_msgs/LegJointsState.h>
#include <crab_msgs/LegPositionState.h>

namespace crab_msgs
{
template <class ContainerAllocator>
struct GetLegIKSolverRequest_
{
  typedef GetLegIKSolverRequest_<ContainerAllocator> Type;

  GetLegIKSolverRequest_()
    : leg_number()
    , current_joints()
    , target_position()  {
    }
  GetLegIKSolverRequest_(const ContainerAllocator& _alloc)
    : leg_number(_alloc)
    , current_joints(_alloc)
    , target_position(_alloc)  {
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _leg_number_type;
  _leg_number_type leg_number;

   typedef std::vector< ::crab_msgs::LegJointsState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::crab_msgs::LegJointsState_<ContainerAllocator> >::other >  _current_joints_type;
  _current_joints_type current_joints;

   typedef std::vector< ::crab_msgs::LegPositionState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::crab_msgs::LegPositionState_<ContainerAllocator> >::other >  _target_position_type;
  _target_position_type target_position;




  typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GetLegIKSolverRequest_

typedef ::crab_msgs::GetLegIKSolverRequest_<std::allocator<void> > GetLegIKSolverRequest;

typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverRequest > GetLegIKSolverRequestPtr;
typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverRequest const> GetLegIKSolverRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crab_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'crab_msgs': ['/home/ubuntu/catkin_ws/src/crab_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e6a55288c7d97cc56bf3e73bfc7d5d02";
  }

  static const char* value(const ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe6a55288c7d97cc5ULL;
  static const uint64_t static_value2 = 0x6bf3e73bfc7d5d02ULL;
};

template<class ContainerAllocator>
struct DataType< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crab_msgs/GetLegIKSolverRequest";
  }

  static const char* value(const ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] leg_number\n\
crab_msgs/LegJointsState[] current_joints\n\
crab_msgs/LegPositionState[] target_position\n\
\n\
\n\
================================================================================\n\
MSG: crab_msgs/LegJointsState\n\
float64[3] joint\n\
\n\
================================================================================\n\
MSG: crab_msgs/LegPositionState\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leg_number);
      stream.next(m.current_joints);
      stream.next(m.target_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetLegIKSolverRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crab_msgs::GetLegIKSolverRequest_<ContainerAllocator>& v)
  {
    s << indent << "leg_number[]" << std::endl;
    for (size_t i = 0; i < v.leg_number.size(); ++i)
    {
      s << indent << "  leg_number[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.leg_number[i]);
    }
    s << indent << "current_joints[]" << std::endl;
    for (size_t i = 0; i < v.current_joints.size(); ++i)
    {
      s << indent << "  current_joints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::crab_msgs::LegJointsState_<ContainerAllocator> >::stream(s, indent + "    ", v.current_joints[i]);
    }
    s << indent << "target_position[]" << std::endl;
    for (size_t i = 0; i < v.target_position.size(); ++i)
    {
      s << indent << "  target_position[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::crab_msgs::LegPositionState_<ContainerAllocator> >::stream(s, indent + "    ", v.target_position[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAB_MSGS_MESSAGE_GETLEGIKSOLVERREQUEST_H
