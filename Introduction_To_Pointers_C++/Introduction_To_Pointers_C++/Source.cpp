#include <iostream>
using namespace std;

int main()
{
	int address = 5;
	cout << &address << endl;
	cout << "=============" << endl;
	int address2 = 36;
	cout << &address2 << endl;
	cout << "=============" << endl;
	int address3 = 20;
	cout << &address3 << endl;
	cout << "=============" << endl;

	int *addressPointer;
	addressPointer = &address;
	int *addressPointer2;
	addressPointer2 = &address2;
	int *addressPointer3;
	addressPointer3 = &address3;

	cout << addressPointer << endl;
	cout << "=============" << endl;
	cout << addressPointer2 << endl;
	cout << "=============" << endl;
	cout << addressPointer3 << endl;

	return 0;
}