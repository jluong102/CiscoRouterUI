#include "config.h"

std::ofstream ConfigFile;

std::string ConfigStore;
std::string PwStore;

void SendConfig()
{
    ConfigFile.open("Config.txt");
    ConfigFile << ConfigStore;
    ConfigFile.close();
}
