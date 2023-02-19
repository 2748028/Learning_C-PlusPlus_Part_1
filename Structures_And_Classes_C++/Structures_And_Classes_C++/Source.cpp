//Arrays illustration
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int NUM_OF_FRIENDS = 5;
void readFriends(string f[]);

int main()
{
	string friends[NUM_OF_FRIENDS];
	readFriends(friends);
	cout << "The names in the list of friends are:\n";
	cout << friends[i] << '\n';
	return 0;
}

void readFriends(string f[])
{
	for (int i = 0; i < NUM_OF_FRIENDS; i++)
	{
		cout << "Enter friend name: ";
		cin >> f[i];
		return;
	}
}