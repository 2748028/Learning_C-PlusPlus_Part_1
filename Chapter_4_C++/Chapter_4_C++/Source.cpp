#include <iostream>
using namespace std;

void fooByValue(int i);
void fooByReference(int& i);

int main()
{
	int a=3;
	fooByValue(a);
	cout << a << endl;
	fooByReference(a);
	cout << a << endl;
	
	return 0;
}

void fooByValue(int i){ i++; }
void fooByReference( int& i){ i++; }