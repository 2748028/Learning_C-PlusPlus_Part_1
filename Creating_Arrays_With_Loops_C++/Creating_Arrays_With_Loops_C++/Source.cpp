#include <iostream>

using namespace std;

int main()
{
	int array[9];

	cout << "Element - Value" << endl;

	for (int x = 0; x <= 8; x++)
	{
		array[x] = 99;

		cout << x << "  ------  " << array[x] << endl;
	}
}