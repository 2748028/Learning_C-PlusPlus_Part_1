//Dean Orchard. 100589745
//November 24th, 2015.
//This program is used to sort through a text document of student numbers and their associated GPA's. The program will then output the highest GPA value and its associated student number to the screen.
#include <iostream>
#include <fstream> //This library allows for input/output to text documents.
#include <iomanip>

using namespace std;

void Calculate(double GPA); //This calls a void function.

int main(int initialDirect, char* postDirect[]) //This function directs the program to the directory location containing all neccesary dependencies. 
{
	if (initialDirect < 2)
	{
		cout << "From Directory Location: " << postDirect[0] << " - Name Of Executable." << endl;
	}

	ifstream output; //This declares we wish to open a text document.
	output.open(postDirect[1]); //This opens our pre-written text file.

	int student_number; //This holds our pulled student number from the text file.
	double student_GPA; //This holds our pulled student GPA value from the test file.
	
	double greatest_GPA = 0.0; //This is a temporary place-holder for our final highest student GPA value.
	int fstudent_ID = 0; //This is a temporary place-holder for our final student ID which possesses the aforementioned highest GPA value.

	while (output >> student_number >> student_GPA) //This is the GPA sorting loop function.
	{
		if (student_GPA > greatest_GPA) //If the student GPA being currently read is greater than our current greatest GPA in memory; over-write the current values in memory with the new ones.
		{
			greatest_GPA = student_GPA; //Writes our current greatest GPA to the memory address of greatest_GPA.
			fstudent_ID = student_number; //Writes the associated student id to the memory address of Final_ID.
		}
	}
	cout << endl << "======================================="; //These cout functions prints our final values to the screen.
	cout << endl << "The Highest Grade Point Average Was: " << greatest_GPA << endl;
	cout << endl << "By Student #: " << fstudent_ID << endl;
	cout << "=======================================" << endl;

	system("PAUSE"); //This keeps our terminal window open after the operation completes.
	return 0;
}
//Thats all folks!
