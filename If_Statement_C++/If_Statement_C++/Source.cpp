#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
	string password = "hello";
	cout << "Enter your password > " << flush;
	
	string input;
	cin >> input;

	if (input == password)
	{
		cout << "Password accepted." << endl;
	}

	if (input != password)
	{
		cout << "Access denied." << endl;
	}

	return 0;
}*/

int main()
{
	string password = "hello";
	cout << "Enter your password: " << endl;

	string input;
	cin >> input;

	if (input == password)
	{
		cout << "Access granted:" << endl;
	}
	if (input != password)
	{
		cout << "Access is denied: " << endl;
	}

	return 0;
}