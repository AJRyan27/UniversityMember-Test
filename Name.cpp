#include "Name.h"
#include <iostream>
#include <string>

using namespace std;

Name::Name(string inputName)
{
	int endLast = inputName.find(',');
	string lastName = inputName.substr(0, endLast);
	string firstName = inputName.substr(endLast + 1, inputName.size());

	fname = firstName;
	lname = lastName;
}

Name::Name()
{
        fname = "First";
        lname = "Last";
}

void Name::setFirstName(string firstName)
{
	fname = firstName;
}

void Name::setLastName(string lastName)
{
	lname = lastName;
}

string Name::getFirstName()
{
	return(fname);
}

string Name::getLastName()
{
	return(lname);
}

void Name::printName()
{
	cout << fname << " " << lname << "\n";
}
