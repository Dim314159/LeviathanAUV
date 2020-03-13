// Generated by gencpp from file uuv_world_ros_plugins_msgs/TransformFromSphericalCoordRequest.msg
// DO NOT EDIT!


#ifndef UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMFROMSPHERICALCOORDREQUEST_H
#define UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMFROMSPHERICALCOORDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_world_ros_plugins_msgs
{
template <class ContainerAllocator>
struct TransformFromSphericalCoordRequest_
{
  typedef TransformFromSphericalCoordRequest_<ContainerAllocator> Type;

  TransformFromSphericalCoordRequest_()
    : latitude_deg(0.0)
    , longitude_deg(0.0)
    , altitude(0.0)  {
    }
  TransformFromSphericalCoordRequest_(const ContainerAllocator& _alloc)
    : latitude_deg(0.0)
    , longitude_deg(0.0)
    , altitude(0.0)  {
  (void)_alloc;
    }



   typedef double _latitude_deg_type;
  _latitude_deg_type latitude_deg;

   typedef double _longitude_deg_type;
  _longitude_deg_type longitude_deg;

   typedef double _altitude_type;
  _altitude_type altitude;





  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TransformFromSphericalCoordRequest_

typedef ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<std::allocator<void> > TransformFromSphericalCoordRequest;

typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest > TransformFromSphericalCoordRequestPtr;
typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest const> TransformFromSphericalCoordRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_world_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60457d630fe21cc5f8f6bd5d0fc90156";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60457d630fe21cc5ULL;
  static const uint64_t static_value2 = 0xf8f6bd5d0fc90156ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_world_ros_plugins_msgs/TransformFromSphericalCoordRequest";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"float64 latitude_deg\n"
"\n"
"float64 longitude_deg\n"
"\n"
"float64 altitude\n"
;
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude_deg);
      stream.next(m.longitude_deg);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransformFromSphericalCoordRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest_<ContainerAllocator>& v)
  {
    s << indent << "latitude_deg: ";
    Printer<double>::stream(s, indent + "  ", v.latitude_deg);
    s << indent << "longitude_deg: ";
    Printer<double>::stream(s, indent + "  ", v.longitude_deg);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMFROMSPHERICALCOORDREQUEST_H
