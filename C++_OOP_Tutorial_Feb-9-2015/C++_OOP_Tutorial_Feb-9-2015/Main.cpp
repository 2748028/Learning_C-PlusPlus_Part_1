#include <iostream>
using namespace std;
#include "Bag.h"

int main()
{
	cout << "You will eventually be my personal driving monkey" << endl << endl;

	Bag first(6, 7);
	Bag second(8, 9);

	Bag third = first + second;
	Bag fourth = second - first;

	Bag fifth = first * 5;
	Bag sixth = 5 * first;

	Bag seventh(1, 20);

	first.print();
	second.print();
	third.print();
	fourth.print();
	fifth.print();
	sixth.print();

	cout << "Printed with stream operator " << endl << seventh;

	cout << endl;
	system("pause");
	return 0;
}