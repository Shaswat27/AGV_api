/*
	Abstract class for lane detection
	Author : Vasudha Todi
*/

#ifndef LANEDETECTION_HPP
#define LANEDETECTION_HPP

#include "MonoCamData.hpp"
#include "StereoCamData.hpp"
#include "LidarData.hpp"

#include <vector>

template <class T>
class LaneDetection{

	//Input data members
	MonoCamData &mono_cam;
	StereoCamData &stereo_cam;
	LidarData &lidar;

	//Final lanes (Maybe collection of pixels or point cloud data)
	std::vector<T> lanes;

	public:
		//Accessor functions
		MonoCamData getMonoCam();
		StereoCamData getStereoCam();
		LidarData getLidar();

		std::vector<T> getLanes();

		//Mutator functions
		void setMonoCam(MonoCamData m_cam);
		void setStereoCam(StereoCamData s_cam);
		void setLidar(LidarData ld);

		//Function for detection of lanes
		virtual void detect() = 0;

};

#endif