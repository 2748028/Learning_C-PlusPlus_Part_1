#include <iostream>
using namespace std;

int addNumbers(int x, int y, int z)
{
	int answer = x + y + z / y;
	return answer;
}

float addNumbers(float x2, float y2, float z2)
{
	float answer2 = x2 + y2 + z2 / y2;
	return answer2;
}

int main()
{
	int x, y, z;

	cout << "Hello user, please enter three whole numbers: " << endl;
	cout << "=============================================" << endl;
	cout << "Enter Int X: ";
	cin >> x;
	cout << "Enter Int Y: ";
	cin >> y;
	cout << "Enter Int Z: ";
	cin >> z;
	cout << " " << endl;

	cout << addNumbers(x, y, z) << endl;

	float x2, y2, z2;

	cout << "Hello user, please enter three decimal numbers: " << endl;
	cout << "===============================================" << endl;
	cout << "Enter Float X: ";
	cin >> x2;
	cout << "Enter Float Y: ";
	cin >> y2;
	cout << "Enter Float Z: ";
	cin >> z2;
	cout << " " << endl;

	cout << addNumbers(x2, y2, z2) << endl;

	return 0;
}