cmake_minimum_required(VERSION 2.8...3.13)
project (CV)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(picture test.cpp)
target_link_libraries(picture ${OpenCV_LIBS})

