#include "Rabbit.h"

Rabbit::Rabbit()
{

}

void Rabbit::setName(char* _name)
{
	name = _name;
}

void Rabbit::printName()
{
	cout << name;
}
/*
ostream& operator<<(ostream& out, const Rabbit r)
{
	out << r.name;
	return out;
}
*/
istream& operator>>(istream& in, Rabbit &r)
{
	in >> r.name;
	return in;
}

Rabbit::operator char*() const
{
	return (char*)name.c_str();
}