#include <iostream>

using namespace std;

int main()
{
	int a[5];
	int *bp0 = &a[0];
	int *bp1 = &a[1];
	int *bp2 = &a[2];

	cout << "bp0 is at: " << bp0 << endl;
	cout << "bp1 is at: " << bp1 << endl;
	cout << "bp2 is at: " << bp2 << endl;

	cout << "===========" << endl;
	bp0 += 2;
	cout << "bp0 is now at: " << bp0 << endl;
	bp0++;
	cout << "bp0 is now at: " << bp0 << endl;
	bp0 + 3;
	cout << "bp0 is now at: " << bp0 << endl;

	return 0;
}