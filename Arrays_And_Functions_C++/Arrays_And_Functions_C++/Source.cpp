#include "Includes.h"
#include "iostream"
#include <string>

using namespace std;

void PrintArray(char inChars[], int size)
{
	cout << inChars[i] << endl;
}

struct Record
{
	void Print()
	{
		cout << name << ",  " << score << endl;
	}
	string name;
	int score = 0;
};

void SwapRecords(Record& a, Record& b)
{
	Record tempRecord = a;
	if (a.score > b.score)
	{
		a = b;
		b = tempRecord;
	}
}

int main()
/*{
	const int arraySize = 12;
	int intArray[10];
	for (int i = 0; i < 10; i++)
	{
		cout << intArray[i];
	} */
{	
	ifstream inFile;
	int records;

	Record myRecord;
	myRecord.Print();

	string name[20];
	int score[20];

	inFile.open("MyFile.txt");
	inFile >> records;

	for (int i = 0; i < records, i++);
	{
		inFile >> name >> score;
		cout << name << ",  " << score << endl;
	}
	inFile.close();

	int highScore = score[0];
	for (int i = 1; i < records; i++)
	{
		if (score[i]>highScore)
		{
			highScore = score[i];
			highRecord = i;
		}
	}
	cout << name[highRecord] << ",  " << score[highRecord =] << endl << endl;

	for (int i = 0; i < records; i++)
	{
	system("PAUSE");
	return 0;
	}

		/*char symbol[3] = { 'a', 'b', 'c' };
		PrintArray(symbol, 3);
		for int i = 0; i <= 3; i++)
		{

		}*/

}