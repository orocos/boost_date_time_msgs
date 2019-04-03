#ifndef BOOST_DATE_TIME_MSGS_SPECIAL_VALUES_H
#define BOOST_DATE_TIME_MSGS_SPECIAL_VALUES_H

#include <ros/time.h>

namespace boost_date_time_msgs {

// Define special values analog to boost/date_time/int_adapter.hpp:

namespace time {
  static ros::Time special_value(uint32_t sec, uint32_t nsec) {
    // bypass normalization in ros::Time constructor
    ros::Time t;
    t.sec = sec;
    t.nsec = nsec;
    return t;
  }
  static const ros::Time not_a_date_time = special_value(0x7fffffff, 0xfffffffe);
  static const ros::Time pos_infin = special_value(0x7fffffff, 0xffffffff);
  static const ros::Time neg_infin = special_value(0x80000000, 0x00000000);
}

namespace duration {
   static ros::Duration special_value(int32_t sec, int32_t nsec) {
    // bypass normalization in ros::Duration constructor
    ros::Duration d;
    d.sec = sec;
    d.nsec = nsec;
    return d;
  }
  static const ros::Duration not_a_date_time = special_value(0x7fffffff, 0xfffffffe);
  static const ros::Duration pos_infin = special_value(0x7fffffff, 0xffffffff);
  static const ros::Duration neg_infin = special_value(0x80000000, 0x00000000);
}

}  // namespace boost_date_time_msgs

#endif // BOOST_DATE_TIME_MSGS_SPECIAL_VALUES_H
