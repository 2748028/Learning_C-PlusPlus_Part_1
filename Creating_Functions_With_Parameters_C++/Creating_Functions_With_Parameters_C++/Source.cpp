#include <iostream>
#include <string>
using namespace std;

void printInfo(int x)
{
	cout << "My favorite number is: " << x << endl;
}

/*void printName(string x)
{
	cout << "My name is: " << x << endl;
}*/

void printBalance(float x)
{
	cout << "My bank account balance is: " << x << endl;
}

int main()
{
	printInfo(333);
	
	//printName(dean);

	printBalance(9999.99);

	return 0;
}