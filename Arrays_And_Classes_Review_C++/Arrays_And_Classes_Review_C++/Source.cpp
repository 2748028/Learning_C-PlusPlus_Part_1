//Arrays, classes illustration
#include <iostream>
#include <string>
using namespace std;

const int NUM_OF_FRIENDS = 5;
void readFriends(string f[]);

class Folk
{
public:
	void display();
	void setYearMet(int);
private:
	string name = "Nothing";
	int yearMet;
};

int main()
{
	string friends[NUM_OF_FRIENDS];
	readFriends(friends);
	Folk myFriend;
	//myFriend.name = "John"; //NOT POSSIBLE SINCE name IS PRIVATE
	myFriend.setYearMet(2015);
	myFriend.display();
	Folk myFriends[NUM_OF_FRIENDS];
	cout << "The names in the list of friends are:\n";
	for (int i = 0; i < NUM_OF_FRIENDS; i++)
		cout << friends[i] << '\n';
	return 0;
}

void Folk::setYearMet(int y){ yearMet = y; }
void Folk::display()
{
	cout << "Name: " << name << "\nYear we met: " << yearMet << endl;
}

void readFriends(string f[])
{
	for (int i = 0; i < NUM_OF_FRIENDS; i++)
	{
		cout << "Enter friend name: ";
		cin >> f[i];
	}
	return;
}