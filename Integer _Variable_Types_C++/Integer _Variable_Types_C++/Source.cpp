#include <iostream>
#include <string>
#include <limits> //If it does not compile check to see if this is valid//
//Big integer libraries
using namespace std;

int main()
{
	int value = -54656;
	cout << value << endl;

	cout << "Max int value: "<< INT_MAX << endl; 
	cout << "Min int value : "<< INT_MIN << endl;

	long int lValue = 2345345;
	cout << lValue << endl;

	short int sValue = 2343;
	cout << lValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue = 2342343;
	cout << uValue << endl;

	return 0;
}