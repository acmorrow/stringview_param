#include "example_users.hpp"

#include "example.hpp"
#include "fake_string_view.hpp"

void forward_to_use_as_value(const std::string& str) {
    use_as_value(str);
}

void forward_to_use_as_const_ref(const std::string& str) {
    use_as_const_ref(str);
}

