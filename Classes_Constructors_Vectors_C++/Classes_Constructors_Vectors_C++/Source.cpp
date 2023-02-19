#include <iostream>
#include <string>
#include <Includes.h>
#include <vector>
using namespace std;

class Record
{
public:
	Record(string newName, int newScore) //Constructor
	{
		numRecords++;
		name = newName;
		score = newScore;
		cout << "Constructor was called! " << endl;
	}

	Record()
	{
		numRecords++;
		cout << "Constructore was called! " << endl;
	}
	
	void Print();
	int Getscore()
	{
			return score;
	}
	
	void SetScore(int newVal1)
	{
		if (score > 5)return;

		score = newVal1
	}
	private;
	void Init()
	{
		name = "John";
		score = 0;

		static int numRecords;
	}
	string name;
	int score;
};
void Record::Print();
{
	cout << name << ", " << score << endl;
}
int main()
{
	const int array = ();
	int myArray[size];

	vector<int> ints(8);
	ints.push_back(5);
	ints.push_back(12);
	ints.push_back(67);

	for (int i = 0; i < ints.size(); i++)
	{
		cout << ints[i] << endl;
	}
	
	system("pause");
	
	return 0;
}