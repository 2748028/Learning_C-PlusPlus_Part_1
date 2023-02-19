#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday2::Birthday2(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Birthday2::printDate()
{
	cout << month << "/" << day << "/" << year << endl;
};

/*Birthday::Birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Birthday::printDate()
{
	cout << month << "/" << day << "/" << year << endl;
}*/

