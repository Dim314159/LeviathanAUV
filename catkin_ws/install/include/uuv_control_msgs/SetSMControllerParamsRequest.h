// Generated by gencpp from file uuv_control_msgs/SetSMControllerParamsRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_SETSMCONTROLLERPARAMSREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_SETSMCONTROLLERPARAMSREQUEST_H


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
struct SetSMControllerParamsRequest_
{
  typedef SetSMControllerParamsRequest_<ContainerAllocator> Type;

  SetSMControllerParamsRequest_()
    : K()
    , Kd()
    , Ki()
    , slope()  {
    }
  SetSMControllerParamsRequest_(const ContainerAllocator& _alloc)
    : K(_alloc)
    , Kd(_alloc)
    , Ki(_alloc)
    , slope(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _K_type;
  _K_type K;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _Kd_type;
  _Kd_type Kd;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _Ki_type;
  _Ki_type Ki;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _slope_type;
  _slope_type slope;





  typedef boost::shared_ptr< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSMControllerParamsRequest_

typedef ::uuv_control_msgs::SetSMControllerParamsRequest_<std::allocator<void> > SetSMControllerParamsRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::SetSMControllerParamsRequest > SetSMControllerParamsRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::SetSMControllerParamsRequest const> SetSMControllerParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'uuv_control_msgs': ['/home/jack/RoboSub/catkin_ws/src/uuv_simulator/uuv_control/uuv_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc294c7929e39ce02ce0ce70a116b3b3";
  }

  static const char* value(const ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc294c7929e39ce0ULL;
  static const uint64_t static_value2 = 0x2ce0ce70a116b3b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/SetSMControllerParamsRequest";
  }

  static const char* value(const ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
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
"float64[] K\n"
"float64[] Kd\n"
"float64[] Ki\n"
"float64[] slope\n"
;
  }

  static const char* value(const ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.K);
      stream.next(m.Kd);
      stream.next(m.Ki);
      stream.next(m.slope);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSMControllerParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::SetSMControllerParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "K[]" << std::endl;
    for (size_t i = 0; i < v.K.size(); ++i)
    {
      s << indent << "  K[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.K[i]);
    }
    s << indent << "Kd[]" << std::endl;
    for (size_t i = 0; i < v.Kd.size(); ++i)
    {
      s << indent << "  Kd[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Kd[i]);
    }
    s << indent << "Ki[]" << std::endl;
    for (size_t i = 0; i < v.Ki.size(); ++i)
    {
      s << indent << "  Ki[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Ki[i]);
    }
    s << indent << "slope[]" << std::endl;
    for (size_t i = 0; i < v.slope.size(); ++i)
    {
      s << indent << "  slope[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.slope[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_SETSMCONTROLLERPARAMSREQUEST_H
