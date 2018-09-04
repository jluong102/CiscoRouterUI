#ifndef ADDRESSCHECKS_H
#define ADDRESSCHECKS_H

namespace Check
{

class AddressChecks
{
public:
    AddressChecks();
    ~AddressChecks();

protected:
    //bool CheckIp(short, short, short, short);
    bool CheckSubnet(short, short, short, short);
    bool CheckWildCard(short, short, short, short);

private:
    bool CheckZero(short);
    bool CheckZero(short, short);
    bool CheckZero(short, short, short);
    bool CheckMaxByte(short);
    bool CheckMaxByte(short, short);
    bool CheckMaxByte(short, short, short);

};

}

#endif // ADDRESSCHECKS_H
