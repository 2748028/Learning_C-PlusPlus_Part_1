#include <iostream>
#include "Rabbit.h"
using namespace std;

int main()
{
	Rabbit r;

	//cin >> r;
	
	cout << (char*)r;

	

	double *pi;
	pi = new double(3.1415);

	delete pi;

	double *doubleArray;
	doubleArray = new double[9991024];

	delete [] doubleArray;

	double d = 4.2;
	int i = d;



	cout << endl;
	system("pause");
	return 0;
}