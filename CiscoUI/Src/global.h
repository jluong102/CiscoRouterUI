#ifndef GLOBAL_H
#define GLOBAL_H
#include <QMessageBox>
#include "addresschecks.h"

#define WORDRANGE 65535
#define DWORDRANGE 4294967295

extern std::string ConfigStore;
extern std::string PwStore;
extern bool PwUsed;

namespace Basic
{
    std::string UserExec();
    std::string GlobalConfig();
    std::string LastMode();
    std::string Logout();
}
#endif // GLOBAL_H
