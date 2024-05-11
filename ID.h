#ifndef ID_H
#define ID_H
#include <string>
#include <iostream>

using namespace std;

class ID
{
    public:
        ID(); //default constructor
        ID(int inputNum); //constrcutor
        void setID_number(int input);
        void setfull_ID(int input);
        int getID_number(); //returns ID number only
        string getfull_ID(); //returns full ID with A

    private:
        int ID_number; //ID number without A
        string full_ID; //ID number including the A
};
#endif