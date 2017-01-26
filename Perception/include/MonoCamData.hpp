/*
	Data type for monocular camera
	Author : Vasudha Todi
*/

#ifndef MONOCAMDATA_HPP
#define MONOCAMDATA_HPP

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

class MonoCamData{
	cv::Mat image;

	public:
		//Constructors
		MonoCamData();
		MonoCamData(cv::Mat new_image);

		//get image data
		cv:Mat getImage();

		//set image
		void setImage(cv::Mat img);
};

#endif