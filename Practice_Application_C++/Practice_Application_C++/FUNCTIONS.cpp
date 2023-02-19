#include "CLASS.h"

//Set functions
void Record::setname(string name1)
{
	;
}

void Record::setidNum(float idNum1)
{
	cin >> idNum1;
}

void Record::setgpa(float gpa1)
{
	cin >> gpa1;
}

//Get functions
string Record::getname(string name2)
{
	cin >> name2;
	return name2;
}

float Record::getidNum(float getidNum2)
{
	cin >> getidNum2;
	return getidNum2;
}

float Record::getgpa(float getgpa2)
{
	cin >> getgpa2;
	return getgpa2;
}

//Display function
void Record::displayAccount()
{
	cout << " Account name is: " << name << endl;
	cout << " Account ID number is: " << idNum << endl;
	cout << " Account recorded GPA is: " << gpa << endl;
}

//Un-needed function
void Record::thomas()
{
	cout << "Thomas should really buy me a soda" << endl;
}


