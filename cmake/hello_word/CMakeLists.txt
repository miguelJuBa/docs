cmake_minimum_required(VERSION 2.8)
project(hello_world)
add_executable(myexec main.cpp)
install(TARGETS myexec DESTINATION bin)
