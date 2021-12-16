#include <stdio.h>

#include "ice/Ice.h"
#include "util/FileReader.h"

int main(int argc, char *argv[]) {
    std::string command = argv[1];

    if(command.compare("--help") == 0) {
        printf("Put int the .coal file location");
        return 1;
    }

    Ice::data = Ice::FileReader::ReadFile(command.c_str());
    printf(Ice::data);
}

