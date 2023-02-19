#include <iostream>
#include <string>
#include <cstring>

/*class Record
{
public:
	const Record operator ++()
	{
		score++;
		return *this;
	}
	int GetScore()
	{
		return score;
	}
	void SetScore(int newScore)
	{
		score = newScore;
	}
	string name;
};

const Record operator +(Record a, Record b)
{
	a.GetScore += b.GetScore;
}
};*/

int main()
{
	const int MAX_SIZE = 30;
	char charArray1[MAX_SIZE] = "dog";
	char charArray2[MAX_SIZE] = "abc";

	int output = strcmp(charArray1, charArray2);
	
	cout << output << endl;

	cout << charArray1 << " " << charArray2 << endl;

	char someChar = 'b';
	someChar = toupper(someChar);

	int i = 0;
	while (charArray1 != '/0')
	{
		charArray1[i] = toupper(charArray1[i]);
	}
	for (int i = 0; charArray != '/0'; i++)
	{
		charArray1[i] = toupper(charArray1[i]);
	}
	cout << charArray1 << endl;


	strcpy_s(charArray1, charArray2);
}
