/*
Class for storing data for Stereo Camera
Author: Shaswat Datta
*/

#ifndef STEREOCAM_HPP
#define STEREOCAM_HPP

#include <opencv2/core/core.hpp>
#include <pcl/point_types.h>
#include <pcl/PCLPointCloud2.h>

class StereoCamData{
	//left images (raw and rectified)
	cv::Mat left;
	cv::Mat leftRect;
	//right images (raw and rectified)
	cv::Mat right;
	cv::Mat rightRect;
	//disparity image
	cv::Mat depth;
	//pointclouds: grey and color
	pcl::PointCloud<pcl::PointXYZI>::Ptr grayCloud;
	pcl::PointCloud<pcl::PointXYZRGB>::Ptr colorCloud;

	public:
		//query members: images and pointclouds
		cv::Mat getRawLeft();
		cv::Mat getRawRight();
		cv::Mat getRectLeft();
		cv::Mat getRectRight();
		cv::Mat getDepth();
		pcl::PointCloud<pcl::PointXYZI>::Ptr getGrayPCL();
		pcl::PointCloud<pcl::PointXYZRGB>::Ptr getColorPCL();

		//set members: images and pointclouds
		void setRawLeft(cv::Mat imL);
		void setRawRight(cv::Mat imR);
		void setRectLeft(cv::Mat rectL);
		void setRectRight(cv::Mat rectR);
		void setDepth(cv::Mat dep);
		void setGrayPCL(pcl::PointCloud<pcl::PointXYZI>::Ptr pclG);
		void setColorPCL(pcl::PointCloud<pcl::PointXYZRGB>::Ptr pclC);
};

#endif