#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include "Birthday.h"
#include <iostream>

using namespace std;

class People2
{
public:
	People2(string x, Birthday2 bo);
	void printInfo();
	People2::People2();
private:
	string name;
	Birthday2 dateOfBirth;
};
/*class People
{
public:
	People(string x, Birthday bo);
    void printInfo();

private:
	string name;
	Birthday dateOfBirth;

};*/

#endif