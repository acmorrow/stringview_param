#pragma once

#include <string>

void __attribute__((visibility("default"))) forward_to_use_as_value(const std::string& str);
void __attribute__((visibility("default"))) forward_to_use_as_const_ref(const std::string& str);

