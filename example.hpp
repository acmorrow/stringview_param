#pragma once

class fake_string_view;

void __attribute__((visibility("default"))) use_as_value(fake_string_view view);
void __attribute__((visibility("default"))) use_as_const_ref(const fake_string_view& view);
