# CMakeList.txt : CMake project for eigen

cmake_minimum_required (VERSION 3.10)

project(EigenProj1 VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
find_package(Eigen3 REQUIRED)

# Add source to this project's executable.
add_executable (EigenProj1 eigen.cpp)
target_link_libraries(EigenProj1 Eigen3::Eigen)
