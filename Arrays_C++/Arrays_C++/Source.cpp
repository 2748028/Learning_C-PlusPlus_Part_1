#include <iostream>
#include <string>

using namespace std;

int main()
{	//Array of integers.
	cout << "Array of integers." << endl;
	cout << "==================" << endl;

	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	//cout << "Improper entry: " << values[3] << endl;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	
	cout << endl << "Array of doubles." << endl;
	cout << "==================" << endl;

	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	//cout << numbers[0] << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "Element at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values." << endl;
	cout << endl << "==============================" << endl;

	int numberArray[8] = {};
	for (int i = 0; i < 8; i++)
	{
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
	}

	//Array of strings.

	cout << endl << "Initializing with strings." << endl;
	cout << endl << "==========================" << endl;

	string texts[] = { "Apple", "Bannana", "Orange" };
	for (int i = 0; i < 3; i++)
	{
		cout << "Element at index " << i << ": " << texts[i] << endl;
	}

	return 0;
}