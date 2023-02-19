#ifndef RABBIT_H
#define RABBIT_H
#include <iostream>
#include <string>

using namespace std;

class Rabbit
{
public:
	Rabbit();

	void setName(char* _name);

	void printName();

	//friend ostream& operator<<(ostream& out, const Rabbit r);

	friend istream& operator>>(istream& in, Rabbit &r);
	
	operator char*() const;
	
private:
	string name;
};

//ostream& operator<<(ostream& out, const Rabbit r);
istream& operator>>(istream& in, Rabbit &r);

#endif