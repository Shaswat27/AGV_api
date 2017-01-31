/*
Class for Object Detection
Author: Shaswat Datta
*/

#ifndef OBJECTDETECTION_HPP
#define OBJECTDETECTION_HPP

#include "Perception/StereoCamData.hpp"
#include "Perception/LidarData.hpp"
#include "Perception/MonoCamData.hpp"
#include "Perception/ObjectData.hpp"

template <class T>
class ObjectDetection{
	//input modes
	MonoCamData &data_mono;
	StereoCamData &data_stereo;
	LidarData &data_lidar;

	//output modes: vector of objects with bounding boxes (points of type T)
	std::vector< ObjectData<T> > objects;

	public:
		//function to deetect objects and store in as a vector
		virtual void detect() = 0;
		//get the object vector
		std::vector< ObjectData<T> > getObjects();

		//set input to monocam data
		void setMono(MonoCamData m_cam);
		//set input to stereocam data
		void setStereo(StereoCamData s_cam);
		//set input to lidar data
		void setLidar(LidarData ld);
};

#endif