#include"Header.h"


int main()
{
	vector<DentalDepartment>Dentist;
	vector<SkinDepartment>Dermatologist;//Skin Doctor.
	vector<internaldepartment>intermedicine;
	vector<Patient>Patient;
	vector<Nurses>Nurse;

	ReadDentistsinfo(Dentist);
	ReadDermatologistsinfo(Dermatologist);
	ReadInternalmedicineinfo(intermedicine);
	ReadNursesInfo(Nurse);
	ReadPatientinfo(Patient);

	system("pause");
	int selector = mainmenu();
	while (selector != 5)
	{
		mainhandler(Dentist, Dermatologist, intermedicine, Patient, Nurse, selector);
		selector = mainmenu();
	}
	Random_Sentences();
	return 0;
}