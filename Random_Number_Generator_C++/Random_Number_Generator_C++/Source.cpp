#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//long double time;

	//cout << "Please enter a seed number: ";
	//cin >> x;
	
	srand(time(0));
	
	for (int x = 1; x < 25; x++)
	{
		cout << 1+(rand()%6) << endl;
	}
	return 0;
}