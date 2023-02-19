#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
	int a = 13;
	int b = 13;
	int c = 24;
	int d = 24;

	passByValue(a);
	passByReference(&b);
	passByValue(c);
	passByReference(&d);

	cout << "Integer A is equal to: " << a << endl;
	cout << "Integer B is equal to: " << b << endl;
	cout << "Integer C is equal to: " << c << endl;
	cout << "Integer D is equal to: " << d << endl;

	return 0;
}

void passByValue(int x)
{
	x = 99;
}

void passByReference(int *x)
{
	*x = 66;
}