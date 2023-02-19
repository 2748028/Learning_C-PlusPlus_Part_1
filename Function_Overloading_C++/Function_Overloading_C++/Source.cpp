#include <iostream>
#include <string>
using namespace std;

void printNumber(int x)
{
	cout << "Now I am printing a Integer: " << x << endl;
}

void printNumber(float x)
{
	cout << "Now I am printing a Float: " << x << endl;
}

void printNumber(double x)
{
	cout << "Now I am printing a Double: " << x << endl;
}

void printNumber(long double x)
{
	cout << "Now I am printing a Long Double: " << x << endl;
}

int main()
{
	int a;
	float b;
	double c;

	cout << "Hello User!" << endl;
	cout << "Please enter a Integer: ";
	cin >> a;
	cout << "Please enter a float: ";
	cin >> b;
	cout << "Please enter a double: ";
	cin >> c;

	cout << "Option 1: " << a << " " << "Option 2: " << b << " " << "Option 3: " << c << endl;

	int datatype;
	
	cout << "Please select a data type to print to the screen *Case Sensitive*: " << endl;
	cin >> datatype;
	
	switch (datatype)
	{
		case 1:
		printNumber(a);
		break;

		case 2:
		printNumber(b);
		break;

		case 3:
		printNumber(c);
		break;

		default:
			cout << "Improper selection" << endl;
	}

	return 0;
}