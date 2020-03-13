// Generated by gencpp from file uuv_sensor_ros_plugins_msgs/PositionWithCovariance.msg
// DO NOT EDIT!


#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_POSITIONWITHCOVARIANCE_H
#define UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_POSITIONWITHCOVARIANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace uuv_sensor_ros_plugins_msgs
{
template <class ContainerAllocator>
struct PositionWithCovariance_
{
  typedef PositionWithCovariance_<ContainerAllocator> Type;

  PositionWithCovariance_()
    : pos()
    , covariance()  {
      covariance.assign(0.0);
  }
  PositionWithCovariance_(const ContainerAllocator& _alloc)
    : pos(_alloc)
    , covariance()  {
  (void)_alloc;
      covariance.assign(0.0);
  }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pos_type;
  _pos_type pos;

   typedef boost::array<double, 9>  _covariance_type;
  _covariance_type covariance;





  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> const> ConstPtr;

}; // struct PositionWithCovariance_

typedef ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<std::allocator<void> > PositionWithCovariance;

typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance > PositionWithCovariancePtr;
typedef boost::shared_ptr< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance const> PositionWithCovarianceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_sensor_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_sensor_ros_plugins_msgs': ['/home/jack/RoboSub/catkin_ws/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a54596b2ea1a0ed659f46ab0b26f202";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a54596b2ea1a0edULL;
  static const uint64_t static_value2 = 0x659f46ab0b26f202ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_sensor_ros_plugins_msgs/PositionWithCovariance";
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# This represents a position in free space with uncertainty.\n"
"\n"
"geometry_msgs/Point pos\n"
"\n"
"# Row-major representation of the 3x3 covariance matrix\n"
"float64[9] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos);
      stream.next(m.covariance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionWithCovariance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_sensor_ros_plugins_msgs::PositionWithCovariance_<ContainerAllocator>& v)
  {
    s << indent << "pos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pos);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_SENSOR_ROS_PLUGINS_MSGS_MESSAGE_POSITIONWITHCOVARIANCE_H
