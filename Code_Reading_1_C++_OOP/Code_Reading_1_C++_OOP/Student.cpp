#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int Student::count = 0;
Student::Student() :age(0), gpa(0), name(""), gender(' '){}
Student::Student(int Age, string Name, char Gender, double GPA)
{
	this->age = Age; //age = Age;
	this->gender = Gender;//gender = Gender
	this->gpa = GPA;//gpa = GPA
	this->name = Name; //name = Name
	updateCount();
}
int Student::getAge(){ return age; }
double Student::getGPA(){ return gpa; }
char Student::getGender(){ return gender; }
string Student::getName(){ return name; }
void Student::setStudent(int Age, string Name, char Gender, double GPA)
{
	this->age = Age; //age = Age;
	this->gender = Gender;//gender = Gender
	this->gpa = GPA;//gpa = GPA
	this->name = Name; //name = Name
	updateCount();
}
void Student::print()
{
	cout << "The name is: " << name << endl;
	cout << "The age is: " << age << endl;
	cout << "The gender is: " << gender << endl;
	cout << "The gpa is: " << gpa << endl;
	cout << "*********************" << endl;
}
void Student::updateCount(){ count++; }
int Student::returnCount(){ return count; }