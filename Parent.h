#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<chrono>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
#include<stdexcept>

using namespace std;

class Parent
{
private:
	string fname, lname, ssn, PhoneNum, registeredtime;
	size_t hour, minute, Tohour, Tominute, age;
public:
	Parent() : age(0), hour(0), minute(0), Tohour(0), Tominute(0){}
	void setfname(string);

	string getfname();

	void setlname(string);

	string getlname();

	void setage(size_t);

	size_t getage();

	void setssn(string);

	string getssn();

	void setphone(string);

	string getphone();

	void setTimeShift(size_t, size_t);

	size_t gethour();

	size_t getminute();

	void setToTimeShift(size_t, size_t);

	size_t getTohour();

	size_t getTominute();

	void setrgittime(string s);

	string getrgittime();
};