cmake_minimum_required(VERSION 3.23)
project(DataStructures)

set(CMAKE_CXX_STANDARD 17)

add_library(DataStructures library.cpp LinkedList.cpp LinkedList.h Stack.cpp Stack.h main.cpp)
