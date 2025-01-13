#pragma once

#include <string>

class Editor {
public:
    void append(const std::string& text);
    void clear();
    std::string get_content() const;

private:
    std::string content;
};


