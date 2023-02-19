#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool aValue = true;
	cout << aValue << endl;

	char bValue = 'g';
	cout << bValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t cValue = 'i';
	cout << (char)cValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	char zValue = 'g';
	cout << zValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	bool eValue = false; 
	cout << eValue << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;

	bool fValue = true;
	cout << fValue << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;

	bool gValue = true;
	cout << gValue << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;

	return 0;
}