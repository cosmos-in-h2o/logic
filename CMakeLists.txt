cmake_minimum_required(VERSION 3.28)
project(logic)
set(CMAKE_CXX_STANDARD 23)
add_library(logic_module)
target_sources(logic_module
        PUBLIC
        FILE_SET CXX_MODULES FILES
        test.ixx)
target_sources(logic_module PUBLIC test.cc)
add_executable(logic main.cpp)
target_link_libraries(logic logic_module)
