#include "example.hpp"

#include <cstdio>

#include "do_something_else.hpp"
#include "fake_string_view.hpp"

void use_as_value(fake_string_view view) {
    printf("%ld %ld %zu\n", strchr(view.data(), 'a') - view.data(), view.len(), strlen(view.data()));
    do_something_else();
    printf("%ld %ld %zu\n", strchr(view.data(), 'a') - view.data(), view.len(), strlen(view.data()));
}

void use_as_const_ref(const fake_string_view& view) {
    printf("%ld %ld %zu\n", strchr(view.data(), 'a') - view.data(), view.len(), strlen(view.data()));
    do_something_else();
    printf("%ld %ld %zu\n", strchr(view.data(), 'a') - view.data(), view.len(), strlen(view.data()));
}

