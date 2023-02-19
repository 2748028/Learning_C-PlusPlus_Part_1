#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
public:
	Student();
	
	Student(int Age, string Name, char Gender, double GPA);
	
	int getAge();
	double getGPA();
	char getGender();
	string getName();
	
	void setStudent(int Age, string Name, char Gender, double GPA);
	void print();
	void updateCount();
	static int returnCount();

private:
	int age;
	string name;
	char gender;
	double gpa;
	static int count;

};
#endif