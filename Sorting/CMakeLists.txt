cmake_minimum_required(VERSION 3.10)
project(Sorting)

set(CMAKE_CXX_STANDARD 11)

set(BUILD1 BubbleSort)
set(BLD1_FILES bubbleSort.cpp)
add_executable(${BUILD1} ${BLD1_FILES})

set(BUILD11 RoughWork)
set(BLD11_FILES rough.cpp)
add_executable(${BUILD11} ${BLD11_FILES})