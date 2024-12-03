cmake_minimum_required(VERSION 3.15)
project(PackageTest CXX)

find_package(lib_subsys CONFIG REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example lib_subsys::lib_subsys)
