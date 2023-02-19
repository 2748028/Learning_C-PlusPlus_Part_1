#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string password = "hello";

	//cout << "Please, enter your password: " << endl;

	string input;

	do 
	{
		cout << "Please, enter your password: " << endl;
		cin >> input;
		if (input != password) 
		{
			cout << "Access denied." << endl;
		}
		
	} while (input != password);

	/* if (input == password)
	{
		cout << "Password accepted!" << endl;
	}
	else 
	{
		cout << "Access denied" << endl;
	} */

	/* while(input != password)
	{
		cout << "Access denied" << endl;

		cout << "Please, enter your password> " << flush;
		cin >> input;
	} */

	cout << "Password accepted!" << endl;

	/* int value = 7;

	do {
		cout << "Hello" << endl;
	} while (value < 5); */

	return 0;
}