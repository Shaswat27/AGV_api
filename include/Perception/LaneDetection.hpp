/*
	Abstract class for lane detection
	Author : Vasudha Todi
*/

#ifndef LANEDETECTION_HPP
#define LANEDETECTION_HPP

#include "MonoCamData.hpp"
#include "StereoCamData.hpp"
#include "LidarData.hpp"

class LaneDetection{

	//Input data members
	MonoCamData &mono_cam;
	StereoCamData &stereo_cam;
	LidarData &lidar;

	public:
		//Accessor functions
		MonoCamData getMonoCam();
		StereoCamData getStereoCam();
		LidarData getLidar();

		//Mutator functions
		void setMonoCam(MonoCamData m_cam);
		void setStereoCam(StereoCamData s_cam);
		void setLidar(LidarData ld);

		//Function for detection of lanes
		virtual void detect() = 0;

};

#endif