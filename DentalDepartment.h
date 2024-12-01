#pragma once
#include"Parent.h"


class DentalDepartment : public Parent
{
private:
	string character;
	string department;
	size_t visitcash;
public:
	DentalDepartment() :visitcash(0)
	{

	}
	void setcharachter()
	{
		character = "Doctor";
	}
	string getcharacter()
	{
		return character;
	}

	void setdepartment()
	{
		department = "Dental";
	}

	string getdepartment()
	{
		return department;
	}

	void setvisitcash(size_t vcash)
	{
		visitcash = vcash;
	}

	size_t getvisitcash()
	{
		return visitcash;
	}

	void displayinfo()
	{
		cout << " - Name: " << getfname() << " - LastName: " << getlname() << " - age: " << getage()
			<< " - SSN: " << getssn() << " - Tel: " << getphone() << " - Character: " << character << endl << " - Department: " << department << " - VisitCash: " << visitcash
			<< " - Shift: " << gethour() << ":" << getminute() << " To " << getTohour()
			<< ":" << getTominute() << " - TimeRegistered: " << getrgittime() << endl;
		cout << "\nßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	}
};