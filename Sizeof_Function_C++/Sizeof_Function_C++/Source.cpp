#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a;
	cout << "Character" << " " << sizeof(a) << endl;
	int b;
	cout << "Integer" << " " << sizeof(b) << endl;
	double c;
	cout << "Double Integer" << " " << sizeof(c) << endl;
	string Hello;
	cout << "String 1" << " " << sizeof(Hello) << endl;
	string Thisisalonglineofcharacters;
	cout << "String 2" << " " << sizeof(Thisisalonglineofcharacters) << endl;

	double array1[10];
	cout << sizeof(array1) << endl;

	cout << sizeof(array1) / sizeof(array1[0]) << endl;

	double array2[100][100];
	cout << sizeof(array2) << endl;

	cout << sizeof(array2) / sizeof(array2[0][0]) << endl;

	return 0;
}