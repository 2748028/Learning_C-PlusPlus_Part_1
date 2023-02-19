#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream infile;
	int records;
	string name;
	int score;

	infile.open(“scores.txt”);
	infile >> records;

	for (int i = 0; i < records; i ++ )
	{
		infile >> name >> score;
		cout << name << " " << score << endl;
	}

	infile.close();
	
	return 0;
}
