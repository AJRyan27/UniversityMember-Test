#ifndef NAME_H
#define NAME_H
#include <string>

using namespace std;

class Name
{
	public:
		//constructors to define first and last name
		Name(string inputName);
		Name();

		void setFirstName(string firstName);
		void setLastName(string lastName);
		
		//getter functions return a string
		string getFirstName();
		string getLastName();

		void printName();

	private:
		string fname;
		string lname;
};
#endif

