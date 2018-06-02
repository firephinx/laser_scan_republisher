#include <ros/ros.h>
#include "laser_scan_republisher/laser_scan_republisher.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "laser_scan_republisher");

  ros::NodeHandle nh;

  LaserScanRepublisher laser_scan_republisher;

  ros::spin();

  return 0;
}