/*
	Class definition for lidar data type
*/

#include "../include/LidarData.hpp"

LidarData::LidarData();

LidarData::LidarData(pcl::PointCloud<pcl::PointXYZI>::Ptr new_cloud)
{
	cloud = new_cloud;
}

pcl::PointCloud<pcl::PointXYZI>::Ptr LidarData::getCloud()
{
	return cloud;
}

void LidarData::setCloud(pcl::PointCloud<pcl::PointXYZI>::Ptr cl)
{
	cloud = cl;
}