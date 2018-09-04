#include "addresschecks.h"

namespace Check
{


AddressChecks::AddressChecks()
{

}

AddressChecks::~AddressChecks()
{

}

bool AddressChecks::CheckZero(short octet1)
{
    if (octet1 == 0)
        return true;
    else
        return false;
}

bool AddressChecks::CheckZero(short octet1, short octet2)
{
    if (octet1 == 0 && octet2 == 0)
        return true;
    else
        return false;
}

bool AddressChecks::CheckZero(short octet1, short octet2, short octet3)
{
    if (octet1 == 0 && octet2 == 0 && octet3 == 0)
        return true;
    else
        return false;
}

bool AddressChecks::CheckMaxByte(short octet1)
{
    if (octet1 == 255)
        return true;
    else
        return false;
}

bool AddressChecks::CheckMaxByte(short octet1, short octet2)
{
    if (octet1 == 255 && octet2 == 255)
        return true;
    else
        return false;
}

bool AddressChecks::CheckMaxByte(short octet1, short octet2, short octet3)
{
    if (octet1 == 255 && octet2 == 255 && octet3 == 255)
        return true;
    else
        return false;
}

/*bool AddressChecks::CheckIp(short octet1, short octet2, short octet3, short octet4)
{

}*/

bool AddressChecks::CheckSubnet(short octet1, short octet2, short octet3, short octet4)
{           //make recursive function?
    if (!CheckMaxByte(octet1) && CheckZero(octet2, octet3, octet4))
    {
        return true;
    }
    else if (!CheckMaxByte(octet1) && !CheckZero(octet2, octet3, octet4))
    {
        return false;
    }
    else if (CheckMaxByte(octet1))
    {
        if (!CheckMaxByte(octet2) && CheckZero(octet3, octet4))
        {
            return true;
        }
        else if (!CheckMaxByte(octet2) && !CheckZero(octet3, octet4))
        {
            return false;
        }
        else if (CheckMaxByte(octet2))
        {
            if (!CheckMaxByte(octet3) && CheckZero(octet4))
            {
                return true;
            }
            else if (!CheckMaxByte(octet3) && !CheckZero(octet4))
            {
                return false;
            }
            else if (CheckMaxByte(octet3))
            {
                return true;
            }
        }
    }

    return false;

}

bool AddressChecks::CheckWildCard(short octet1, short octet2, short octet3, short octet4)
{
    if (!CheckZero(octet1) && CheckMaxByte(octet2, octet3, octet4))
    {
        return true;
    }
    else if (!CheckZero(octet1) && !CheckMaxByte(octet2, octet3, octet4))
    {
        return false;
    }
    else if (CheckZero(octet1))
    {
        if (!CheckZero(octet2) && CheckMaxByte(octet3, octet4))
        {
            return true;
        }
        else if (!CheckZero(octet2) && !CheckMaxByte(octet3, octet4))
        {
            return false;
        }
        else if (CheckZero(octet2))
        {
            if (!CheckZero(octet3) && CheckMaxByte(octet4))
            {
                return true;
            }
            else if (!CheckZero(octet3) && !CheckMaxByte(octet4))
            {
                return false;
            }
            else if (CheckZero(octet3))
            {
                return true;
            }
        }
    }

    return false;

}

} //End Namespace
