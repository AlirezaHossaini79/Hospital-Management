#include"Header.h"

HANDLE Colour = GetStdHandle(STD_OUTPUT_HANDLE);

string s()// Show System Date & Time.
{
	string sr;
	chrono::time_point<chrono::system_clock> now = chrono::system_clock::now();
	time_t start_time = chrono::system_clock::to_time_t(now);
	char timedisplay[100];
	struct tm buf;
	errno_t err = localtime_s(&buf, &start_time);
	if (strftime(timedisplay, sizeof(timedisplay), "%H:%M,%A,%B%d,%Y", &buf))
	{
		sr = timedisplay;
	}
	return sr;
}

void Write(char c[]) // Write Charcters.
{
	for (size_t i = 0; i < strlen(c); i++)
	{
		cout << c[i];
		Sleep(1);
	}
}

void About()// About Developers Group
{
	system("cls");
	char x[] = "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
	char z[] = "\n\t\t\t\tSadjad Advanced Programming Final Project \n\n\t\t\t\t\t      Written By:       \n\n\t\t\t\t\t Sayed Alireza Hossaini \n\n\t\t\t\t\t      instructor: \n\n\t\t\t\t\t   Dr. Reza Shamsaee \t\t    \n\n\n\n\t\t\t\t\t     January 2021";
	cout << "\t\t\t " << char(201);
	Write(x);
	cout << char(187);
	Write(z);
	cout << "\n\n\t\t\t ";
	cout << char(200);
	Write(x);
	cout << char(188) << endl;
	system("pause");
	return;
}

int mainmenu()//main menu out put
{
	system("cls");
	int x = 0;
	cout << "\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t   Please Select The Desired Character:\n\n";
	cout << "\t\t\t\t         " << s() << endl;
	cout << "\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n" << endl;
	cout << "\t\t\t\t         (1)  >------> Doctors: " << endl;
	cout << "\t\t\t\t         (2)  >------> Nurses: " << endl;
	cout << "\t\t\t\t         (3)  >------> Patients: " << endl;
	cout << "\t\t\t\t         (4)  >------> About: " << endl;
	cout << "\t\t\t\t         (5)  >------> Exit System." << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t     Please Select";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	cin >> x;
	return x;
}

int DepartmentMenu()// Department Menu That We Almost Use it For Any Operation.
{
	int n = 0;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Select Department" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	cout << "\t\t\t\t     (1) >------> Dental Department:\n";
	cout << "\t\t\t\t     (2) >------> Dermatology Department:\n";
	cout << "\t\t\t\t     (3) >------> internal Medicine Department:" << endl;
	cout << "\t\t\t\t     (4) >------> Back To Main Menu." << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t     Please Select";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	cin >> n;
	return n;
}

int OperationMenu()// Menu For Desired Operations.
{
	int n = 0;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t      Please Select The Desired Operation" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	cout << "\t\t\t\t         (1) >------> ADD Information:\n";
	cout << "\t\t\t\t         (2) >------> View Information:\n";
	cout << "\t\t\t\t         (3) >------> Delete Information:\n";
	cout << "\t\t\t\t         (4) >------> Edit Information:" << endl;
	cout << "\t\t\t\t         (5) >------> Search by SSN:" << endl;
	cout << "\t\t\t\t         (6) >------> Back To Main Menu." << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t       Please Select";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t   >>> ";
	cin >> n;
	return n;
}

void savedentiststofile(vector<DentalDepartment>& Dentist)// Save Dentists info to dentist.txt
{
	system("cls");
	string DentistsFile = "Dentists.txt";
	ofstream fout(DentistsFile);
	if (fout)
	{
		for (size_t i = 0; i < Dentist.size(); i++)
		{
			fout << Dentist[i].getfname() << " " << Dentist[i].getlname() << " " << Dentist[i].getage() << "  " << Dentist[i].getssn() << "  " 
				<< Dentist[i].getphone() << "  " << Dentist[i].getcharacter() << " " << Dentist[i].getdepartment() << " " 
				<< Dentist[i].getvisitcash() << " " << Dentist[i].gethour() << " " << Dentist[i].getminute() << " " << Dentist[i].getTohour() 
				<< " " << Dentist[i].getTominute() << " " << Dentist[i].getrgittime() << endl;
		}
	}
	fout.close();
	return;
}

void saveDermatologiststofile(vector<SkinDepartment>& Dermatologist)// Save Dermatologists info To Dermatologists.txt
{
	system("cls");
	string DermatologistsFile = "Dermatologists.txt";
	ofstream fout(DermatologistsFile);
	if (fout)
	{
		for (size_t i = 0; i < Dermatologist.size(); i++)
		{
			fout << Dermatologist[i].getfname() << " ";
			fout << Dermatologist[i].getlname() << " ";
			fout << Dermatologist[i].getage() << "  ";
			fout << Dermatologist[i].getssn() << "  ";
			fout << Dermatologist[i].getphone() << "  ";
			fout << Dermatologist[i].getcharacter() << " ";
			fout << Dermatologist[i].getdepartment() << " ";
			fout << Dermatologist[i].getvisitcash() << " ";
			fout << Dermatologist[i].gethour() << " ";
			fout << Dermatologist[i].getminute() << " ";
			fout << Dermatologist[i].getTohour() << " ";
			fout << Dermatologist[i].getTominute() << " ";
			fout << Dermatologist[i].getrgittime() << endl;

		}
	}
	fout.close();
	return;
}

void saveInternalMedicinesTofile(vector<internaldepartment>& intermedicine)// Save Internal medicines info to intermedicine.txt
{
	system("cls");
	string intermedicinesFile = "intermedicine.txt";
	ofstream fout(intermedicinesFile);
	if (fout)
	{
		for (size_t i = 0; i < intermedicine.size(); i++)
		{
			fout << intermedicine[i].getfname() << " ";
			fout << intermedicine[i].getlname() << " ";
			fout << intermedicine[i].getage() << "  ";
			fout << intermedicine[i].getssn() << "  ";
			fout << intermedicine[i].getphone() << "  ";
			fout << intermedicine[i].getcharacter() << " ";
			fout << intermedicine[i].getdepartment() << " ";
			fout << intermedicine[i].getvisitcash() << " ";
			fout << intermedicine[i].gethour() << " ";
			fout << intermedicine[i].getminute() << " ";
			fout << intermedicine[i].getTohour() << " ";
			fout << intermedicine[i].getTominute() << " ";
			fout << intermedicine[i].getrgittime() << endl;

		}
	}
	fout.close();
	return;
}



void ReadDentistsinfo(vector<DentalDepartment>& Dentist)  // Read Dentists Info From Dentists.txt
{
	string name, lnam, SSN, PHone, ch, dep, regitime;
	size_t Age = 0, vcash = 0, h = 0, m = 0, Tm = 0, Th = 0;
	string DentistsFile = "Dentists.txt";
	ifstream fin(DentistsFile);

	if (!fin)
	{

		char error[] = "Dentist's File Does Not Exist or Not Created Yet.\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(error);
		SetConsoleTextAttribute(Colour, 0x7);
		return;
	}

	if (fin)
	{
		char payam[] = "Dentist's File Opened Successfully.\n";
		SetConsoleTextAttribute(Colour, 0xA);
		Write(payam);
		SetConsoleTextAttribute(Colour, 0x7);
		DentalDepartment Dtemp;
		while (fin >> name)
		{
			fin >> lnam >> Age >> SSN >> PHone >> ch >> dep >> vcash >> h >> m >> Th >> Tm >> regitime;
			Dtemp.setfname(name);
			Dtemp.setlname(lnam);
			Dtemp.setage(Age);
			Dtemp.setssn(SSN);
			Dtemp.setphone(PHone);
			Dtemp.setcharachter();                           //These Functions Does Not
			Dtemp.setdepartment();                          //Take Any Argument They Assigns In Desired Class By Default.
			Dtemp.setvisitcash(vcash);
			Dtemp.setTimeShift(h, m);
			Dtemp.setToTimeShift(Th, Tm);
			Dtemp.setrgittime(regitime);
			Dentist.push_back(Dtemp);
		}
	}
	fin.close();
	return;
}


