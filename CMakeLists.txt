cmake_minimum_required(VERSION 3.21O)
project(exercise_set)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(exercise1 main.cpp)
target_link_libraries(exercise1 PRIVATE Qt6::Widgets)

add_executable(exercise2 exercise2.cpp)
target_link_libraries(exercise2 PRIVATE Qt6::Widgets)

add_executable(main3 main3.cpp player.hpp player.cpp )
target_link_libraries(main3 PRIVATE Qt6::Widgets)
