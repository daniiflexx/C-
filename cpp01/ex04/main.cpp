/**
 * @file main.cpp
 * @author dcruz-na
 * @brief  Replace a string in a file with another string and create a new file with the replaced strings.
 * @version 0.1
 * @date 2023-04-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "main.hpp"

// Replace all instances of s1 with s2 in line without using std::replace
std::string replace(std::string line, std::string s1, std::string s2)
{
    std::string newLine;
    size_t pos = 0;
    size_t len = s1.length();
    while ((pos = line.find(s1, pos)) != std::string::npos) {
        newLine += line.substr(0, pos);
        newLine += s2;
        line = line.substr(pos + len);
    }
    newLine += line;
    return newLine;
}

int main(int argc, char const *argv[])
{
    std::string line;
    if (argc != 4) {
        std::cout << "Usage: ./convert [file] [s1] [s2]" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cout << "Error: File not found" << std::endl;
        return EXIT_FAILURE;
    }
    std::ofstream newFile(std::string(argv[1]) + ".replace");
    if (!newFile) {
        std::cout << "Error: File not found" << std::endl;
        return EXIT_FAILURE;
    }

    while (getline(file, line)) {
        line = replace(line, argv[2], argv[3]);
        newFile << line << std::endl;
    }
    return 0;
}