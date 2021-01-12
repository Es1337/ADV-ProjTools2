cmake_minimum_required(VERSION 3.0)
project(MyProject)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp -o3")

add_executable(Main main/main.cpp)
target_link_libraries(Main)