//Created by Zeinab Joudaki
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main()
{
	Student S1, S2, S3(19, "Mary", 'F', 3.8);

	int age_; 
	double gpa_; 
	string name_; 
	char gender_;

	cout << "Enter name" << endl; 
	cin >> name_;
	cout << "Enter age" << endl; 
	cin >> age_;
	cout << "Enter gender" << endl; 
	cin >> gender_;
	cout << "Enter gpa" << endl; 
	cin >> gpa_;

	S2.setStudent(age_, name_, gender_, gpa_);
	S1.print();
	S2.print();
	S3.print();
	cout << "The number of students is: " << Student::returnCount() << endl;
	system("pause");

}