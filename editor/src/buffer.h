#ifndef BUFFER_H
#define BUFFER_H

#include <string>

// 提供一些简单的缓冲区操作
class Buffer {
public:
    static std::string trim(const std::string& text) {
        return text.empty() ? text : text.substr(0, text.find_last_not_of(' ') + 1);
    }
};

#endif // BUFFER_H
