cmake_minimum_required(VERSION 3.13)

project(inverse-kinetics-opengl)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 17)

find_package(GLFW)

add_executable(inverse-kinetics-opengl main.cpp)

target_include_directories(inverse-kinetics-opengl PRIVATE ${GLFW_INCLUDE_DIR})

target_link_libraries(inverse-kinetics-opengl GLFW::GLFW)