#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;

	istream infile;
	infile.open("MyFile.txt");
	infile >> line;
	infile.close();

	string output = "Hello";

	ofstream outfile;
	outfile.open("MyFile.txt");
	outfile << output;
	outfile.close();

	system("Pause"); return 0;
}
