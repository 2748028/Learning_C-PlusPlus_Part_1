#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int age;
	
	cout << "Please, enter your age: " << endl;
	cin >> age;

	switch (age)
	{
	case 16:
			cout << "Hey, you can drive now!" << endl;
			break;
	case 18:
			cout << "Go buy some lottery tickets!" << endl;
			break;
	case 21:
			cout << "Buy me a drink!" << endl;
			break;
	default:
			cout << "Sorry, nothing fun for you" << endl;
	}
	return 0;
}
