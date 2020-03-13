// Generated by gencpp from file uuv_control_msgs/SwitchToAutomaticResponse.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_SWITCHTOAUTOMATICRESPONSE_H
#define UUV_CONTROL_MSGS_MESSAGE_SWITCHTOAUTOMATICRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct SwitchToAutomaticResponse_
{
  typedef SwitchToAutomaticResponse_<ContainerAllocator> Type;

  SwitchToAutomaticResponse_()
    : success(false)  {
    }
  SwitchToAutomaticResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SwitchToAutomaticResponse_

typedef ::uuv_control_msgs::SwitchToAutomaticResponse_<std::allocator<void> > SwitchToAutomaticResponse;

typedef boost::shared_ptr< ::uuv_control_msgs::SwitchToAutomaticResponse > SwitchToAutomaticResponsePtr;
typedef boost::shared_ptr< ::uuv_control_msgs::SwitchToAutomaticResponse const> SwitchToAutomaticResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_control_msgs': ['/home/jack/catkin_ws/src/uuv_simulator/uuv_control/uuv_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/SwitchToAutomaticResponse";
  }

  static const char* value(const ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwitchToAutomaticResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::SwitchToAutomaticResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_SWITCHTOAUTOMATICRESPONSE_H
