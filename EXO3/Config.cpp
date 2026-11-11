#include "Config.h"
#include <iostream>

Config::Config() {
    settings["app_name"] = "Zinjar";
    settings["version"] = "1.0.0";
    settings["port"] = "8080";
}

bool Config::loadFromFile(const std::string& filename) {
    std::cout << "[CONFIG] Chargement du fichier : " << filename << std::endl;
    return true;
}

std::string Config::get(const std::string& key) const {
    auto it = settings.find(key);
    if (it != settings.end()) {
        return it->second;
    }
    return "CLE_NON_TROUVEE";
}
