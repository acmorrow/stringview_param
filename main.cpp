#include <cstdlib>

#include "example_users.hpp"
#include "fake_string_view.hpp"

int main(int argc, char* argv[]) {

    std::string x = "this string has an a";
    forward_to_use_as_value(x);
    forward_to_use_as_const_ref(x);

    return EXIT_SUCCESS;
}
