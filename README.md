# laser_scan_republisher

This ros package is used for republishing a LaserScan topic locally.

## Configuration Instructions
1. Modify the topic name parameters in the launch/laser_scan_republisher_node.launch file to your liking.

## Usage Instructions
1. First build the ros package using `catkin_make` in your catkin workspace.
2. Source your `devel/setup.bash` in your catkin workspace.
3. Start the laser_scan_republisher node with the command `roslaunch laser_scan_republisher laser_scan_republisher_node.launch`.