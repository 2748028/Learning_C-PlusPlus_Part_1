#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection >" << flush;

	int value;
	cin >> value;

	if (value == 1) {
		cout << "Adding new record..." << endl;
	}
	else if (value == 2) {
		cout << "Deleting record..." << endl;
	}
	else if (value == 3) {
		cout << "Viewing..." << endl;
	}
	else if (value == 4) {
		cout << "Searching..." << endl;
	}
	else if (value == 5) {
		cout << "Quitting..." << endl;
	}
	else {
		cout << "Invalid option." << endl;
	}

	float value = 1.1;

	cout << fixed << setprecision(10) << value << endl;

	if (value < 1.2) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}

	return 0;
}