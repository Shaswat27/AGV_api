
#ifndef MONOCAMDATA_HPP
#define MONOCAMDATA_HPP

#include <opencv2/core/core.hpp>

class MonoCamData{
	cv::Mat image;

	public:
		MonoCamData();
		MonoCamData(cv::Mat new_image);
		cv:Mat getImage();
		cv:Mat setImage(cv::Mat img);
};

#endif