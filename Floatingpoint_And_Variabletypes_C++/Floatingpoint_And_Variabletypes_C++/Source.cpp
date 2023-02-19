#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float fValue = 999.3828736;

	cout << "Sizeof float: " << sizeof(float) << endl;
	cout << setprecision (50) << fixed << fValue << endl;

	double dValue = 999.3828736;
	cout << setprecision(50) << fixed << dValue << endl;
	cout << "Sizeof double: " << sizeof(dValue) << endl;

	long double lValue = 999.3828736;
	cout << setprecision(50) << fixed << lValue << endl;
	cout << "Sizeof long double: " << sizeof(lValue) << endl;

	return 0;
}