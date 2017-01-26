/*
	Data type for monocular camera
	Author : Vasudha Todi
*/

#ifndef MONOCAMDATA_HPP
#define MONOCAMDATA_HPP

#include <opencv2/core/core.hpp>

class MonoCamData{
	cv::Mat image;

	public:
		//Constructors
		MonoCamData();
		MonoCamData(cv::Mat new_image);

		//get image data
		cv:Mat getImage();

		//set image
		cv:Mat setImage(cv::Mat img);
};

#endif