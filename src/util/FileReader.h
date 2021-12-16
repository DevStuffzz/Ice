#pragma once

#include <string>
#include <fstream>

namespace Ice {
    class FileReader
    {
    public:
        static const char* ReadFile(const char* location) {
            std::string line, text;
            std::ifstream in(location);
            while(std::getline(in, line)) {
                text += line + "\n";
            }
            
            return text.c_str();
        }
    };
}