cmake_minimum_required(VERSION 3.20)
project(DataStructuresAssignment2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wa,-mbig-obj")


add_executable(DataStructuresAssignment2 src/main.cpp src/Stack.h src/Queue.h src/Problem2.cpp src/Problem2.h)

add_executable(QueueTest test/QueueTest.cpp src/Queue.h)
add_executable(StackTest test/StackTest.cpp src/Stack.h)