void ReadDermatologistsinfo(vector<SkinDepartment>& Dermatologist)  // Read Dermatologists Info From Dermatologists.txt
{
	string name, lnam, SSN, PHone, ch, dep, regitime;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0, vcash = 0;
	string DermatologistsFile = "Dermatologists.txt";
	ifstream fin(DermatologistsFile);

	if (!fin)
	{
		char qu[] = "Dermatologist's File Does Not Exist or Not Created Yet.\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(qu);
		SetConsoleTextAttribute(Colour, 0x7);
	}

	if (fin)
	{
		char pyam[] = "Dermatologist's File Opened Successfully.\n";
		SetConsoleTextAttribute(Colour, 0xA);
		Write(pyam);
		SetConsoleTextAttribute(Colour, 0x7);
		SkinDepartment Stemp;
		while (fin >> name)
		{
			fin >> lnam >> Age >> SSN >> PHone >> ch >> dep >> vcash >> h >> m >> Th >> Tm >> regitime;
			Stemp.setfname(name);
			Stemp.setlname(lnam);
			Stemp.setage(Age);
			Stemp.setssn(SSN);
			Stemp.setphone(PHone);
			Stemp.setcharachter();                      /// These Setter Function Does Not
			Stemp.setdepartment();                     /// Take Any Argument The Assigns In Class By Default.
			Stemp.setvisitcash(vcash);
			Stemp.setTimeShift(h, m);
			Stemp.setToTimeShift(Th, Tm);
			Stemp.setrgittime(regitime);
			Dermatologist.push_back(Stemp);
		}
	}
	fin.close();
	return;
}

void ReadInternalmedicineinfo(vector<internaldepartment>& intermedicine) // Read Internal Medicines Info From intermedicine.txt
{
	string name, lnam, SSN, PHone, ch, dep, regitime;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0, vcash;
	string intermedicinesfile = "intermedicine.txt";
	ifstream fin(intermedicinesfile);

	if (!fin)
	{
		char x[] = "Intermedcine's File Does Not Exist or Not Created Yet.\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(x);
		SetConsoleTextAttribute(Colour, 0x7);
	}

	if (fin)
	{
		char c[] = "Intermedicine's File Opened Successfully.\n";
		SetConsoleTextAttribute(Colour, 0xA);
		Write(c);
		SetConsoleTextAttribute(Colour, 0x7);
		internaldepartment iTemp;
		while (fin >> name)
		{
			fin >> lnam >> Age >> SSN >> PHone >> ch >> dep >> vcash >> h >> m >> Th >> Tm >> regitime;
			iTemp.setfname(name);
			iTemp.setlname(lnam);
			iTemp.setage(Age);
			iTemp.setssn(SSN);
			iTemp.setphone(PHone);
			iTemp.setcharachter();                              // These Functions Does Not
			iTemp.setdepartment();                             // Take Any Argument They Assigns In Class By Default.
			iTemp.setvisitcash(vcash);
			iTemp.setTimeShift(h, m);
			iTemp.setToTimeShift(Th, Tm);
			iTemp.setrgittime(regitime);
			intermedicine.push_back(iTemp);
		}
	}
	fin.close();
	return;
}

void Detistadd(vector<DentalDepartment>& Dentist)  // ADD New Dentist To Dental Department.
{
	system("cls");
	string name, lnam, SSN, PHone;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0, vcash = 0;
	DentalDepartment Dtemp;

	cout << "-> First Name: ";
	cin.ignore();
	getline(cin, name);
	Dtemp.setfname(name);

	cout << "-> Last Name: ";
	getline(cin, lnam);
	Dtemp.setlname(lnam);

	cout << "-> Age: ";
	cin >> Age;
	Dtemp.setage(Age);

	Dtemp.setcharachter();                    // These setter function Does not 
	Dtemp.setdepartment();                    // Take Any Argument They Assigns in Class by Default.

	cout << "-> Visit Cash: ";
	cin >> vcash;
	Dtemp.setvisitcash(vcash);

	cout << "-> Social Security Number: ";
	cin.ignore();
	getline(cin, SSN);
	Dtemp.setssn(SSN);

	cout << "-> Phone Number: ";
	getline(cin, PHone);
	Dtemp.setphone(PHone);
	cout << "-> Shift Time: \nHour:";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
	while (true)
	{
		try
		{
			Dtemp.setTimeShift(h, m);
			break;
		}
		catch (invalid_argument& ex)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << ex.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "Hour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
		}
	}
	cout << "\nTo Hour: ";
	cin >> Th;
	cout << "Minute: ";
	cin >> Tm;
	while (true)
	{
		try
		{
			Dtemp.setToTimeShift(Th, Tm);
			break;
		}
		catch (invalid_argument& e)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << e.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
		}
	}
	Dtemp.setrgittime(s());//Saves The Registering Time.
	Dentist.push_back(Dtemp);//Add New Dentist To vector
	savedentiststofile(Dentist);//Save To File Auto.
	system("cls");
	SetConsoleTextAttribute(Colour, 0xA);
	cout << "Saved Successfully." << endl;
	SetConsoleTextAttribute(Colour, 0x7);
	system("pause");
	return;
}

void Dermatologistadd(vector<SkinDepartment>& Dermatologist)// ADD New Dermatologist To Skin Department.
{
	system("cls");
	string name, lnam, SSN, PHone;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0, vcash = 0;
	SkinDepartment Stemp;
	cout << "-> First Name: ";
	cin.ignore();
	getline(cin, name);
	Stemp.setfname(name);

	cout << "-> Last Name: ";
	getline(cin, lnam);
	Stemp.setlname(lnam);

	cout << "-> Age: ";
	cin >> Age;
	Stemp.setage(Age);

	Stemp.setcharachter();                           // These Functions Does Not 
	Stemp.setdepartment();                           // Take Any Argument They Assigns In Class By Default.

	cout << "-> Visit Cash: ";
	cin >> vcash;
	Stemp.setvisitcash(vcash);

	cout << "-> Social Security Number: ";
	cin.ignore();
	getline(cin, SSN);
	Stemp.setssn(SSN);

	cout << "-> Phone Number: ";
	getline(cin, PHone);
	Stemp.setphone(PHone);
	cout << "-> Shift Time: \nHour:";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
	while (true)
	{
		try
		{
			Stemp.setTimeShift(h, m);
			break;
		}
		catch (invalid_argument& ex)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << ex.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "Hour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
		}
	}
	cout << "\nTo Hour: ";
	cin >> Th;
	cout << "Minute: ";
	cin >> Tm;
	while (true)
	{
		try
		{
			Stemp.setToTimeShift(Th, Tm);
			break;
		}
		catch (invalid_argument& e)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << e.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
		}
	}
	Stemp.setrgittime(s());//Saves The Registering Time.
	Dermatologist.push_back(Stemp);//Save New Information To vector.
	saveDermatologiststofile(Dermatologist);//Save To file Auto.
	system("cls");
	SetConsoleTextAttribute(Colour, 0xA);
	cout << "Saved Successfully." << endl;
	SetConsoleTextAttribute(Colour, 0x7);
	system("pause");
	return;
}

void intermedicadd(vector<internaldepartment>& intermedicine)  //ADD Internal Medicine New To InternalDepartment.
{
	system("cls");
	string name, lnam, SSN, PHone;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0, vcash;
	internaldepartment iTemp;
	cout << "-> First Name: ";
	cin.ignore();
	getline(cin, name);
	iTemp.setfname(name);

	cout << "-> Last Name: ";
	getline(cin, lnam);
	iTemp.setlname(lnam);

	cout << "-> Age: ";
	cin >> Age;
	iTemp.setage(Age);

	iTemp.setcharachter();                                // These Functions Does Not
	iTemp.setdepartment();                                // Take Any Argument They Assign In Class By Default.

	cout << "-> Visit Cash: ";
	cin >> vcash;
	iTemp.setvisitcash(vcash);

	cout << "-> Social Security Number: ";
	cin.ignore();
	getline(cin, SSN);
	iTemp.setssn(SSN);

	cout << "-> Phone Number: ";
	getline(cin, PHone);
	iTemp.setphone(PHone);
	cout << "-> Shift Time: \nHour:";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
	while (true)
	{
		try
		{
			iTemp.setTimeShift(h, m);
			break;
		}
		catch (invalid_argument& ex)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << ex.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "Hour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
		}
	}
	cout << "\nTo Hour: ";
	cin >> Th;
	cout << "Minute: ";
	cin >> Tm;
	while (true)
	{
		try
		{
			iTemp.setToTimeShift(Th, Tm);
			break;
		}
		catch (invalid_argument& e)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << e.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
		}
	}
	iTemp.setrgittime(s());//Saves The Registering Time.
	intermedicine.push_back(iTemp);//Save New Information To vector.
	saveInternalMedicinesTofile(intermedicine);//Save To File Auto.
	system("cls");
	SetConsoleTextAttribute(Colour, 0xA);
	cout << "Saved Successfully." << endl;
	SetConsoleTextAttribute(Colour, 0x7);
	system("pause");
	return;
}

