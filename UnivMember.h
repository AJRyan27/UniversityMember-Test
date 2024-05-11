#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H
#include <string>
#include <iostream>
#include "ID.h"
#include "Name.h"

using namespace std;

class UniversityMember
{
    public:
        UniversityMember();

        void setUnivName(string fullName);
        Name getUnivName() const;

        void setUnivID(int inputNum);
        ID getUnivID() const;

        void setRole(string inputRole);
        string getRole() const;

        void Print();
        //overloading the << operator makes the print function unnecessary


    private:
        ID UnivID;
        Name UnivName;
        string Role;

    friend ostream& operator<<(ostream& output, const UniversityMember& UnivMember);
        //overloading the cout opertor allows output of UniversityMember objects 

};

class Student : public UniversityMember {
    public:
        Student();
        Student(string inputString);
        void setClassList(string numList);
        int getClassList();

        void setNumClasses(int numClass);
        int getNumClasses() const;
        friend void printClassList(const Student& student);
    

    private:
        string classList;
        int numClasses;

    friend void printSchedule(Student UnivStudent);
};

#endif