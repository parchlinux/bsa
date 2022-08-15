cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(EXEC bsa)

project(bsa LANGUAGES CXX)

file(GLOB SOURCES src/*.cpp src/*.h)

add_executable(${EXEC} ${SOURCES})