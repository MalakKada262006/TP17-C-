#include <iostream>
#include "Logger.h"
#include "Config.h"

int main() {
    Logger::getInstance().log("Demarrage du programme testLib...");

    Config config;
    config.loadFromFile("config.json");

    std::string appName = config.get("app_name");
    std::string version = config.get("version");

    Logger::getInstance().log("Nom de l application : " + appName);
    Logger::getInstance().log("Version : " + version);

    return 0;
}
