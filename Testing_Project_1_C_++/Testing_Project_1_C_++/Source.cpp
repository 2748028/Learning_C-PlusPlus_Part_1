#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

void fuckHoes(int x, int answer);

int main()
{
	/*
	cout << "Ayyyy Lmao" << endl;

	int x = 58;
	cout << x << endl;

	float y = 2.2;
	cout << y << endl;

	double z = 99999;
	cout << z << endl;

	x = y;
	cout << "float =: " << y << endl;
	cout << "int = " << x << endl;


	float a = 3.14;

	cout << fixed << setprecision(7) << a << endl;

	int x = 5;
	int y = 8;

	if (x == 5 && y == 8)
	{
		cout << "Ayy baus, gib me da pussi" << endl;
	}
	else
	{
		cout << "Fuq yew baus" << endl;
	}

	if (!x == 5)
	{
		cout << "You gots its baus" << endl;
	}
	else
	{
		cout << "Try harder mane" << endl;
	}

	ifstream input1;
	input1.open("ayy_baus.txt");

	int fuckMyAss1;
	int fuckMyAss2;

	input1 >> fuckMyAss1 >> fuckMyAss2;

	cout << fuckMyAss1 << " " << fuckMyAss2 << endl;

	string fuckMyAss3;

	input1 >> fuckMyAss3;

	cout << fuckMyAss3 << endl;
	

	ofstream output1;
	output1.open("ayy_baus.txt");

	string a = "fuckmesohardintheearhole";

	double b = 13376052.999999999999999999;

	output1 << "your string is: " << a << " fuck me hard: " << b;

	output1.close();
	

	//recursion baus
	
	string god;
	getline(cin, god);
	cout << god << endl;

	cout << "The string I entered is: " << god << endl;

	cout << god.at(5) << endl;

	int x;

	for (int x = 0; x < god.length(); x++)
	{
		cout << god.at(x) << god.length() << endl;
	}

	int fish = 5;

	cout << &fish << endl;

	int *fishPointer;
	fishPointer = &fish;

	cout << fishPointer << endl;
	*/

	int x = 0;
	int answer; 
	cout << "enter a number fuckhead: " << endl;
	cin >> answer;

	fuckHoes(x, answer);


	return 0;
}

void fuckHoes(int x, int answer)
{
	if (x <= answer)
	{
		cout << "The number is currently: " << x << endl;
		x++; 
		fuckHoes(x, answer);
	}

}