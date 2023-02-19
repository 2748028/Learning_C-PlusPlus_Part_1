#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Format: vector<dataType> nameOfVector

	vector<int> myVector;

	myVector.push_back(3);
	myVector.push_back(2);
	myVector.push_back(7);
	myVector.push_back(5);
	myVector.push_back(9);
	myVector.push_back(2);
	myVector.push_back(1);
	myVector.push_back(0);

	cout << "Vector: " << endl;

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " " << endl;
	}

	return 0;
}