/*
Function definitions for ObjectData class 
*/

#include "Perception/ObjectData.hpp"

//defualt constructor
template<class T>
ObjectData<T>::ObjectData() {};

//constructor to initialize the members
template<class T>
ObjectData<T>::ObjectData(std::vector<T> box, std::string name, double p){
	BBox = box;
	ClassName = name;
	prob = p;
}

//get bbox coordinates
template<class T>
std::vector<T> ObjectData<T>::getBBox(){
	return BBox;
}

//get class name
template<class T>
std::string ObjectData<T>::getClassName(){
	return ClassName;
}

//get detection probability
template<class T>
double ObjectData<T>::getProb(){
	return prob;
}

//set bbox coordinates
template<class T>
void ObjectData<T>::setBBox(std::vector<T> box){
	BBox = box;
}

//set class name
template<class T>
void ObjectData<T>::setClassName(std::string name){
	ClassName = name;
}

//set detection probability
template<class T>
void ObjectData<T>::setProb(double p){
	prob = p;
}