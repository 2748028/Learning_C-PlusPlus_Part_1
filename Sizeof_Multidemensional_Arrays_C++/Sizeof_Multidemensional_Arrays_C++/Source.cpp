#include <iostream>
#include <string>

using namespace std;

int main()
{
	string animals[][3] = 
	{ 
		{ "Fox", "Dog", "Cat" },
		{ "Mouse", "Squirrel", "Parrot" }, 
	};

	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}


	/*cout << sizeof(string) << endl;
	cout << sizeof(animals) << endl;
	cout << sizeof(animals[0]) << endl;*/

	return 0;
}