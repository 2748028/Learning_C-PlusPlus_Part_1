#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* for (int i = 0; i < 5; i++)
	{
		cout << "i is: " << i << endl;

		if (i == 3)
		{
			break;
		}
		cout << "Looping ..." << endl;
	}

	cout << "Program quitting ..." << endl; */ //Loop with "Break" command.

	/*
	for (int i = 0; i < 5; i++)
	{
		cout << "i is: " << i << endl;

		if (i == 3)
		{
			continue;
		}
		cout << "Looping ..." << endl;
	}

	cout << "Program quitting ..." << endl; */ //Lopp with "Continue" Command.

	const string password = "hello";

	string input;

	do
	{
		cout << "Please, enter your password> " << flush;
		cin >> input;

		if (input == password)
		{
			break;
		}
		else 
		{
			cout << "Access is denied." << endl;
		}
	} while (true);

	cout << "Password accepted" << endl;

	cout << "Program quitting ..." << endl;

	return 0;
}