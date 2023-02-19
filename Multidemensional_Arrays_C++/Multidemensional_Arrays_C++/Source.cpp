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
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << animals[i][j] << " " << flush;
	}
	cout << endl;
}
return 0;
}