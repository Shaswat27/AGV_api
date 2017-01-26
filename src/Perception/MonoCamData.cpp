/*
	Class definition for monocular camera data type
*/

#include "../../include/Perception/MonoCamData.hpp"

MonoCamData::MonoCamData(){}

MonoCamData::MonoCamData(cv::Mat new_image)
{
	image = new_image;
}

cv::Mat MonoCamData::getImage()
{
	return image;
}

void MonoCamData::setImage(cv::Mat img)
{
	image = img;
}