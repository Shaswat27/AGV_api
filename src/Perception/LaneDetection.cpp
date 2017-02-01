/*
	Class definition for lane detection
*/

#include "Perception/LaneDetection.hpp"

template <class T>
MonoCamData LaneDetection<T>::getMonoCam()
{
	return mono_cam;
}

template <class T>
StereoCamData LaneDetection<T>::getStereoCam()
{
	return stereo_cam;
}

template <class T>
LidarData LaneDetection<T>::getLidar()
{
	return lidar;
}

template <class T>
std::vector<T> LaneDetection<T>::getLanes()
{
	return lanes;
}

template <class T>
void LaneDetection<T>::setMonoCam(MonoCamData m_cam)
{
	mono_cam = m_cam;
}

template <class T>
void LaneDetection<T>::setStereoCam(StereoCamData s_cam)
{
	stereo_cam = s_cam;
}

template <class T>
void LaneDetection<T>::setLidar(LidarData ld)
{
	lidar = ld;
}