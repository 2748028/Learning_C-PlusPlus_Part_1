#include "Test.h"

using namespace std;

int recursion(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x*recursion(x - 1);
	}
}

int recursion2(int y)
{
	if (y = 0)
	{
		return 1;
	}
	else
	{
		return y*recursion2(y - 1);
	}
}

int main()
{
	Test object1(8008);
	object1.printInfo();

	/*int y;
	cout << "Enter a integer: " << endl;
	cin >> y;*/
	cout << endl << recursion(120) << endl;

	cout << endl << recursion2(12) << endl;

	return 0;
}