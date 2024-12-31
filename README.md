# C++ Text Editor

This repository contains the implementation of a basic **Text Editor** using C++ programming language. The project provides functionalities for creating, editing, saving, and opening text files. It uses a class-based architecture and integrates file I/O and text manipulation features. Optional GUI support can be added using libraries like Qt or GTK+.

## Features

- **File Operations**: Create, open, save, and modify text files.
- **Text Editing**:
  - Copy, paste, and delete text.
  - Search for specific text using regular expressions.
- **Text Display**: Display text content on a GUI or terminal interface.
- **Compression Support**: Optionally, compress and decompress text files.
- **Extensible Design**: Easily integrate additional features like syntax highlighting or advanced search.

---

## Class Overview: `TextEditor`

### Purpose
The `TextEditor` class is the core of the application, encapsulating all functionalities needed to manage text files and editing operations.

### Header File Structure

```cpp
class TextEditor {
private:
    std::string filePath;
    std::vector<std::string> lines;

public:
    // Constructor
    TextEditor();

    // File Operations
    bool openFile(const std::string& path);
    bool saveFile(const std::string& path);
    void createNewFile();

    // Editing Operations
    void insertLine(const std::string& text, int position);
    void deleteLine(int position);
    std::string copyLine(int position);
    void pasteLine(const std::string& text, int position);

    // Search
    std::vector<int> search(const std::string& query);

    // Display
    void printContent() const;

    // Utility
    void clearContent();
};
```

### Methods Explanation

- **Constructor**
  - Initializes a new instance of the `TextEditor` class with no file loaded.

- **File Operations**
  - `openFile`: Reads a file into the editor and stores each line in the `lines` vector.
  - `saveFile`: Writes the current content to a file.
  - `createNewFile`: Clears the editor and resets for a new file.

- **Editing Operations**
  - `insertLine`: Adds a new line of text at the specified position.
  - `deleteLine`: Removes a line of text at the specified position.
  - `copyLine`: Copies the content of a line for later use.
  - `pasteLine`: Inserts a copied or new line at the specified position.

- **Search**
  - `search`: Finds all occurrences of a specific string within the text.

- **Display**
  - `printContent`: Outputs all lines to the console.

- **Utility**
  - `clearContent`: Clears the current content.

---

## How to Build and Run

### Requirements

- C++ Compiler (e.g., g++)
- Optionally: Qt, GTK+, Cairo, or other libraries for GUI support.

### Instructions

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/SimpleTextEditor.git
   cd SimpleTextEditor
   ```
2. Compile the code:
   ```bash
   g++ -o texteditor main.cpp TextEditor.cpp
   ```
3. Run the program:
   ```bash
   ./texteditor
   ```

---

## License
This repository is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed for your projects.

## Author
Benjamin Caron - https://github.com/bcaron518

## Contributing
If you'd like to contribute to this repository or improve the code examples, please feel free to open an issue or submit a pull request. Your contributions are welcome.
