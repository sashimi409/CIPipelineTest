

cmake_minimum_required(VERSION 3.10)

project(CIPipeline)

add_executable(CIPipeline main.cpp)

enable_testing()

add_executable(testing CounterTest.cpp)

add_test(Testing testing)