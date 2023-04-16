cmake_minimum_required(VERSION 3.25)
project(projektnaobiek)

set(CMAKE_CXX_STANDARD 23)

add_executable(projektnaobiek src/Application.cpp include/food/Food.h include/food/Pizza.h include/food/WithDough.h src/food/Pizza.cpp src/food/WithDough.cpp include/food/WithTopping.h src/food/WithTopping.cpp)
