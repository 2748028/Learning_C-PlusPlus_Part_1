#include <iostream>
#include <cmath>

using namespace std;

struct newPerson
{
	char name[20];
	int age;
};

int main()
{

	newPerson Greg = 
	{
		"Greg",
		21
	};

	newPerson Hoss =
	{
		"Hoss",
		58
	};

	cout << Greg.age << " " << Greg.name << endl;

	cout << Hoss.age << " " << Hoss.name << endl;

	system("PAUSE");
	
	return 0;
}