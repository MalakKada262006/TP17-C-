#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    Logger() = default;

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    static Logger& getInstance();
    void log(const std::string& message) const;
};

#endif
