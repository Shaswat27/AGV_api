/*
Function definition of StereoCamData class 
*/
#include "../include/StereoCamData.hpp"

//get left image
cv::Mat StereoCamData::getRawLeft(){
	return left;
}

//get right image
cv::Mat StereoCamData::getRawRight(){
	return right;
}

//get rectified left image
cv::Mat StereoCamData::getRectLeft(){
	return leftRect;
}

//get rectified right image
cv::Mat StereoCamData::getRectRight(){
	return rightRect;
}

//get depth image
cv::Mat StereoCamData::getDepth(){
	return depth;
}

//get gray pointcloud
pcl::PointCloud<pcl::PointXYZI>::Ptr StereoCamData::getGrayPCL(){
	return grayCloud;
}

//get  point cloud		
pcl::PointCloud<pcl::PointXYZRGB>::Ptr StereoCamData::getColorPCL(){
	return colorCloud;
}

//set left image
void StereoCamData::setRawLeft(cv::Mat imL){
	left = imL;
}

//set right image
void StereoCamData::setRawRight(cv::Mat imR){
	right = imR;
}

//set rectified left image
void StereoCamData::setRectLeft(cv::Mat rectL){
	leftRect = rectL;
}

//set rectified right image
void StereoCamData::setRectRight(cv::Mat rectR){
	rightRect = rectR;
}

//set depth image
void StereoCamData::setDepth(cv::Mat dep){
	depth = dep;
}

//set gray pointclound
void StereoCamData::setGrayPCL(pcl::PointCloud<pcl::PointXYZI>::Ptr pclG){
	grayCloud = pclG;
}

//set color pointcloud
void StereoCamData::setColorPCL(pcl::PointCloud<pcl::PointXYZRGB>::Ptr pclC){
	colorCloud = pclC;
}