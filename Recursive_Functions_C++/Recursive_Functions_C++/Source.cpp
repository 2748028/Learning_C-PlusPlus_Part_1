#include <iostream>
#include <cmath>
using namespace std;

int factorialFinder(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x*factorialFinder(x - 1);
	}
}

	int main()
{
	cout << factorialFinder(5) << endl;
}