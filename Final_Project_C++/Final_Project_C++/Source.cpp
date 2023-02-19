#include <iostream>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <time.h> //This allows us to generate random numbers based upon the systems clock seed.
#include <sstream>
#include <cassert>

using namespace std;

int wrapAround(int& num)

{
	int temp;

	srand(time(NULL));

	temp = rand() % 53 + 1;

	num = num + temp;

	if (num > 53)
	{
		num = num - 53;
	}

	return(temp);
}

int worpAround(int num, int num2) //This allows for values greater than 53 to "wrap around" to the value of 1 and beyond.
{
	int temp;

	num = num - num2;

	if (num < 1)
	{
		num = num + 53;
	}

	return(num);
}

int main(int argc, char* argv[])
{
	string lengthLine;
	int length, num = 0, randomNum, charNum;
	string textEncrypt1;

	//Takes in a .txt file and sends each individual letter to a separate char array from the .txt file.
	//It then converts these char's into a number and then adds a random number to char to "encrypt" it.
	//Using the stored char random numbers the program can then convert it back to legible text.

	//Step-by-step process:
	//replace original letter
	//print out random number to file
	//continue until the end of the txt file
	//This is the unencryption function.
	//It takes a letter from file
	//Turns it into a number
	//Adds a random number from the file
	//and then changes the char back to a letter

	ifstream textDoc;

	cout << argv[0] << endl << argv[1] << endl << argv[2] << endl;

	if (argv[1] = "-e")
	{
		textDoc.open(argv[2]);

		if (textDoc.fail())
		{
			cout << " Error Opening The .txt File." << endl;
		}
		else
		{
			while (textDoc.good())
			{
				getline(textDoc, lengthLine);

				textEncrypt1.append(lengthLine);
			}
			ofstream untextDoc, secretDoc; //This opens and then dumps our un-encrypted data to a .txt file.

			secretDoc.open(argv[4]);

			for (int i = 0; i < textEncrypt1.length(); i++)
			{
				//Something to convert individualy string character into int charNum
				// and set it to charNum

				randomNum = wrapAround(charNum);

				secretDoc << randomNum << " ";

				//someting to convert the charnum back to a char and set it to the appropriate string spot
			}

			untextDoc.open(argv[3]);

			untextDoc << textEncrypt1;

			untextDoc.close();
		}
	}
	if (argv[1] == "-d")
	{
		textDoc.open(argv[2]);

		if (textDoc.fail()) //This reports to the user that 
		{
			cout << " Error Opening The .txt File." << endl;
		}
		else
		{
			while (textDoc.good())
			{
				getline(textDoc, lengthLine);

				textEncrypt1.append(lengthLine);
			}

			ifstream secretDoc;
			ofstream untextDoc; //This opens and then dumps our un-encrypted data to a .txt file.

			secretDoc.open(argv[4]);

			for (int i = 0; i < textEncrypt1.length(); i++)
			{
				//something to take the char of the string and turn it into a int charNum
				secretDoc >> randomNum;

				charNum = worpAround(charNum, randomNum);

				//something to convert charNum back to a char and set it in the string
			}
			untextDoc.open(argv[3]);

			untextDoc << textEncrypt1;

			untextDoc.close();
		}
	}
	system("PAUSE");
	return(0);
}