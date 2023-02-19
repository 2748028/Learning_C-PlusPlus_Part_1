//Dean Orchard. 100589745
//November 24th, 2015.
//This program is used to recursively call a function based upon the call value entered by the user.
#include <iostream>

using namespace std;

void recursiveFunc1(double printValue) //This calls a void function that repeatedly prints the call # of the recursive function until it meets the double integer value previously entered by the user in the "int main" function.
{
	if (printValue == 1) //If the "printValue" double integer is equal to (or greater) than the value of 1 than the function will print "Recursive Call #: " followed by the iteration number to the screen.
	{
		cout << "Recursive Call #: " << printValue << endl; 
	}
	
	else //After each successful iteration cycle "printValue" has 1 deducted from it until its value reaches zero. At this point the program will complete.
	{
		recursiveFunc1(printValue - 1); 
		cout << "Recursive Call #: " << printValue << endl;
	}
}

int main() //This calls our main function.
{
	double maxRecursiveValue; //This calls a double integer to which we will store the users input in.

	cout << "Please Enter An Integer Value: "; //This asks the user to enter a integer value within reasonable limits.
	cin >> maxRecursiveValue; //This stores the keyboard input from the usert in the "maxRecursiveValue" double integer.
	recursiveFunc1(maxRecursiveValue); //This calls the "recursiveFunc1" void function that preceeds the main function.

	system("PAUSE"); //This pauses the cmd window to improve print-out readability. 
	return 0;
}