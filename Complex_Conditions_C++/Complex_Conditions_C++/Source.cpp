#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
== equality test

!= not equals

< less than

> greater than

<= less than or equal to

>= greater than or equal to

&& represents "and"

|| this states the entire condition is true if either/or variables are correct
*/

int main()
{
	int value1 = 7;
	int value2 = 4;

	if(value1 >= 7) {
		cout << "Condition 1: true" << endl;
	}
	else {
		cout << "Condition 1: false" << endl;
	}
	// Next operation
	if (value1 == 7 && value2 < 3) {
		cout << "Condition 2: true" << endl;
	}
	else {
		cout << "Condition 2: false" << endl;
	}
	// Next operation
	if (value1 == 7 || value2 < 3) {
		cout << "Condition 3: true" << endl;
	}
	else {
		cout << "Condition 3: false" << endl;
	}
	// Next operation
	if ( (value2 != 8 && value1 == 10) || value1 < 10) {
		cout << "Condition 4: true" << endl;
	}
	else {
		cout << "Condition 4: false" << endl;
	}
	// Next Operation
	bool condition1 = (value2 != 8) && (value1 == 10);
	bool condition2 = value1 < 10;
	// Next Operation
	if (condition1 || condition2) {
		cout << "Condition 5: true" << endl;
	}
	else {
		cout << "Condition 5: false" << endl;
	}
	return 0;
}