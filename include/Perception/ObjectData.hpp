/*
Class for storing 2D and 3D objects
Author: Shaswat Datta
*/

#ifndef OBJECTDATA_HPP
#define OBJECTDATA_HPP

#include <vector>
#include <string>
#include <opencv2/core/core.hpp>
#include <pcl/point_types.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl/common/projection_matrix.h>

template <class T>
class ObjectData{
	//vector of bounding box coordinates: template decide the point type e.g. cv::Point, pcl::PointXYZI etc
	std::vector<T> BBox;
	//class name of the object
	std::string ClassName;
	//probability of the object detection
	double prob;

	public:
		//fefault constructor for the class
		ObjectData();
		//constructor to initialize the classs members
		ObjectData(std::vector<T> box, std::string name, double p);
		
		//get bounding box coordinates
		std::vector<T> getBBox();
		//get class name
		std::string getClassName();
		//get detection probability
		double getProb();

		//set bounding box coordinates
		void setBBox(std::vector<T> box);
		//set class name
		void setClassName(std::string name);
		//set detection probability
		void setProb(double p);
};

#endif