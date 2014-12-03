
#pragma once

#include <string>

class fake_string_view {
public:
    fake_string_view()
        : _data(nullptr)
        , _len(0) {
    }

    fake_string_view(const char* data)
        : _data(data)
        , _len(strlen(data)) {
    }

    fake_string_view(const std::string& data)
        : _data(data.data())
        , _len(data.length()) {
    }

    const char* data() const {
        return _data;
    }

    std::size_t len() const {
        return _len;
    }

private:
    const char* _data;
    size_t _len;
};

