#include "config.h"

std::ofstream ConfigFile;

std::string ConfigStore;
std::string PwStore;

std::string SaveTo = "Config.txt";
std::string SendCom = "COM1";
bool UseCom = false;
bool AppendFile = false;

void SendConfig()
{
    if (AppendFile)
        ConfigFile.open(SaveTo, std::ofstream::out | std::ofstream::app);
    else
        ConfigFile.open(SaveTo);

    ConfigFile << ConfigStore;
    ConfigFile.close();
}

void SendComPort()
{
    /*FILE* comPort;
    comPort = fopen(SendCom, "w");
    comPort << ConfigStore;

    fclose(comPort);*/
}
