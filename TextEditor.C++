// TextEditor.h
#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include <string>
#include <vector>
#include <regex>
#include <fstream>

class TextEditor {
private:
    std::string filename;
    std::vector<std::string> content;

public:
    TextEditor();

    // File operations
    bool openFile(const std::string& filePath);
    bool saveFile(const std::string& filePath);

    // Text editing functions
    void insertText(const std::string& text, size_t line = 0);
    void deleteText(size_t line);
    std::string copyText(size_t line);
    void pasteText(const std::string& text, size_t line = 0);
    std::vector<size_t> search(const std::string& keyword);

    // Utility
    void display();
    void clear();
};

#endif // TEXT_EDITOR_H
