#include <iostream>

using namespace std;

int raspberry = 72;

int main()
{
	int blueberry = 65; //Disregarded due to Unary Scope Resolution Operator.
	cout << ::raspberry << endl;

	return 0;
}