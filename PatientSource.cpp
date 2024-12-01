#include"Patient.h"
void Patient::setfname(string Efname) {
	fname = Efname;
}

string Patient::getfname()
{
	return fname;
}

void Patient::setlname(string Elname) {
	lname = Elname;
}

string Patient::getlname()
{
	return lname;
}

void Patient::setssn(string Essn) {
	ssn = Essn;
}

string Patient::getssn()
{
	return ssn;
}

void Patient::setPhoneNum(string Ephonenumber) {
	PhoneNum = Ephonenumber;
}

string Patient::getPhoneNum()
{
	return PhoneNum;
}

void Patient::setrgittime(string s)
{
	registeredtime = s;
}

string Patient::getrgittime()
{
	return registeredtime;
}

void Patient::setage(size_t Eage)
{
	age = Eage;
}

size_t Patient::getage()
{
	return age;
}

void Patient::setReservedTime(size_t Hour, size_t Minute)
{
	if ((Hour >= 0 && Hour < 24) && (Minute >= 0 && Minute < 60))
	{
		reservedHour = Hour;
		reservedMinute = Minute;
	}
	else
		throw invalid_argument("Houre or Minute or both are out of range\a\n");

}

size_t Patient::getReservedHour() {
	return reservedHour;
}
size_t Patient::getReservedMinute() {
	return reservedMinute;
}

void Patient::setDoctorsName(string Edoctorsname) {
	doctorsName = Edoctorsname;
}

string Patient::getDoctorsName() {
	return doctorsName;
}

void Patient::setDoctorsVisit(string Edoctorsvisit) {
	doctorsVisit = Edoctorsvisit;

}

string Patient::getDoctorsVisit() {
	return doctorsVisit;
}

void Patient::setcharacter(string Echarachter)
{
	character = Echarachter;
}
string Patient::getcharacter()
{
	return character;
}

void Patient::setdepartment(string Edepartment)
{
	department = Edepartment;
}

string Patient::getdepartment()
{
	return department;
}

void Patient::setFactorPrice(size_t Eprice)
{
	factorPrice = Eprice;
}

size_t Patient::getFactorPrice()
{
	return factorPrice;
}