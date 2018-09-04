#include "global.h"

bool PwUsed = false;

namespace Basic
{
    std::string UserExec()
    {
        if(!PwUsed)
            return "Enable\n";
        else
            return "Enable\n" + PwStore + "\n";
    }

    std::string GlobalConfig()
    {
        return UserExec() + "Configure Terminal\n";
    }

    std::string LastMode()
    {
        return "Exit\n";
    }

    std::string Logout()
    {
        return "Exit\nExit\n";
    }
}