void showDentists(vector<DentalDepartment>& Dentist)                //  This Function Shows Dentists Personal Info.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t Dentists informations" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < Dentist.size(); i++)
	{
		cout << i << "):";
		Dentist[i].displayinfo();
	}
	system("pause");
	return;
}

void showDermatologists(vector<SkinDepartment>& Dermatologist)        // This Function Shows Dermatologists Info.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t Dermatologists informations" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < Dermatologist.size(); i++)
	{
		cout << i << "):";
		Dermatologist[i].displayinfo();
	}
	system("pause");
	return;
}


void showintermedicine(vector<internaldepartment>& intermedicine)           // This Function Shows Internal Medicines Info.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t intermedicines informations" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < intermedicine.size(); i++)
	{
		cout << i << "):";
		intermedicine[i].displayinfo();
	}
	system("pause");
	return;
}

void showinformationhandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int sele) // Show Doctors info Handler.
{
	switch (sele)
	{
	case 1:showDentists(Dentist);
		break;
	case 2:showDermatologists(Dermatologist);
		break;
	case 3:showintermedicine(intermedicine);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

void showinformation(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine)  // Select Department to Show It's Doctors Info.  
{
	int sele = DepartmentMenu();
	while (sele != 4)
	{
		showinformationhandler(Dentist, Dermatologist, intermedicine, sele);
		sele = DepartmentMenu();
	}
	return;
}

void addhandle(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int selec) // Add Doctors Handler.
{
	switch (selec)
	{
	case 1:Detistadd(Dentist);
		break;
	case 2:Dermatologistadd(Dermatologist);
		break;
	case 3:intermedicadd(intermedicine);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

void adddoctor(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine) // Select Department To ADD it's Doctors.
{
	int selec = DepartmentMenu();
	while (selec != 4)
	{
		addhandle(Dentist, Dermatologist, intermedicine, selec);
		selec = DepartmentMenu();
	}
	return;
}

void DeleteDentistsInfo(vector<DentalDepartment>& Dentist) // Delete Dentits info From Dental Department.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t Delete Dentists Information" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < Dentist.size(); i++)
	{
		cout << i << ")";
		Dentist[i].displayinfo();
	}

	int select = 0;
	cout << "Enter Number OF Person That You Want To Delete: ";
	cin >> select;
	try
	{
		Dentist.at(select);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	cout << "\nDo You Really Want To Delete {" << Dentist[select].getfname() << " " << Dentist[select].getlname() << " " << Dentist[select].getssn() << "}? (y/n)";

	char choose;
	cin >> choose;
	if (choose == 'y')
	{
		Dentist.erase(Dentist.begin() + select);
		savedentiststofile(Dentist);
		SetConsoleTextAttribute(Colour, 0xA);
		cout << "information Deleted Successfully." << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	else
		return;
}

void DeleteDermatologistsInfo(vector<SkinDepartment>& Dermatologist)   // Delete Dermatologists info From Skin Department.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t Delete Detmatologists Information" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < Dermatologist.size(); i++)
	{
		cout << i << ")";
		Dermatologist[i].displayinfo();
	}

	int select = 0;
	cout << "Enter Number OF Person That You Want To Delete: ";
	cin >> select;
	try
	{
		Dermatologist.at(select);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	cout << "\nDo You Really Want To Delete {" << Dermatologist[select].getfname() << " " << Dermatologist[select].getlname() << " " << Dermatologist[select].getssn() << "}? (y/n)";

	char choose;
	cin >> choose;
	if (choose == 'y')
	{
		Dermatologist.erase(Dermatologist.begin() + select);
		saveDermatologiststofile(Dermatologist);
		SetConsoleTextAttribute(Colour, 0xA);
		cout << "information Deleted Successfully." << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	else
		return;
}


void DeleteInternalMedicinesInfo(vector<internaldepartment>& intermedicine)   // Delete Internal Medicines Info From Internal Department.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t Delete InternalMedicines Information" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < intermedicine.size(); i++)
	{
		cout << i << ")";
		intermedicine[i].displayinfo();
	}

	int select = 0;
	cout << "Enter Number OF Person That You Want To Delete: ";
	cin >> select;
	try
	{
		intermedicine.at(select);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	cout << "\nDo You Really Want To Delete {" << intermedicine[select].getfname() << " " << intermedicine[select].getlname() << " " << intermedicine[select].getssn() << "}? (y/n)";

	char choose;
	cin >> choose;
	if (choose == 'y')
	{
		intermedicine.erase(intermedicine.begin() + select);
		saveInternalMedicinesTofile(intermedicine);
		SetConsoleTextAttribute(Colour, 0xA);
		cout << "information Deleted Successfully." << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	else
		return;
}


void DeleteInfoHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int choose) // Doctors Delete Info Handler.
{
	switch (choose)
	{
	case 1:DeleteDentistsInfo(Dentist);
		break;
	case 2:DeleteDermatologistsInfo(Dermatologist);
		break;
	case 3:DeleteInternalMedicinesInfo(intermedicine);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}


void DoctorsDeleteInfo(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine) //Select Department To Delete It's Doctors.
{
	int choose = DepartmentMenu();
	while (choose != 4)
	{
		DeleteInfoHandler(Dentist, Dermatologist, intermedicine, choose);
		choose = DepartmentMenu();
	}
	return;
}

void DentistEditInfo(vector<DentalDepartment>& Dentist)   // Edit Dentists Info Dental Department.
{
	system("cls");
	string name, lnam, SSN, PHone, regitime;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0;
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\tEdit Dentists Information " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	for (size_t i = 0; i < Dentist.size(); i++)
	{
		cout << i << ") ";
		Dentist[i].displayinfo();
	}
	cout << "Enter the number of the person you want: ";
	int choice = 0;
	cin >> choice;

	try
	{
		Dentist.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	DentalDepartment temp;
	temp = Dentist[choice];
	bool edit = true;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Possible Information for Edit " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	cout << "\t\t\t 1) Name: " << Dentist[choice].getfname() << endl;
	cout << "\t\t\t 2) Last Name: " << Dentist[choice].getlname() << endl;
	cout << "\t\t\t 3) Age: " << Dentist[choice].getage() << endl;
	cout << "\t\t\t 4) SSN: " << Dentist[choice].getssn() << endl;
	cout << "\t\t\t 5) Tel: " << Dentist[choice].getphone() << endl;
	cout << "\t\t\t 6) Shift " << Dentist[choice].gethour() << ":" << Dentist[choice].getminute() << " To " << Dentist[choice].getTohour() << ":" << Dentist[choice].getTominute() << endl;
	cout << "\t\t\t-1) Exit. " << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t     Select The Item Number To Edit : ";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	while (edit)
	{
		int select = 0;
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 1:
			cout << "-> First Name: ";
			getline(cin, name);
			temp.setfname(name);
			break;
		case 2:
			cout << "-> Last Name: ";
			getline(cin, lnam);
			temp.setlname(lnam);
			break;
		case 3:
			cout << "-> Age: ";
			cin >> Age;
			temp.setage(Age);
			break;
		case 4:
			cout << "-> Social Security Number: ";
			getline(cin, SSN);
			temp.setssn(SSN);
			break;
		case 5:
			cout << "-> Phone Number: ";
			getline(cin, PHone);
			temp.setphone(PHone);
			break;
		case 6:
			cout << "-> Shift Time: \nHour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
			while (true)
			{
				try
				{
					temp.setTimeShift(h, m);
					break;
				}
				catch (invalid_argument& ex)
				{
					SetConsoleTextAttribute(Colour, 0x4);
					cout << "Exception ->" << ex.what() << endl;
					SetConsoleTextAttribute(Colour, 0x7);
					cout << "Hour:";
					cin >> h;
					cout << "Minute: ";
					cin >> m;
				}
			}
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
			while (true)
			{
				try
				{
					temp.setToTimeShift(Th, Tm);
					break;
				}
				catch (invalid_argument& e)
				{
					SetConsoleTextAttribute(Colour, 0x4);
					cout << "Exception ->" << e.what() << endl;
					SetConsoleTextAttribute(Colour, 0x7);
					cout << "\tTo Hour: ";
					cin >> Th;
					cout << "Minute: ";
					cin >> Tm;
				}
			}
			break;
		case -1:
			edit = false;
			break;
		}
		system("cls");

		cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
		cout << "\t\t\t\t     Possible Information for Edit " << endl;
		cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

		cout << "\t\t\t 1) Name: " << temp.getfname() << endl;
		cout << "\t\t\t 2) Last Name: " << temp.getlname() << endl;
		cout << "\t\t\t 3) Age: " << temp.getage() << endl;
		cout << "\t\t\t 4) SSN: " << temp.getssn() << endl;
		cout << "\t\t\t 5) Tel: " << temp.getphone() << endl;
		cout << "\t\t\t 6) Shift " << temp.gethour() << ":" << temp.getminute() << " To " << temp.getTohour() << ":" << temp.getTominute() << endl;
		cout << "\t\t\t-1) Exit." << endl;
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t     Select The Item Number To Edit : ";
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t\t\t >>> ";
	}

	Dentist.erase(Dentist.begin() + choice);

	Dentist.push_back(temp);

	savedentiststofile(Dentist);
	return;
}

void DermatologistEditInfo(vector<SkinDepartment>& Dermatologist)  // Edit Dermatologists Info Skin Department.
{
	system("cls");
	string name, lnam, SSN, PHone, regitime;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0;
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Edit Dermatologists Information " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	for (size_t i = 0; i < Dermatologist.size(); i++)
	{
		cout << i << ") ";
		Dermatologist[i].displayinfo();
	}
	cout << "Enter the number of the person you want: ";
	int choice = 0;
	cin >> choice;

	try
	{
		Dermatologist.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	SkinDepartment temp;
	temp = Dermatologist[choice];
	bool edit = true;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Possible Information for Edit " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	cout << "\t\t\t 1) Name: " << Dermatologist[choice].getfname() << endl;
	cout << "\t\t\t 2) Last Name: " << Dermatologist[choice].getlname() << endl;
	cout << "\t\t\t 3) Age: " << Dermatologist[choice].getage() << endl;
	cout << "\t\t\t 4) SSN: " << Dermatologist[choice].getssn() << endl;
	cout << "\t\t\t 5) Tel: " << Dermatologist[choice].getphone() << endl;
	cout << "\t\t\t 6) Shift " << Dermatologist[choice].gethour() << ":" << Dermatologist[choice].getminute() << " To " << Dermatologist[choice].getTohour() << ":" << Dermatologist[choice].getTominute() << endl;
	cout << "\t\t\t-1) Exit. " << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t     Select The Item Number To Edit : ";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	while (edit)
	{
		int select = 0;
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 1:
			cout << "-> First Name: ";
			getline(cin, name);
			temp.setfname(name);
			break;
		case 2:
			cout << "-> Last Name: ";
			getline(cin, lnam);
			temp.setlname(lnam);
			break;
		case 3:
			cout << "-> Age: ";
			cin >> Age;
			temp.setage(Age);
			break;
		case 4:
			cout << "-> Social Security Number: ";
			getline(cin, SSN);
			temp.setssn(SSN);
			break;
		case 5:
			cout << "-> Phone Number: ";
			getline(cin, PHone);
			temp.setphone(PHone);
			break;
		case 6:
			cout << "-> Shift Time: \nHour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
			while (true)
			{
				try
				{
					temp.setTimeShift(h, m);
					break;
				}
				catch (invalid_argument& ex)
				{
					SetConsoleTextAttribute(Colour, 0x4);
					cout << "Exception ->" << ex.what() << endl;
					SetConsoleTextAttribute(Colour, 0x7);
					cout << "Hour:";
					cin >> h;
					cout << "Minute: ";
					cin >> m;
				}
			}
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
			while (true)
			{
				try
				{
					temp.setToTimeShift(Th, Tm);
					break;
				}
				catch (invalid_argument& e)
				{
					SetConsoleTextAttribute(Colour, 0x4);
					cout << "Exception ->" << e.what() << endl;
					SetConsoleTextAttribute(Colour, 0x7);
					cout << "\tTo Hour: ";
					cin >> Th;
					cout << "Minute: ";
					cin >> Tm;
				}
			}
			break;
		case -1:
			system("pause");
			edit = false;
			break;
		}
		system("cls");

		cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
		cout << "\t\t\t\t     Possible Information for Edit " << endl;
		cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

		cout << "\t\t\t 1) Name: " << temp.getfname() << endl;
		cout << "\t\t\t 2) Last Name: " << temp.getlname() << endl;
		cout << "\t\t\t 3) Age: " << temp.getage() << endl;
		cout << "\t\t\t 4) SSN: " << temp.getssn() << endl;
		cout << "\t\t\t 5) Tel: " << temp.getphone() << endl;
		cout << "\t\t\t 6) Shift " << temp.gethour() << ":" << temp.getminute() << " To " << temp.getTohour() << ":" << temp.getTominute() << endl;
		cout << "\t\t\t-1) Exit." << endl;
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t     Select The Item Number To Edit : ";
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t\t\t >>> ";
	}

	Dermatologist.erase(Dermatologist.begin() + choice);

	Dermatologist.push_back(temp);

	saveDermatologiststofile(Dermatologist);
	return;
}

void internalMedicineEditInfo(vector<internaldepartment>& intermedicine)  // Edit Internal Medicines Info Internal Department.
{
	system("cls");
	string name, lnam, SSN, PHone, regitime;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0;
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Edit InternalMedicines Information " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	for (size_t i = 0; i < intermedicine.size(); i++)
	{
		cout << i << ") ";
		intermedicine[i].displayinfo();
	}
	cout << "Enter the number of the person you want: ";
	int choice = 0;
	cin >> choice;

	try
	{
		intermedicine.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	internaldepartment temp;
	temp = intermedicine[choice];
	bool edit = true;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Possible Information for Edit " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	cout << "\t\t\t 1) Name: " << intermedicine[choice].getfname() << endl;
	cout << "\t\t\t 2) Last Name: " << intermedicine[choice].getlname() << endl;
	cout << "\t\t\t 3) Age: " << intermedicine[choice].getage() << endl;
	cout << "\t\t\t 4) SSN: " << intermedicine[choice].getssn() << endl;
	cout << "\t\t\t 5) Tel: " << intermedicine[choice].getphone() << endl;
	cout << "\t\t\t 6) Shift " << intermedicine[choice].gethour() << ":" << intermedicine[choice].getminute() << " To " << intermedicine[choice].getTohour() << ":" << intermedicine[choice].getTominute() << endl;
	cout << "\t\t\t-1) Exit. " << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t     Select The Item Number To Edit : ";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	while (edit)
	{
		int select = 0;
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 1:
			cout << "-> First Name: ";
			getline(cin, name);
			temp.setfname(name);
			break;
		case 2:
			cout << "-> Last Name: ";
			getline(cin, lnam);
			temp.setlname(lnam);
			break;
		case 3:
			cout << "-> Age: ";
			cin >> Age;
			temp.setage(Age);
			break;
		case 4:
			cout << "-> Social Security Number: ";
			getline(cin, SSN);
			temp.setssn(SSN);
			break;
		case 5:
			cout << "-> Phone Number: ";
			getline(cin, PHone);
			temp.setphone(PHone);
			break;
		case 6:
			cout << "-> Shift Time: \nHour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
			while (true)
			{
				try
				{
					temp.setTimeShift(h, m);
					break;
				}
				catch (invalid_argument& ex)
				{
					SetConsoleTextAttribute(Colour, 0x4);
					cout << "Exception ->" << ex.what() << endl;
					SetConsoleTextAttribute(Colour, 0x7);
					cout << "Hour:";
					cin >> h;
					cout << "Minute: ";
					cin >> m;
				}
			}
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
			while (true)
			{
				try
				{
					temp.setToTimeShift(Th, Tm);
					break;
				}
				catch (invalid_argument& e)
				{
					SetConsoleTextAttribute(Colour, 0x4);
					cout << "Exception ->" << e.what() << endl;
					SetConsoleTextAttribute(Colour, 0x7);
					cout << "\tTo Hour: ";
					cin >> Th;
					cout << "Minute: ";
					cin >> Tm;
				}
			}
			break;
		case -1:
			edit = false;
			break;
		}
		system("cls");

		cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
		cout << "\t\t\t\t     Possible Information for Edit " << endl;
		cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

		cout << "\t\t\t 1) Name: " << temp.getfname() << endl;
		cout << "\t\t\t 2) Last Name: " << temp.getlname() << endl;
		cout << "\t\t\t 3) Age: " << temp.getage() << endl;
		cout << "\t\t\t 4) SSN: " << temp.getssn() << endl;
		cout << "\t\t\t 5) Tel: " << temp.getphone() << endl;
		cout << "\t\t\t 6) Shift " << temp.gethour() << ":" << temp.getminute() << " To " << temp.getTohour() << ":" << temp.getTominute() << endl;
		cout << "\t\t\t-1) Exit." << endl;
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t     Select The Item Number To Edit : ";
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t\t\t >>> ";
	}

	intermedicine.erase(intermedicine.begin() + choice);

	intermedicine.push_back(temp);

	saveInternalMedicinesTofile(intermedicine);
	return;
}

void EditInfoHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int choice) // Doctors Edit Info Handler.
{
	switch (choice)
	{
	case 1:DentistEditInfo(Dentist);
		break;
	case 2:DermatologistEditInfo(Dermatologist);
		break;
	case 3:internalMedicineEditInfo(intermedicine);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}

}


void DoctorsEditinfoMenu(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine)  // Select Department To Edit It's Doctors Info.
{
	int choice = DepartmentMenu();
	while (choice != 4)
	{
		EditInfoHandler(Dentist, Dermatologist, intermedicine, choice);
		choice = DepartmentMenu();
	}
	return;
}

void DentistsSearch(vector<DentalDepartment>& Dentist)  // Search Dentists Info In Dental Department.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Search Dentists" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	string se;

	cout << "Please Enter SSN of Desired Dentist:";
	cin.ignore();
	getline(cin, se);
	bool found = false;

	for (size_t i = 0; i < Dentist.size(); i++)
	{
		if (Dentist[i].getssn() == se)
		{
			found = true;
			Dentist[i].displayinfo();
		}
	}
	if (!found)
	{
		system("cls");
		cout << "No Dentist With { ";
		SetConsoleTextAttribute(Colour, 0x4);
		cout << se;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << " } SSN Number Was Found!\a" << endl;
	}
	system("pause");
	return;
}


void DermatoligistSearch(vector<SkinDepartment>& Dermatologist)   // Search Dermatologists In Skin Department.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Search Dermatologist" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	string se;

	cout << "Please Enter SSN of Desired Dermatologist:";
	cin.ignore();
	getline(cin, se);

	bool found = false;
	for (size_t i = 0; i < Dermatologist.size(); i++)
	{
		if (Dermatologist[i].getssn() == se)
		{
			found = true;
			Dermatologist[i].displayinfo();
		}
	}

	if (!found)
	{
		system("cls");
		cout << "No Dermatologist With { ";
		SetConsoleTextAttribute(Colour, 0x4);
		cout << se;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << " } SSN Number Was Found!\a" << endl;
	}
	system("pause");
	return;
}

void intermedicineSearch(vector<internaldepartment>& intermedicine)  // Search Internal Medicines In Internal Department.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Search internalmedicines" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	string se;

	cout << "Please Enter SSN of Desired Dermatologist:";
	cin.ignore();
	getline(cin, se);
	bool found = false;

	for (size_t i = 0; i < intermedicine.size(); i++)
	{
		if (intermedicine[i].getssn() == se)
		{
			found = true;
			intermedicine[i].displayinfo();
		}
	}

	if (!found)
	{
		system("cls");
		cout << "No Internal Medicine With { ";
		SetConsoleTextAttribute(Colour, 0x4);
		cout << se;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << " } SSN Number Was Found!\a" << endl;
	}
	system("pause");
	return;
}

void DoctorsSearchHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int selected)  //Doctors Search Info Handler.
{
	switch (selected)
	{
	case 1:DentistsSearch(Dentist);
		break;
	case 2:DermatoligistSearch(Dermatologist);
		break;
	case 3:intermedicineSearch(intermedicine);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}

}

void DorctorsSearchBySSN(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine)  // Select Department To Search It's Doctors.
{
	int selected = DepartmentMenu();
	while (selected != 4)
	{
		DoctorsSearchHandler(Dentist, Dermatologist, intermedicine, selected);
		selected = DepartmentMenu();
	}
	return;
}


void DoctorsHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int select)  // Handler For Doctors Operation Menu.
{
	switch (select)
	{
	case 1:adddoctor(Dentist, Dermatologist, intermedicine);
		break;
	case 2:showinformation(Dentist, Dermatologist, intermedicine);
		break;
	case 3:DoctorsDeleteInfo(Dentist, Dermatologist, intermedicine);
		break;
	case 4:DoctorsEditinfoMenu(Dentist, Dermatologist, intermedicine);
		break;
	case 5:DorctorsSearchBySSN(Dentist, Dermatologist, intermedicine);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}


void DoctorsOperation(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine) // Select Desired Operation About Doctors.
{
	int select = OperationMenu();
	while (select != 6)
	{
		DoctorsHandler(Dentist, Dermatologist, intermedicine, select);
		select = OperationMenu();
	}
	return;
}

//******************************************************************************************************

// Patient functions starts below 

//******************************************************************************************************
int PatientMenu() //menu for Patients
{
	int n = 0;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t      Please Select The Desired Operation" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	cout << "\t\t\t\t         (1) >------> ADD Information:\n";
	cout << "\t\t\t\t         (2) >------> View Information:\n";
	cout << "\t\t\t\t         (3) >------> Delete Information:\n";
	cout << "\t\t\t\t         (4) >------> Edit Information:" << endl;
	cout << "\t\t\t\t         (5) >------> Search by SSN:" << endl;
	cout << "\t\t\t\t         (6) >------> Back To Main Menu." << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t       Please Select";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t   >>> ";
	cin >> n;
	return n;
}

void savePatientFile(vector<Patient>& patients)  // Save Patients Info In patient.txt
{
	system("cls");
	string patientFile = "patient.txt";
	ofstream fout(patientFile);
	if (fout)
	{
		for (size_t i = 0; i < patients.size(); i++)
		{
			fout << patients[i].getfname() << " ";
			fout << patients[i].getlname() << " ";
			fout << patients[i].getage() << " ";
			fout << patients[i].getssn() << " ";
			fout << patients[i].getPhoneNum() << " ";
			fout << patients[i].getcharacter() << " ";
			fout << patients[i].getdepartment() << " ";
			fout << patients[i].getFactorPrice() << " ";
			fout << patients[i].getReservedHour() << " ";
			fout << patients[i].getReservedMinute() << " ";
			fout << patients[i].getDoctorsName() << " ";
			fout << patients[i].getrgittime() << endl;
			/* fout << patients[i].getDoctorsVisit() << " "; */
		}
	}
	fout.close();
	return;
}

void ReadPatientinfo(vector<Patient>& patients)  // Read Patients Info From patient.txt
{
	string name, lnam, SSN, PHone, ch, dep, regitime, Dname;
	size_t Age = 0, h = 0, m = 0, factor = 0;
	string patientFile = "patient.txt";
	ifstream fin(patientFile);

	if (!fin)
	{
		char xo[] = "Patient's File Does Not Exist or Not Created Yet.\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(xo);
		SetConsoleTextAttribute(Colour, 0x7);
	}

	if (fin)
	{
		char c[] = "Patient's File Opened Successfully.\n";
		SetConsoleTextAttribute(Colour, 0xA);
		Write(c);
		SetConsoleTextAttribute(Colour, 0x7);
		Patient iTemp;
		while (fin >> name)
		{
			fin >> lnam >> Age >> SSN >> PHone >> ch >> dep >> factor >> h >> m >> Dname >> regitime;
			iTemp.setfname(name);
			iTemp.setlname(lnam);
			iTemp.setage(Age);
			iTemp.setssn(SSN);
			iTemp.setPhoneNum(PHone);
			iTemp.setcharacter(ch);
			iTemp.setdepartment(dep);
			iTemp.setFactorPrice(factor);
			iTemp.setReservedTime(h, m);
			iTemp.setDoctorsName(Dname);
			iTemp.setrgittime(regitime);
			patients.push_back(iTemp);
		}
	}
	fin.close();
	return;
}

void patientSearch(vector<Patient>& patients)  // Search Patients Info By SSN.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Search Patient " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	string Essn;
	bool searchHandler = false;

	cout << "Please Enter SSN of Desired Patient:";
	cin.ignore();
	getline(cin, Essn);

	for (size_t i = 0; i < patients.size(); i++)
	{
		if (patients[i].getssn() == Essn)
		{
			searchHandler = true;
			patients[i].displayinfo();
		}
	}
	if (!searchHandler)
	{
		system("cls");
		cout << "No Patient With { ";
		SetConsoleTextAttribute(Colour, 0x4);
		cout << Essn;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << " } SSN Number Was Found !\a " << endl;
	}
	system("pause");
	return;
}

