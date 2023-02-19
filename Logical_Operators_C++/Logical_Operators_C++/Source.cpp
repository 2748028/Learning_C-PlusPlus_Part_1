#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string first;
	string last;
	int age;
	double money;

	cout << "Hello, what is your name? " << endl;
	cin >> first;
	cin >> last;
	cout << "Hello " << first << " " << last << "!" << endl;

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "How much money do you have with you?" << endl;
	cin >> money;

	if (age > 21 && money > 500)
	{
		cout << "You are allowed to enter!" << endl;
	}
	else (age < 21 || money < 500);
		cout << "You are not old enough to enter." << endl;
		
		return 0;
}