cmake_minimum_required(VERSION 3.16)
project(GAM CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# planning: pure logic, header-only, NEVER links raylib
add_library(planning INTERFACE)
target_include_directories(planning INTERFACE include)

#adding raylib as a dependency
find_package(raylib REQUIRED)

add_executable(game main.cpp)
target_link_libraries(game PRIVATE planning raylib)