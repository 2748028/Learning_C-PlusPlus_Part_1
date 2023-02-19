#include "Student.h"
#include <iostream>

Student::Student(int id, float gpa)
{
	ID = id;
	GPA = gpa;
}

Student::~Student()
{

}

int Student::getID()
{
	return ID;
}

float Student::getGPA()
{
	return GPA;
}

void Student::setID(int id)
{
	ID = id;
}

void Student::setGPA(float gpa)
{
	GPA = gpa;
}

void Student::print()
{
	cout << "ID: " << ID << endl;
	cout << "GPA: " << GPA << endl;
}