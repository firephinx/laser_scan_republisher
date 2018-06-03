#include "laser_scan_republisher/laser_scan_republisher.h"

LaserScanRepublisher::LaserScanRepublisher() : nh_("/laser_scan_republisher")
{
    nh_.param("laser_scan_input_topic_name", laser_scan_input_topic_name_, std::string("/scan"));
    nh_.param("laser_scan_output_topic_name", laser_scan_output_topic_name_, std::string("/laser_scan_republisher/scan"));

    laser_scan_publisher_ = nh_.advertise<sensor_msgs::LaserScan>(laser_scan_output_topic_name_, 1);
    laser_scan_subscriber_ = nh_.subscribe(laser_scan_input_topic_name_, 1, &LaserScanRepublisher::laserScanCallback, this);
}

void LaserScanRepublisher::laserScanCallback(const sensor_msgs::LaserScan::ConstPtr& laser_scan)
{
    laser_scan_publisher_.publish(*laser_scan);
}