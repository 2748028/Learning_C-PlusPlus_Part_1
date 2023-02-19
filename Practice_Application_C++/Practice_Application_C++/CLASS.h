#include <string>
#include <iostream>
#ifndef CLASS_H
#define CLASS_H

using namespace std;

class Record
{
public:
	//Set functions
	static void setname(string name1);
	static void setidNum(float idNum1);
	static void setgpa(float gpa1);

	//Get functions
	string getname(string name2);
	float getidNum(float getidNum2);
	float getgpa(float getgpa2);

	//Display function
	void displayAccount();

	//Un-needed function
	static void thomas();

private:
	string name;
	float idNum;
	float gpa;
};
#endif