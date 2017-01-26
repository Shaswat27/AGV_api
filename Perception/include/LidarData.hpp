/*
	Data type for 3D Lidar
	Author : Vasudha Todi
*/

#ifndef LIDARDATA_HPP
#define LIDARDATA_HPP

#include <pcl/point_types.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl/common/projection_matrix.h>

class LidarData{

	//point cloud 
	pcl::PointCloud<pcl::PointXYZI>::Ptr cloud;

	public :
		//Constructors
		LidarData();
		LidarData(pcl::PointCloud<pcl::PointXYZI>::Ptr new_cloud);

		//get cloud data
		pcl::PointCloud<pcl::PointXYZI>::Ptr getCloud();

		//set cloud data
		void setCloud(pcl::PointCloud<pcl::PointXYZI>::Ptr cl);

};

#endif