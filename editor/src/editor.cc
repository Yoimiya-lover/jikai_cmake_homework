#include "editor.h"

void Editor::append(const std::string& text) {
    content += text;
}

void Editor::clear() {
    content.clear();
}

std::string Editor::get_content() const {
    return content;
}
