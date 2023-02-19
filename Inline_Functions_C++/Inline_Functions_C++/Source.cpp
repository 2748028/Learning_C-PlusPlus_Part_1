#include <iostream>

using namespace std;

inline void sum(int a, int b)
{
	cout << "The result from the sum function is: " << a + b << endl;
}

int main()
{

	sum(10, 20);
	return 0;
}