#pragma once
#include"Parent.h"
#include"DentalDepartment.h"
#include"SkinDepartment.h"
#include"EntDepartment.h"
#include"Patient.h"
#include"Nurses.h"



//                                   <Summary>

string s();// Show System Date & Time. 
void Write(char c[]); // Write Charcters.
void About();// About Developers Group
int mainmenu();//Main Menu Out Put
int DepartmentMenu();// Department Menu That We Almost Use it For Any Operation.
int OperationMenu();// Menu For Desired Operations.
void savedentiststofile(vector<DentalDepartment>& Dentist);// Save Dentists info to dentist.txt
void saveDermatologiststofile(vector<SkinDepartment>& Dermatologist);// Save Dermatologists info To Dermatologists.txt
void saveInternalMedicinesTofile(vector<internaldepartment>& intermedicine);// Save Internal medicines info to intermedicine.txt
void ReadDentistsinfo(vector<DentalDepartment>& Dentist);// Read Dentists Info From Dentists.txt
void ReadDermatologistsinfo(vector<SkinDepartment>& Dermatologist);// Read Dermatologists Info From Dermatologists.txt
void ReadInternalmedicineinfo(vector<internaldepartment>& intermedicine); // Read Internal Medicines Info From intermedicine.txt
void Detistadd(vector<DentalDepartment>& Dentist);// ADD New Dentist To Dental Department.
void Dermatologistadd(vector<SkinDepartment>& Dermatologist);// ADD New Dermatologist To Skin Department.
void intermedicadd(vector<internaldepartment>& intermedicine);//ADD New Internal Medicine To InternalDepartment.
void showDentists(vector<DentalDepartment>& Dentist); //  This Function Shows Dentists Personal Info.
void showDermatologists(vector<SkinDepartment>& Dermatologist); // This Function Shows Dermatologists Info.
void showintermedicine(vector<internaldepartment>& intermedicine);// This Function Shows Internal Medicines Info.
void showinformationhandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int sele);// Show Doctors info Handler.
void showinformation(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine);// Select Department to Show It's Doctors Info.
void addhandle(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int selec);// Add Doctors Handler.
void adddoctor(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine);// Select Department To ADD it's Doctors.
void DeleteDentistsInfo(vector<DentalDepartment>& Dentist);// Delete Dentits info From Dental Department.
void DeleteDermatologistsInfo(vector<SkinDepartment>& Dermatologist);// Delete Dermatologists info From Skin Department.
void DeleteInternalMedicinesInfo(vector<internaldepartment>& intermedicine); // Delete Internal Medicines Info From Internal Department.
void DeleteInfoHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int choose);// Doctors Delete Info Handler.
void DoctorsDeleteInfo(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine); //Select Department To Delete It's Doctors.
void DentistEditInfo(vector<DentalDepartment>& Dentist);// Edit Dentists Info Dental Department.
void DermatologistEditInfo(vector<SkinDepartment>& Dermatologist);// Edit Dermatologists Info Skin Department.
void internalMedicineEditInfo(vector<internaldepartment>& intermedicine);// Edit Internal Medicines Info Internal Department.
void EditInfoHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int choice);// Doctors Edit Info Handler.
void DoctorsEditinfoMenu(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine);// Select Department To Edit It's Doctors Info.
void DentistsSearch(vector<DentalDepartment>& Dentist);// Search Dentists Info In Dental Department.
void DermatoligistSearch(vector<SkinDepartment>& Dermatologist); // Search Dermatologists In Skin Department.
void intermedicineSearch(vector<internaldepartment>& intermedicine);// Search Internal Medicines In Internal Department.
void DoctorsSearchHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int selected);//Doctors Search Info Handler.
void DorctorsSearchBySSN(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine); // Select Department To Search It's Doctors.
void DoctorsHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, int select);// Handler For Doctors Operation Menu.
void DoctorsOperation(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine); // Select Desired Operation About Doctors.
int PatientMenu();//menu for Patients
void savePatientFile(vector<Patient>& patients);// Save Patients Info In patient.txt
void ReadPatientinfo(vector<Patient>& patients); // Read Patients Info From patient.txt
void patientSearch(vector<Patient>& patients);// Search Patients Info By SSN.
void editPatientInfo(vector<Patient>& patients);// Edit Patient Info.
void deletePatientInfo(vector<Patient>& patients);// Delete Patients Info.
void showPatientInfo(vector<Patient>& patients); // Show all Patients Info.
void searchBetweenDentalDoctors(Patient& Ptemp, vector<DentalDepartment>& Dentist, vector<Patient>& patients);// Search For Availabe Dentists To Reserve.
void searchBetweenDermatologistDoctors(Patient& Ptemp, vector<SkinDepartment>& Dermatologist, vector<Patient>& patients);// Search For Availabe Dermatologists To Reserve.
void searchBetweenIntermedicineDoctors(Patient& Ptemp, vector<internaldepartment>& intermedicine, vector<Patient>& patients);// Search For Available Internal Medicines To Reserve.
void patientsDoctors(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption, Patient& Ptemp);//Find and Select Desired Department To Choose Doctors On Desired Time
void addDoctorsPatient(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption);// Add New Patient.
void addHandlePatient(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption);// Add Patient Handler For Selected Department.
void addPatient(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients);// Select Department For ADD Patient.
void PatientHandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients, int selectedOption);// Handler For Desired Operation About Patients.
void PatientOperation(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& patients);// Select Desired Operation About Patients.


void SaveNursesToFile(vector<Nurses>& Nurse);
void ShowNurseInfo(vector<Nurses>& Nurse);
void ReadNursesInfo(vector<Nurses>& Nurse);
void DeleteNursesInfo(vector<Nurses>& Nurse);
void EditNursesInfo(vector<Nurses>& Nurse);
void SearchNursesInfo(vector<Nurses>& Nurse);
void addNurseinfo(vector<Nurses>& Nurse, int selectedOption);
void addHandleNurse(vector<Nurses>& Nurse, int selectedOption);
void addnurse(vector<Nurses>& Nurse);
void NurseHandler(vector<Nurses>& Nurse, int pick);// Handler For Desired Operation About Nurses.
void NursesOperation(vector<Nurses>& Nurse);// Select Desired Operation About Nurses.

void Random_Sentences();
void mainhandler(vector<DentalDepartment>& Dentist, vector<SkinDepartment>& Dermatologist, vector<internaldepartment>& intermedicine, vector<Patient>& Patient, vector<Nurses>& Nurse, int selector);// Handler Of Programm's Main Menu