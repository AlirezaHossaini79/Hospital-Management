#include"Parent.h"


void Parent::setfname(string name)
{
	fname = name;
}

string Parent::getfname()
{
	return fname;
}

void Parent::setlname(string lnam)
{
	lname = lnam;
}

string Parent::getlname()
{
	return lname;
}

void Parent::setage(size_t Age)
{
	age = Age;
}

size_t Parent::getage()
{
	return age;
}

void Parent::setssn(string SSN)
{
	ssn = SSN;
}

string Parent::getssn()
{
	return ssn;
}

void Parent::setphone(string PHone)
{
	PhoneNum = PHone;
}

string Parent::getphone()
{
	return PhoneNum;
}


void Parent::setTimeShift(size_t h, size_t m)
{
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60))
	{
		hour = h;
		minute = m;
	}
	else
		throw invalid_argument("Houre or Minute or both are out of range\a\n");
}

size_t Parent::gethour()
{
	return hour;
}


size_t Parent::getminute()
{
	return minute;
}


void Parent::setToTimeShift(size_t Th, size_t Tm)
{
	if ((Th >= 0 && Th < 24) && (Tm >= 0 && Tm < 60))
	{
		Tohour = Th;
		Tominute = Tm;
	}
	else
		throw invalid_argument("Houre or Minute or both are out of range\a\n");
}

size_t Parent::getTohour()
{
	return Tohour;
}

size_t Parent::getTominute()
{
	return Tominute;
}

void Parent::setrgittime(string s)
{
	registeredtime = s;
}

string Parent::getrgittime()
{
	return registeredtime;
}