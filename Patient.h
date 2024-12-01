#pragma once
#include"Parent.h"

class Patient
{
private:
	string fname, lname, ssn, PhoneNum, registeredtime, doctorsName, doctorsVisit, character, department;
	size_t age, reservedHour, reservedMinute, factorPrice;
public:
	Patient() : factorPrice(0), age(0), reservedHour(0), reservedMinute(0) {}

	void setfname(string);
	string getfname();

	void setlname(string);
	string getlname();

	void setssn(string);
	string getssn();

	void setPhoneNum(string);
	string getPhoneNum();

	void setrgittime(string);
	string getrgittime();

	void setage(size_t);
	size_t getage();

	void setReservedTime(size_t, size_t);
	size_t getReservedHour();
	size_t getReservedMinute();

	void setDoctorsName(string);
	string getDoctorsName();

	void setDoctorsVisit(string);
	string getDoctorsVisit();

	void setcharacter(string);
	string getcharacter();

	void setdepartment(string);
	string getdepartment();

	void setFactorPrice(size_t);
	size_t getFactorPrice();

	void displayinfo()
	{
		cout << " - Name: " << getfname() << " - LastName: " << getlname() << " - age: " << getage()
			<< " - SSN: " << getssn() << " - Tel: " << getPhoneNum() << " - Character: " << character << endl << " - Department: " << department
			<< " - Doctors Name: " << getDoctorsName() << " - factorPrice: " << factorPrice << "\n\t\t\t  - TimeRegistered: " << getrgittime() << endl;
		cout << "\nßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	}
};