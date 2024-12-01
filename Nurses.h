#pragma once
#include"Parent.h"

class Nurses : public Parent
{
private:
	string character;
	string department;
public:
	Nurses()
	{

	}

	void setcharacter(string Ncharacter)
	{
		character = Ncharacter;
	}

	string getcharacter()
	{
		return character;
	}

	void setdepartment(string Ndepartment)
	{
		department = Ndepartment;
	}

	string getdepartment()
	{
		return department;
	}

	void displayinfo()
	{
		cout << " - Name: " << getfname() << " - LastName: " << getlname() << " - age: " << getage()
			<< " - SSN: " << getssn() << " - Tel: " << getphone() << " - Character: " << character << endl << " - Department: " << department
			<< " - Shift: " << gethour() << ":" << getminute() << " To " << getTohour()
			<< ":" << getTominute() << " - TimeRegistered: " << getrgittime() << endl;
		cout << "\nßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	}
};