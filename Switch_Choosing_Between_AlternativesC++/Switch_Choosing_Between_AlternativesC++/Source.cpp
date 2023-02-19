#include <iostream>

using namespace std;

int main()
{
	const int value = 5;

	switch (value) 
	{
	case 4: //Do not use case variables here.
		cout << "The value is 4." << endl;
		break;
	case 5:
		cout << "The value is 5." << endl;
		break;
	case 6:
		cout << "The value is 6." << endl;
		break;
	default:
		cout << "Unrecognized value." << endl;
	}

	return 0;
}