#include <iostream>
#include "Logger.h"

int main() {
    std::string path = "log.txt";
    logger::Logger::includeFile(path);
    logger::Logger::d("program start");
    logger::Logger::info("It works");
    logger::Logger::error("RoflException");


    return 0;
}
