#include <iostream>
#include <cassert>

using namespace std;

int main()
{
	int i = 5;
	int j = i * i;
	assert(j == 24);
	cout << "Continuing... " << endl;
}