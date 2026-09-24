# CMakeList.txt : CMake project for eigen

cmake_minimum_required (VERSION 3.10)

project(mat3mult VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
find_package(Eigen3 REQUIRED)

# Add source to this project's executable.
add_executable (mat3mult main.cpp)
target_link_libraries(mat3mult Eigen3::Eigen)
