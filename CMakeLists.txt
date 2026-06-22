cmake_minimum_required(VERSION 3.21)
project(myapp)


find_package(Qt6 REQUIRED COMPONENTS Widgets)


add_executable(myapp main.cpp)


target_link_libraries(myapp PRIVATE Qt6::Widgets)
