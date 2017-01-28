/*
	Class definition for lane detection
*/

#include "Perception/LaneDetection.hpp"

MonoCamData LaneDetection::getMonoCam()
{
	return mono_cam;
}

StereoCamData LaneDetection::getStereoCam()
{
	return stereo_cam;
}

LidarData LaneDetection::getLidar()
{
	return lidar;
}

void LaneDetection::setMonoCam(MonoCamData m_cam)
{
	mono_cam = m_cam;
}

void LaneDetection::setStereoCam(StereoCamData s_cam)
{
	stereo_cam = s_cam;
}

void LaneDetection::setLidar(LidarData ld)
{
	lidar = ld;
}