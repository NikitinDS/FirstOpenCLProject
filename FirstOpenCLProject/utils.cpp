#include "utils.hpp"

#include <fstream>
#include <iostream>

std::string Utils::readFile(const std::string& path) {
    std::cout << path << std::endl;
    std::ifstream file(path);
    std::string content, str;
    while (std::getline(file, str)) {
        content += str;
        content.push_back('\n');
    }
    return content;
}