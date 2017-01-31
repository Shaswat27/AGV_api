/*
function definitions for ObjectDetection Class
*/

#include "Perception/ObjectDetection.hpp"

//function to return the detected objects
template<class T>
std::vector< ObjectData<T> > ObjectDetection<T>::getObjects(){
	return objects;
}

//set input as monocam data
template<class T>
void ObjectDetection<T>::setMono(MonoCamData m_cam){
	data_mono = m_cam;
}

//set input as stereocam data
template<class T>
void ObjectDetection<T>::setStereo(StereoCamData s_cam){
	data_stereo = s_cam;
}

//set input as lidar data
template<class T>
void ObjectDetection<T>::setLidar(LidarData ld){
	data_lidar = ld;
}