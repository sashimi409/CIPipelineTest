

cmake_minimum_required(VERSION 3.10)

project(CIPipeline)


add_executable(CIPipeline main.cpp Printer.cpp Printer.h)



#----Testing Related------

enable_testing()

add_executable(testing CounterTest.cpp Printer.cpp Printer.h)

add_test(Testing testing)