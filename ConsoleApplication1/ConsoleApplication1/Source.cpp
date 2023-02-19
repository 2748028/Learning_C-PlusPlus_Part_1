#include <iostream>

using namespace std;

int main()
{
class Person{
public:
	Person(string n, int year) : name(n), yearOfBirth(year){}
	string getName();
	friend ostream& operator <<(ostream&, const Person&);
private:
	string name; int yearOfBirth;
};