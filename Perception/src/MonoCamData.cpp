#include "include/MonoCamData"

MonoCamData::MonoCamData(){}

MonoCamData::MonoCamData(cv::Mat new_image)
{
	image = new_image;
}

MonoCamData::getImage()
{
	return image;
}

MonoCamData::setImage(cv::Mat img)
{
	image = img;
}