// Generated by gencpp from file odometer_mecanum/wheels_posi.msg
// DO NOT EDIT!


#ifndef ODOMETER_MECANUM_MESSAGE_WHEELS_POSI_H
#define ODOMETER_MECANUM_MESSAGE_WHEELS_POSI_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace odometer_mecanum
{
template <class ContainerAllocator>
struct wheels_posi_
{
  typedef wheels_posi_<ContainerAllocator> Type;

  wheels_posi_()
    : header()
    , w1(0.0)
    , w2(0.0)
    , w3(0.0)
    , w4(0.0)  {
    }
  wheels_posi_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , w1(0.0)
    , w2(0.0)
    , w3(0.0)
    , w4(0.0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _w1_type;
  _w1_type w1;

   typedef double _w2_type;
  _w2_type w2;

   typedef double _w3_type;
  _w3_type w3;

   typedef double _w4_type;
  _w4_type w4;




  typedef boost::shared_ptr< ::odometer_mecanum::wheels_posi_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::odometer_mecanum::wheels_posi_<ContainerAllocator> const> ConstPtr;

}; // struct wheels_posi_

typedef ::odometer_mecanum::wheels_posi_<std::allocator<void> > wheels_posi;

typedef boost::shared_ptr< ::odometer_mecanum::wheels_posi > wheels_posiPtr;
typedef boost::shared_ptr< ::odometer_mecanum::wheels_posi const> wheels_posiConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::odometer_mecanum::wheels_posi_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace odometer_mecanum

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'odometer_mecanum': ['/home/home/csc_home_prj/src/odometer_mecanum/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::odometer_mecanum::wheels_posi_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odometer_mecanum::wheels_posi_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odometer_mecanum::wheels_posi_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4193c2e6d15bab8c711a7fec09584af2";
  }

  static const char* value(const ::odometer_mecanum::wheels_posi_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4193c2e6d15bab8cULL;
  static const uint64_t static_value2 = 0x711a7fec09584af2ULL;
};

template<class ContainerAllocator>
struct DataType< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
{
  static const char* value()
  {
    return "odometer_mecanum/wheels_posi";
  }

  static const char* value(const ::odometer_mecanum::wheels_posi_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 w1\n\
float64 w2\n\
float64 w3\n\
float64 w4\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::odometer_mecanum::wheels_posi_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.w1);
      stream.next(m.w2);
      stream.next(m.w3);
      stream.next(m.w4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct wheels_posi_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::odometer_mecanum::wheels_posi_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "w1: ";
    Printer<double>::stream(s, indent + "  ", v.w1);
    s << indent << "w2: ";
    Printer<double>::stream(s, indent + "  ", v.w2);
    s << indent << "w3: ";
    Printer<double>::stream(s, indent + "  ", v.w3);
    s << indent << "w4: ";
    Printer<double>::stream(s, indent + "  ", v.w4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ODOMETER_MECANUM_MESSAGE_WHEELS_POSI_H