void editPatientInfo(vector<Patient>& patients)  // Edit Patient Info.
{
	system("cls");
	string name, lnam, SSN, PHone, regitime;
	size_t Age = 0, h = 0, m = 0;
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Edit Patients Information " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	for (size_t i = 0; i < patients.size(); i++)
	{
		cout << i << ") ";
		patients[i].displayinfo();
	}
	cout << "Enter the number of the person you want: ";
	int choice = 0;
	cin >> choice;

	try
	{
		patients.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	Patient temp;
	temp = patients[choice];
	bool edit = true;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Possible Information for Edit " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	cout << "\t\t\t 1) Name: " << patients[choice].getfname() << endl;
	cout << "\t\t\t 2) Last Name: " << patients[choice].getlname() << endl;
	cout << "\t\t\t 3) Age: " << patients[choice].getage() << endl;
	cout << "\t\t\t 4) SSN: " << patients[choice].getssn() << endl;
	cout << "\t\t\t 5) Tel: " << patients[choice].getPhoneNum() << endl;
	cout << "\t\t\t-1) Exit. " << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t     Select The Item Number To Edit : ";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	while (edit)
	{
		int select = 0;
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 1:
			cout << "-> First Name: ";
			getline(cin, name);
			temp.setfname(name);
			break;
		case 2:
			cout << "-> Last Name: ";
			getline(cin, lnam);
			temp.setlname(lnam);
			break;
		case 3:
			cout << "-> Age: ";
			cin >> Age;
			temp.setage(Age);
			break;
		case 4:
			cout << "-> Social Security Number: ";
			getline(cin, SSN);
			temp.setssn(SSN);
			break;
		case 5:
			cout << "-> Phone Number: ";
			getline(cin, PHone);
			temp.setPhoneNum(PHone);
			break;
		case -1:
			edit = false;
			break;
		}
		system("cls");

		cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
		cout << "\t\t\t\t     Possible Information for Edit " << endl;
		cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

		cout << "\t\t\t 1) Name: " << temp.getfname() << endl;
		cout << "\t\t\t 2) Last Name: " << temp.getlname() << endl;
		cout << "\t\t\t 3) Age: " << temp.getage() << endl;
		cout << "\t\t\t 4) SSN: " << temp.getssn() << endl;
		cout << "\t\t\t 5) Tel: " << temp.getPhoneNum() << endl;
		cout << "\t\t\t-1) Exit." << endl;
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t     Select The Item Number To Edit : ";
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t\t\t >>> ";
	}

	patients.erase(patients.begin() + choice);
	patients.push_back(temp);
	savePatientFile(patients);
	return;
}

