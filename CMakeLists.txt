cmake_minimum_required(VERSION 3.16)
project(GAM CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#adding raylib as a dependency
find_package(raylib REQUIRED)

add_executable(game build_test.cpp)
target_link_libraries(game PRIVATE raylib)