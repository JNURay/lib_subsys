#include "lib_subsys.h"
#include <vector>
#include <string>

int main() {
    lib_subsys();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    lib_subsys_print_vector(vec);
}
