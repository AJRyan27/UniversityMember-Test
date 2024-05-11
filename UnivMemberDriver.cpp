#include "UnivMember.h"
#include "Name.h"
#include "ID.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("CSProfNames.txt");
	if (!infile) {
		cout << "file is not opened\n";
		exit(0);
	}
	
    static int currentNum = 10000000;
	string inputName;
	vector<UniversityMember> ProfList(45);
	int i = 0;
    string prof = "Prof";
	if (infile)
	{
		while(getline(infile, inputName))
		{
			ProfList[i].setUnivName(inputName);
            ProfList[i].setUnivID(currentNum);
            ProfList[i].setRole(prof);
            ++currentNum;
            ++i;
		}
	}
	infile.close();

	 for (int j = 0; j < 45; ++j)
    {
        cout << ProfList[j];
    }

    infile.open("StudentsWithCRNs.txt");
    if (!infile) {
		cout << "file is not opened\n";
		exit(0);
	}

    vector<Student> StudentList(328);
    int k = 0;
    string estudiante = "Student";
    if (infile)
	{
		while(getline(infile, inputName))
		{
			//create an input string stream to make parsing the name and CRN much easier
			istringstream nameAndCRNs(inputName);
			string currName;
			vector<int> courseList;
			string tempVal;

			//seperate names first
			getline(nameAndCRNs, tempVal, '"');
			//after separating the leading quote currName is assigned the full name
			getline(nameAndCRNs, currName, '"');
			StudentList[k].setUnivName(currName);
			int lengthName = currName.length();

			//separate the second half of the string which contains the CRNs
			string numList = inputName.substr(lengthName + 2, inputName.length());

			//function fill array of class CRNs
			StudentList[k].setClassList(numList);

            StudentList[k].setUnivID(currentNum);
            StudentList[k].setRole(estudiante);
            ++currentNum;
            ++k;
		}
	}
	infile.close();

    for (int m = 0; m < 328; ++m)
	{
		cout << StudentList[m];
		printClassList(StudentList[m]);
	}

    return(0);
}
