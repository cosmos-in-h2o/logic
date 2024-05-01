cmake_minimum_required(VERSION 3.28)
project(logic)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(logicpp)
add_executable(logic main.cpp)
target_link_libraries(logic logicpp)
