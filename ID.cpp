#include "ID.h"

using namespace std;

ID::ID()
{
    ID_number = 10000000;
    full_ID = "A10000000";
}

ID::ID(int currentNumber)
{
    ID_number = currentNumber;
    string tempVal = to_string(currentNumber);
    full_ID = "A" + tempVal;
}

string ID::getfull_ID()
{
    return full_ID;
}

int ID::getID_number()
{
    return ID_number;
}

void ID::setfull_ID(int currentNumber)
{
    string tempVal = to_string(currentNumber);
    full_ID = "A" + tempVal;
}

void ID::setID_number(int currentNumber)
{
    ID_number = currentNumber;
}
