#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//General object practice

/*class Test1
{
public:
	
	Test1(int account1, float serial1, double d)
	{
		cout << account1 << endl << serial1 << endl << d << endl;
	}
	~Test1()
	{
		cout << "This is a destructor" << endl;
	}

	void getAccount1();

private:
	int account1;
	float serial1;
	string name1;
	double d;
};*/


//"const" object practice

/*class Const
{
public:

	int const1();
	int const2() const;

	void const3() const;

	//~Const();

private:
};*/


//Member initialization practice

/*class Member
{
public:

	Member(int a, int b);
	void print();

private:

	int reg;
	const int constreg;

};

class Member2
{
public:
	Member2(float c, float d );
	void print();
private:
	float reg;
	const float regconst;

};*/


//Composition practice

/*class Birthday
{
public:
	Birthday(int m, int d, int y);

	Birthday();

	void printDate();

private:
	int month;
	int day;
	int year;
};*/

#endif