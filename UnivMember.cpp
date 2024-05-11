#include "UnivMember.h"
#include "Name.h"
#include "ID.h"
#include <iostream>
#include <sstream>

using namespace std;

UniversityMember::UniversityMember()
{
    string firstN = "first";
    string lastN = "last";
    UnivID.setID_number(00000000);
    UnivName.setFirstName(firstN);
    UnivName.setLastName(lastN);
    Role = "none";
}

void UniversityMember::setUnivID(int inputNum)
{
    UnivID = ID(inputNum);
}

ID UniversityMember::getUnivID() const
{
    return(UnivID);
}

void UniversityMember::setUnivName(string fullName)
{
    UnivName = Name(fullName);
}

Name UniversityMember::getUnivName() const
{
    return(UnivName);
}

void UniversityMember::setRole(string inputRole)
{
    Role = inputRole;
}

string UniversityMember::getRole() const
{
    return(Role);
}

//leftover code from prior to overloaded << operator
void UniversityMember::Print()
{
    cout << Role << ": " << UnivName.getFirstName() << " " << UnivName.getLastName() << "\n";
    cout << "ID: " << UnivID.getfull_ID() << "\n";
    cout << endl;
}

Student::Student()
{

}

Student::Student(string inputString)
{
    int endLast = inputString.find(",");
	string lastName = inputString.substr(2, endLast);
	string rest = inputString.substr(endLast + 1, inputString.size());
    string firstName = rest.substr(endLast + 1, rest.find('"'));

}

void Student::setClassList(string numList)
{
    classList = numList;

    /*istringstream allNum(numList);
    //declare a vector to hold however many CRNs are needed
    vector<string> tempVector;
    string temp;
    
    while((getline(allNum, temp, '\t')) || (getline(allNum, temp, ' ')))
    {
        tempVector.push_back(temp);
    }
    string* classSchedule = new string[tempVector.size()];

    //use a for loop to copy all vector members to array
    for (int i = 0; i < tempVector.size(); ++i)
    {
        classSchedule[i] = tempVector[i];
    }

    numClasses = tempVector.size();*/
}

void Student::setNumClasses(int numClass)
{
    numClasses = numClass;
}

int Student::getNumClasses() const
{
    return numClasses;
}

ostream &operator<<(ostream &output, const UniversityMember &UnivMember)
{
    output << UnivMember.getRole() << ": " << UnivMember.getUnivName().getFirstName() << " " << UnivMember.getUnivName().getLastName() << "\n";
    output << "ID: " << UnivMember.getUnivID().getfull_ID() << "\n";
    return output;
}

/*void printSchedule(Student UnivStudent)
{
    for (int i = 0; i < UnivStudent.numClasses; ++i)
    {
        cout << UnivStudent.classList[i] << " ";
    }
    cout << "\n";
}*/

void printClassList(const Student& student) 
{
    cout << "Course(CRN): " << student.classList;
    cout << endl;
    cout << endl;
}
