cmake_minimum_required(VERSION 3.15)
project(lib_subsys CXX)




add_library(lib_subsys src/lib_subsys.cpp)
target_include_directories(lib_subsys PUBLIC include)

find_package(lib_dep REQUIRED)
target_link_libraries(lib_subsys PUBLIC lib_dep::lib_dep)

set_target_properties(lib_subsys PROPERTIES PUBLIC_HEADER "include/lib_subsys.h")
install(TARGETS lib_subsys)
