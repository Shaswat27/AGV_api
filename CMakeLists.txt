cmake_minimum_required (VERSION 2.6)
project (AGV_api)
include(CTest)
 
include_directories(include)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(PCL 1.3 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})


set(Perception_SOURCES
        src/Perception/MonoCamData.cpp
        src/Perception/LidarData.cpp
	src/Perception/StereoCamData.cpp
	src/Perception/LaneDetection.cpp
	src/Perception/ObjectData.cpp
	src/Perception/ObjectDetection.cpp
	src/Perception/TestClasses.cpp)
add_executable(PereceptionClasses ${Perception_SOURCES})

target_link_libraries(PereceptionClasses ${OpenCV_LIBS})
target_link_libraries(PereceptionClasses ${PCL_COMMON_LIBRARIES} ${PCL_IO_LIBRARIES})