void deletePatientInfo(vector<Patient>& patients)   // Delete Patients Info.
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t     Delete Patients Information" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < patients.size(); i++)
	{
		cout << i << ")";
		patients[i].displayinfo();
	}

	int select = 0;
	cout << "Enter Number OF Person That You Want To Delete: ";
	cin >> select;

	try
	{
		patients.at(select);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	cout << "\nDo You Really Want To Delete {" << patients[select].getfname() << " " << patients[select].getlname() << " " << patients[select].getssn() << "}? (y/n)";

	char choose;
	cin >> choose;
	if (choose == 'y')
	{
		patients.erase(patients.begin() + select);
		savePatientFile(patients);
		SetConsoleTextAttribute(Colour, 0xA);
		cout << "information Deleted Successfully." << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	else
		return;
}

void showPatientInfo(vector<Patient>& patients) // Show all Patients Info.
{
	system("cls");
	char cc[] = "\n\n\n\n\n\t\t\t    Sorry, But we do not share our patients information...\n";
	Write(cc);
	system("pause>n");
	system("cls");
	char xD[] = "\n\n\n\n\n\t\t\t\t\t     Just kidding :)\n";
	Write(xD);
	system("pause>n");
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t Patients informations" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < patients.size(); i++)
	{
		cout << i << "):";
		patients[i].displayinfo();
	}
	system("pause");
	return;
}

void searchBetweenDentalDoctors(Patient& Ptemp, vector<DentalDepartment>& Dentist, vector<Patient>& patients) // Search For Availabe Dentists To Reserve.
{

	size_t hourChecker, minuteChecker;
	hourChecker = Ptemp.getReservedHour();
	minuteChecker = Ptemp.getReservedMinute();
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t   Available Doctors in Reserved Time" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	bool found = false;
	for (size_t i = 0; i < Dentist.size(); i++)
	{
		if (hourChecker >= Dentist[i].gethour() && hourChecker <= Dentist[i].getTohour() && minuteChecker <= Dentist[i].getTominute())
		{
			found = true;
			cout << i << ") ";
			Dentist[i].displayinfo();
		}
	}
	if (!found)
	{
		system("cls");
		char qwe[] = "Unfortunately There is No Dentist In this Time...\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(qwe);
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	int choice = 0;
	cout << "Select The Desired Dentist To Reseve: ";
	cin >> choice;

	try
	{
		Dentist.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}

	Ptemp.setDoctorsName(Dentist[choice].getlname());
	Ptemp.setFactorPrice(Dentist[choice].getvisitcash());
	system("cls");
	char x[] = "You Reserved Doctor: ";
	SetConsoleTextAttribute(Colour, 0xA);
	Write(x);
	SetConsoleTextAttribute(Colour, 0x7);
	cout << Dentist[choice].getlname() << endl;
	system("pause");
}

void searchBetweenDermatologistDoctors(Patient& Ptemp, vector<SkinDepartment>& Dermatologist, vector<Patient>& patients) // Search For Availabe Dermatologists To Reserve.
{
	size_t hourChecker, minuteChecker;
	hourChecker = Ptemp.getReservedHour();
	minuteChecker = Ptemp.getReservedMinute();
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t   Available Doctors in Reserved Time" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	bool found = false;
	for (size_t i = 0; i < Dermatologist.size(); i++)
	{
		if (hourChecker >= Dermatologist[i].gethour() && hourChecker <= Dermatologist[i].getTohour() && minuteChecker <= Dermatologist[i].getTominute())
		{
			found = true;
			cout << i << ") ";
			Dermatologist[i].displayinfo();
		}
	}
	if (!found)
	{
		system("cls");
		char qwe[] = "Unfortunately There is No Dermatologist In this Time...\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(qwe);
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}

	int choice = 0;
	cout << "Select The Desired Dermatologist To Reseve: ";
	cin >> choice;

	try
	{
		Dermatologist.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured -> \a" << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}

	Ptemp.setDoctorsName(Dermatologist[choice].getlname());
	Ptemp.setFactorPrice(Dermatologist[choice].getvisitcash());

	system("cls");
	char x[] = "You Reserved Doctor: ";
	SetConsoleTextAttribute(Colour, 0xA);
	Write(x);
	SetConsoleTextAttribute(Colour, 0x7);
	cout << Dermatologist[choice].getlname() << endl;
	system("pause");

}

void searchBetweenIntermedicineDoctors(Patient& Ptemp, vector<internaldepartment>& intermedicine, vector<Patient>& patients)   // Search For Available Internal Medicines To Reserve.
{
	size_t hourChecker, minuteChecker;
	hourChecker = Ptemp.getReservedHour();
	minuteChecker = Ptemp.getReservedMinute();
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t   Available Doctors in Reserved Time" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	bool found = false;
	for (size_t i = 0; i < intermedicine.size(); i++)
	{
		if (hourChecker >= intermedicine[i].gethour() && hourChecker <= intermedicine[i].getTohour() && minuteChecker <= intermedicine[i].getTominute())
		{
			found = true;
			cout << i << ") ";
			intermedicine[i].displayinfo();
		}
	}
	if (!found)
	{
		system("cls");
		char qwe[] = "Unfortunately There is No InternalMedicine In this Time...\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(qwe);
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}

	int choice = 0;
	cout << "Select The Desired InternalMedicine To Reseve: ";
	cin >> choice;

	Ptemp.setDoctorsName(intermedicine[choice].getlname());
	Ptemp.setFactorPrice(intermedicine[choice].getvisitcash());

	system("cls");
	char x[] = "You Reserved Doctor: ";
	SetConsoleTextAttribute(Colour, 0xA);
	Write(x);
	SetConsoleTextAttribute(Colour, 0x7);
	cout << intermedicine[choice].getlname() << endl;
	system("pause");
	return;
}


void patientsDoctors(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption, Patient& Ptemp)
{
	switch (selectedOption) // In This Function Depend On Selected Department (selectedOption) The Patient Gives his/her Desired Time To Reserve his/her Desired Available Doctor.
	{
	case 1:searchBetweenDentalDoctors(Ptemp, Dentist, patients);
		break;
	case 2:searchBetweenDermatologistDoctors(Ptemp, Dermatologist, patients);
		break;
	case 3:searchBetweenIntermedicineDoctors(Ptemp, intermedicine, patients);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

// The Function Below,  Is For Add New Patient.
void addDoctorsPatient(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption)
{
	system("cls");
	string name, lnam, SSN, PHone;
	size_t Age = 0, h = 0, m = 0;
	Patient Ptemp;

	switch (selectedOption) {
	case 1:
		Ptemp.setdepartment("Dental");
		break;
	case 2:
		Ptemp.setdepartment("Dermatology");
		break;
	case 3:
		Ptemp.setdepartment("InternalMedicine");
		break;
	}
	cout << "-> Desired Time: \nHour:";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
	while (true)
	{
		try
		{
			Ptemp.setReservedTime(h, m);
			break;
		}
		catch (invalid_argument& ex)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << ex.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "Hour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
		}
	}

	patientsDoctors(Dentist, Dermatologist, intermedicine, patients, selectedOption, Ptemp);

	if (Ptemp.getDoctorsName().length() == 0 && Ptemp.getDoctorsVisit().length() == 0)
	{
		return;
	}

	cout << "-> First Name: ";
	cin.ignore();
	getline(cin, name);
	Ptemp.setfname(name);

	cout << "-> Last Name: ";
	getline(cin, lnam);
	Ptemp.setlname(lnam);

	cout << "-> Age: ";
	cin >> Age;
	Ptemp.setage(Age);

	Ptemp.setcharacter("Patient");                    //This Setter Function Assigns By Default.    

	cout << "-> Social Security Number: ";
	cin.ignore();
	getline(cin, SSN);
	Ptemp.setssn(SSN);

	cout << "-> Phone Number: ";
	getline(cin, PHone);
	Ptemp.setPhoneNum(PHone);

	Ptemp.setrgittime(s());//Saves The Registering Time.
	patients.push_back(Ptemp);//Add New Dentist To vector
	savePatientFile(patients);//Save To File Auto.
	system("cls");
	SetConsoleTextAttribute(Colour, 0xA);
	cout << "Saved Successfully." << endl;
	SetConsoleTextAttribute(Colour, 0x7);
	system("pause");
	return;
}

void addHandlePatient(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption)
{
	switch (selectedOption)  // Add Patient Handler For Selected Department.
	{
	case 1:addDoctorsPatient(Dentist, Dermatologist, intermedicine, patients, selectedOption);
		break;
	case 2:addDoctorsPatient(Dentist, Dermatologist, intermedicine, patients, selectedOption);
		break;
	case 3:addDoctorsPatient(Dentist, Dermatologist, intermedicine, patients, selectedOption);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

void addPatient(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients) // Select Department For ADD Patient.
{
	int selectedOption = DepartmentMenu();
	while (selectedOption != 4)
	{
		addHandlePatient(Dentist, Dermatologist, intermedicine, patients, selectedOption);
		selectedOption = DepartmentMenu();
	}
	return;
}

void PatientHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption)
{

	switch (selectedOption) // Handler For Desired Operation About Patients.
	{
	case 1:addPatient(Dentist, Dermatologist, intermedicine, patients);
		break;
	case 2:showPatientInfo(patients);
		break;
	case 3:deletePatientInfo(patients);
		break;
	case 4:editPatientInfo(patients);
		break;
	case 5:patientSearch(patients);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

void PatientOperation(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients)
{
	int selectedOption = PatientMenu();  // Select Desired Operation About Patients.
	while (selectedOption != 6)
	{
		PatientHandler(Dentist, Dermatologist, intermedicine, patients, selectedOption);
		selectedOption = OperationMenu();
	}
	return;
}

//******************************************************************************************************

//     Nurse Functions Starts From Below...

//******************************************************************************************************

void SaveNursesToFile(vector<Nurses>& Nurse)
{
	system("cls");
	string NursesFile = "Nurses.txt";
	ofstream fout(NursesFile);
	if (fout)
	{
		for (size_t i = 0; i < Nurse.size(); i++)
		{
			fout << Nurse[i].getfname() << " ";
			fout << Nurse[i].getlname() << " ";
			fout << Nurse[i].getage() << "  ";
			fout << Nurse[i].getssn() << "  ";
			fout << Nurse[i].getphone() << "  ";
			fout << Nurse[i].getcharacter() << " ";
			fout << Nurse[i].getdepartment() << " ";
			fout << Nurse[i].gethour() << " ";
			fout << Nurse[i].getminute() << " ";
			fout << Nurse[i].getTohour() << " ";
			fout << Nurse[i].getTominute() << " ";
			fout << Nurse[i].getrgittime() << endl;

		}
	}
	fout.close();
	return;

}

void ReadNursesInfo(vector<Nurses>& Nurse)
{
	string name, lnam, SSN, PHone, ch, dep, regitime;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0;
	string NursesFile = "Nurses.txt";
	ifstream fin(NursesFile);

	if (!fin)
	{

		char error[] = "Nurses's File Does Not Exist or Not Created Yet.\a\n";
		SetConsoleTextAttribute(Colour, 0x4);
		Write(error);
		SetConsoleTextAttribute(Colour, 0x7);
		return;
	}

	if (fin)
	{
		char payam[] = "Nurses's File Opened Successfully.\n";
		SetConsoleTextAttribute(Colour, 0xA);
		Write(payam);
		SetConsoleTextAttribute(Colour, 0x7);
		Nurses Ntemp;
		while (fin >> name)
		{
			fin >> lnam >> Age >> SSN >> PHone >> ch >> dep >> h >> m >> Th >> Tm >> regitime;
			Ntemp.setfname(name);
			Ntemp.setlname(lnam);
			Ntemp.setage(Age);
			Ntemp.setssn(SSN);
			Ntemp.setphone(PHone);
			Ntemp.setcharacter(ch);
			Ntemp.setdepartment(dep);
			Ntemp.setTimeShift(h, m);
			Ntemp.setToTimeShift(Th, Tm);
			Ntemp.setrgittime(regitime);
			Nurse.push_back(Ntemp);
		}
	}
	fin.close();
	return;
}

void DeleteNursesInfo(vector<Nurses>& Nurse)
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t     Delete Nurses Information" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl;
	for (size_t i = 0; i < Nurse.size(); i++)
	{
		cout << i << ")";
		Nurse[i].displayinfo();
	}

	int select = 0;
	cout << "Enter Number OF Person That You Want To Delete: ";
	cin >> select;

	try
	{
		Nurse.at(select);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	cout << "\nDo You Really Want To Delete {" << Nurse[select].getfname() << " " << Nurse[select].getlname() << " " << Nurse[select].getssn() << "}? (y/n)";

	char choose;
	cin >> choose;
	if (choose == 'y')
	{
		Nurse.erase(Nurse.begin() + select);
		SaveNursesToFile(Nurse);
		SetConsoleTextAttribute(Colour, 0xA);
		cout << "information Deleted Successfully." << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	else
		return;
}

void EditNursesInfo(vector<Nurses>& Nurse)
{
	system("cls");
	string name, lnam, SSN, PHone, regitime;
	size_t Age = 0, h = 0, m = 0;
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Edit Nurses Information " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	for (size_t i = 0; i < Nurse.size(); i++)
	{
		cout << i << ") ";
		Nurse[i].displayinfo();
	}
	cout << "Enter the number of the person you want: ";
	int choice = 0;
	cin >> choice;

	try
	{
		Nurse.at(choice);
	}
	catch (out_of_range& ex)
	{
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Exception Occured ->\a " << ex.what() << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		return;
	}
	Nurses temp;
	temp = Nurse[choice];
	bool edit = true;
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t     Possible Information for Edit " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

	cout << "\t\t\t 1) Name: " << Nurse[choice].getfname() << endl;
	cout << "\t\t\t 2) Last Name: " << Nurse[choice].getlname() << endl;
	cout << "\t\t\t 3) Age: " << Nurse[choice].getage() << endl;
	cout << "\t\t\t 4) SSN: " << Nurse[choice].getssn() << endl;
	cout << "\t\t\t 5) Tel: " << Nurse[choice].getphone() << endl;
	cout << "\t\t\t-1) Exit. " << endl;
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t     Select The Item Number To Edit : ";
	cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
	cout << "\t\t\t\t\t\t >>> ";
	while (edit)
	{
		int select = 0;
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 1:
			cout << "-> First Name: ";
			getline(cin, name);
			temp.setfname(name);
			break;
		case 2:
			cout << "-> Last Name: ";
			getline(cin, lnam);
			temp.setlname(lnam);
			break;
		case 3:
			cout << "-> Age: ";
			cin >> Age;
			temp.setage(Age);
			break;
		case 4:
			cout << "-> Social Security Number: ";
			getline(cin, SSN);
			temp.setssn(SSN);
			break;
		case 5:
			cout << "-> Phone Number: ";
			getline(cin, PHone);
			temp.setphone(PHone);
			break;
		case -1:
			edit = false;
			break;
		}
		system("cls");

		cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
		cout << "\t\t\t\t     Possible Information for Edit " << endl;
		cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;

		cout << "\t\t\t 1) Name: " << temp.getfname() << endl;
		cout << "\t\t\t 2) Last Name: " << temp.getlname() << endl;
		cout << "\t\t\t 3) Age: " << temp.getage() << endl;
		cout << "\t\t\t 4) SSN: " << temp.getssn() << endl;
		cout << "\t\t\t 5) Tel: " << temp.getphone() << endl;
		cout << "\t\t\t-1) Exit." << endl;
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t     Select The Item Number To Edit : ";
		cout << "\n\n\t\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		cout << "\t\t\t\t\t\t >>> ";
	}

	Nurse.erase(Nurse.begin() + choice);
	Nurse.push_back(temp);
	SaveNursesToFile(Nurse);
	return;
}

void SearchNursesInfo(vector<Nurses>& Nurse)
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Search Nurses " << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	string Nssn;
	bool found = false;

	cout << "Please Enter SSN of Desired Patient:";
	cin.ignore();
	getline(cin, Nssn);

	for (size_t i = 0; i < Nurse.size(); i++)
	{
		if (Nurse[i].getssn() == Nssn)
		{
			found = true;
			Nurse[i].displayinfo();
		}
	}
	if (!found)
	{
		system("cls");
		cout << "No Nurse With { ";
		SetConsoleTextAttribute(Colour, 0x4);
		cout << Nssn;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << " } SSN Number Was Found !\a " << endl;
	}
	system("pause");
	return;
}

void ShowNurseInfo(vector<Nurses>& Nurse)
{
	system("cls");
	cout << "\t\t\t" << char(201) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(187) << endl;
	cout << "\t\t\t\t\t    Nurses informations" << endl;
	cout << "\t\t\t" << char(200) << "ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ" << char(188) << endl << endl;
	for (size_t i = 0; i < Nurse.size(); i++)
	{
		cout << i << ") ";
		Nurse[i].displayinfo();
	}
	system("pause");
	return;
}

void addNurseinfo(vector<Nurses>& Nurse, int selectedOption)
{
	system("cls");
	string name, lnam, SSN, PHone;
	size_t Age = 0, h = 0, m = 0, Tm = 0, Th = 0;

	Nurses Ntemp;

	cout << "-> First Name: ";
	cin.ignore();
	getline(cin, name);
	Ntemp.setfname(name);

	cout << "-> Last Name: ";
	getline(cin, lnam);
	Ntemp.setlname(lnam);

	cout << "-> Age: ";
	cin >> Age;
	Ntemp.setage(Age);

	Ntemp.setcharacter("Nurse");               //This Setter Function Assigens By Default.    

	switch (selectedOption)
	{
	case 1:Ntemp.setdepartment("Dental");
		break;
	case 2:Ntemp.setdepartment("Dermatology");
		break;
	case 3:Ntemp.setdepartment("internalMedicine");
		break;
	}

	cout << "-> Social Security Number: ";
	cin.ignore();
	getline(cin, SSN);
	Ntemp.setssn(SSN);

	cout << "-> Phone Number: ";
	getline(cin, PHone);
	Ntemp.setphone(PHone);

	cout << "-> Shift Time: \nHour:";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
	while (true)
	{
		try
		{
			Ntemp.setTimeShift(h, m);
			break;
		}
		catch (invalid_argument& ex)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << ex.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "Hour:";
			cin >> h;
			cout << "Minute: ";
			cin >> m;
		}
	}
	cout << "\nTo Hour: ";
	cin >> Th;
	cout << "Minute: ";
	cin >> Tm;
	while (true)
	{
		try
		{
			Ntemp.setToTimeShift(Th, Tm);
			break;
		}
		catch (invalid_argument& e)
		{
			SetConsoleTextAttribute(Colour, 0x4);
			cout << "Exception ->" << e.what() << endl;
			SetConsoleTextAttribute(Colour, 0x7);
			cout << "\nTo Hour: ";
			cin >> Th;
			cout << "Minute: ";
			cin >> Tm;
		}
	}
	Ntemp.setrgittime(s());//Saves The Registering Time.
	Nurse.push_back(Ntemp);//Add New Dentist To vector
	SaveNursesToFile(Nurse);//Save To File Auto.
	system("cls");
	SetConsoleTextAttribute(Colour, 0xA);
	cout << "Saved Successfully." << endl;
	SetConsoleTextAttribute(Colour, 0x7);
	system("pause");
	return;
}
void addHandleNurse(vector<Nurses>& Nurse, int selectedOption)
{
	switch (selectedOption)  // Add Patient Handler For Selected Department.
	{
	case 1:addNurseinfo(Nurse, selectedOption);
		break;
	case 2:addNurseinfo(Nurse, selectedOption);
		break;
	case 3:addNurseinfo(Nurse, selectedOption);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

void addnurse(vector<Nurses>& Nurse)
{
	int selectedOption = DepartmentMenu();
	while (selectedOption != 4)
	{
		addHandleNurse(Nurse, selectedOption);
		selectedOption = DepartmentMenu();
	}
	return;
}


void NurseHandler(vector<Nurses>& Nurse, int pick)
{
	switch (pick)
	{
	case 1:addnurse(Nurse);
		break;
	case 2:ShowNurseInfo(Nurse);
		break;
	case 3:DeleteNursesInfo(Nurse);
		break;
	case 4:EditNursesInfo(Nurse);
		break;
	case 5:SearchNursesInfo(Nurse);
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}

void NursesOperation(vector<Nurses>& Nurse)
{
	int pick = OperationMenu();
	while (pick != 6)
	{
		NurseHandler(Nurse, pick);
		pick = OperationMenu();
	}
	return;
}

void Random_Sentences()
{
	system("cls");
	srand((unsigned int)time(0));
	int x = 1 + rand() % 4;
	switch (x)
	{
	case 1:
		cout << "\n\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		SetConsoleTextAttribute(Colour, 0xB);
		cout << "\n\t\t    Stay Home Save Lives...\n" << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << "\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		break;
	case 2:
		cout << "\n\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		SetConsoleTextAttribute(Colour, 0x9);
		cout << "\n\t\t  Spend More Times Doing The Things You Love...\n" << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << "\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		break;
	case 3:
		cout << "\n\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		SetConsoleTextAttribute(Colour, 0x6);
		cout << "\n\t\t\t Clear Your Mind...\n" << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << "\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		break;
	case 4:
		cout << "\n\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		SetConsoleTextAttribute(Colour, 0xA);
		cout << "\n\t\t    Stay In The Moment...\n" << endl;
		SetConsoleTextAttribute(Colour, 0x7);
		cout << "\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
		break;
	default:
		break;
	}
}

void mainhandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& Patient, vector<Nurses>& Nurse, int selector)
{
	switch (selector)   ///                                       Handler Of Programm's Main Menu
	{
	case 1:DoctorsOperation(Dentist, Dermatologist, intermedicine);
		break;
	case 2:NursesOperation(Nurse);
		break;
	case 3:PatientOperation(Dentist, Dermatologist, intermedicine, Patient);
		break;
	case 4:About();
		break;
	default:
		system("cls");
		SetConsoleTextAttribute(Colour, 0x4);
		cout << "Invalid!\a\nCommand Not Recognized!\n";
		SetConsoleTextAttribute(Colour, 0x7);
		system("pause");
		break;
	}
}