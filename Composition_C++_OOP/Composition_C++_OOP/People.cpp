#include "People.h"

People2::People2(string x, Birthday2 bo) : name (x), dateOfBirth (bo)
{
}

void People2::printInfo()
{
	cout << name << " Was born on: ";
	dateOfBirth.printDate();
};

/*People::People(string x, Birthday bo) : name (x), dateOfBirth (bo)
{
}

void People::printInfo()
{
	cout << name << " Was born on: ";
	dateOfBirth.printDate();
};*/
