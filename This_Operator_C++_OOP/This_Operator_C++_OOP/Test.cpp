#include "Test.h"

using namespace std;

Test::Test(int num) : h (num)
{
}

void Test::printInfo()
{
	cout << "h=" << h << endl;
	cout << "this->" << this->h << endl;
	cout << "(*this) .h" << (*this) .h << endl;
}