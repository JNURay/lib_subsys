#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIB_SUBSYS_EXPORT __declspec(dllexport)
#else
  #define LIB_SUBSYS_EXPORT
#endif

LIB_SUBSYS_EXPORT void lib_subsys();
LIB_SUBSYS_EXPORT void lib_subsys_print_vector(const std::vector<std::string> &strings);
