// Generated by gencpp from file intera_core_msgs/HomingState.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_HOMINGSTATE_H
#define INTERA_CORE_MSGS_MESSAGE_HOMINGSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intera_core_msgs
{
template <class ContainerAllocator>
struct HomingState_
{
  typedef HomingState_<ContainerAllocator> Type;

  HomingState_()
    : name()
    , state()  {
    }
  HomingState_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , state(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _state_type;
  _state_type state;



  enum {
    HOMED = 0,
    HOMING = 1,
    NOT_HOMED = 2,
  };


  typedef boost::shared_ptr< ::intera_core_msgs::HomingState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::HomingState_<ContainerAllocator> const> ConstPtr;

}; // struct HomingState_

typedef ::intera_core_msgs::HomingState_<std::allocator<void> > HomingState;

typedef boost::shared_ptr< ::intera_core_msgs::HomingState > HomingStatePtr;
typedef boost::shared_ptr< ::intera_core_msgs::HomingState const> HomingStateConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::HomingState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::HomingState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/ee290/ee290_final_project/src/intera_common/intera_core_msgs/msg', '/home/ee290/ee290_final_project/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::HomingState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::HomingState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::HomingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::HomingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::HomingState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::HomingState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::HomingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eacb82bc7d74638daa749d9caab52b99";
  }

  static const char* value(const ::intera_core_msgs::HomingState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeacb82bc7d74638dULL;
  static const uint64_t static_value2 = 0xaa749d9caab52b99ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::HomingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/HomingState";
  }

  static const char* value(const ::intera_core_msgs::HomingState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::HomingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This holds the homing state for each movable joint on the robot.\n\
# A joint is in the HOMING state when a HomingCommand message enables\n\
# homing and the joint is not yet homed.\n\
# Joints that do not need homing are always in the HOMED state.\n\
string[] name\n\
int32[]  state\n\
# Valid homing states:\n\
int32 HOMED=0\n\
int32 HOMING=1\n\
int32 NOT_HOMED=2\n\
\n\
";
  }

  static const char* value(const ::intera_core_msgs::HomingState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::HomingState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HomingState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::HomingState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::HomingState_<ContainerAllocator>& v)
  {
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "state[]" << std::endl;
    for (size_t i = 0; i < v.state.size(); ++i)
    {
      s << indent << "  state[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.state[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_HOMINGSTATE_H