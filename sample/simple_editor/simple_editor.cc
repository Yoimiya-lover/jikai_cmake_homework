#include <iostream>
#include "editor/editor.h"

void test_append() {
    Editor editor;
    editor.append("Hello");
    editor.append(" World");
    if (editor.get_content() == "Hello World") {
        std::cout << "test_append passed.\n";
    } else {
        std::cout << "test_append failed.\n";
    }
}

void test_clear() {
    Editor editor;
    editor.append("Hello");
    editor.clear();
    if (editor.get_content().empty()) {
        std::cout << "test_clear passed.\n";
    } else {
        std::cout << "test_clear failed.\n";
    }
}

int main() {
    test_append();
    test_clear();
    return 0;
}
