#include "Logger.h"
#include <iostream>

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message) const {
    std::cout << "[LOG] " << message << std::endl;
}
