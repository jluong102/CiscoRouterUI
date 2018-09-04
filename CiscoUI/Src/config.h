#ifndef CONFIG_H
#define CONFIG_H
#include <fstream>
#include "global.h"

void SendConfig();
void SendComPort();

extern std::string SaveTo;
extern std::string SendCom;
extern bool UseCom;
extern bool AppendFile;

#endif // CONFIG_H
