//Dean Orchard.
//September 29th, 2015.
//The purpose of this program is to convert pace in both minutes and seconds into MPH; and then KPH to MPH.
#include <iostream> // Loads base and accessory code libraries for the functions.
#include <string> //
#include <cmath> //

using namespace std;

int main() //Initiates the main function.
{
	double x1, y1, x2, y2, x3, y3, flush; //This declares the double integer values used throughout this function.

	cout << "Please, enter X value #1: " << endl; //This prints "Please, enter X value #1: " to the screen.
	cin >> x1; //This binds keyboard input to the associated variable.
	
	cout << "Enter Y value #1: " << endl; //This prints "Enter Y value #1: " to the screen.
	cin >> y1; //This binds keyboard input to the associated variable.
	
	cout << "Enter X value #2: " << endl; //This prints "Enter X value #2: " to the screen.
	cin >> x2; //This binds keyboard input to the associated variable.
	
	cout << "Enter Y value #2: " << endl; //This prints "Enter Y value #2: " to the screen.
	cin >> y2; //This binds keyboard input to the associated variable.
	
	cout << "Enter X value #3: " << endl; //This prints "Enter X value #3: " to the screen.
	cin >> x3; //This binds keyboard input to the associated variable.
	
	cout << "Enter Y value #3: " << endl; //This prints "Enter Y value #3: " to the screen.
	cin >> y3; //This binds keyboard input to the associated variable.
	//above code would be asking the user for x and y values for the 3 points.

	double distance1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); //This runs two double variables through a square-root, then multiplies them-
	double distance2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3)); //against the same variables. It then performs addition of the previous variables-
	double distance3 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1)); //followed by another multiplication against the aforementioned variables.

	cout.setf(ios::fixed); //This fixes the decimal to a preset position.
	cout.setf(ios::showpoint); //This forces the printing of the decimal even if the next digit is 0.
	cout.precision(3); //This sets the precision of the decimal to three points.

	if (distance1 == 0) { //If distance #1 is equal to zero then distance #2 will be greatest if it is greater than distance #3, if not distance #3 will be greatest.
		if (distance2 < distance3){ 
			cout << "The shortest distance of the three points is: " << distance2 << endl << "There is a minimum of two points that are the same." << endl;
		}
		
		else{
			cout << "The shortest distance of the three points is: " << distance3 << endl << "There is a minimum of two points that are the same." << endl;
		}
	}
	
	else if (distance2 == 0) //If distance #2 is equal to zero then distance #1 will be greatest if it is greater than distance #3, if not distance #3 will be greatest.
	{
		if (distance1 < distance3) {
			cout << "The shortest distance of the three points is: " << distance1 << endl << "There is a minimum of two points that are the same." << endl;
		}
		else {
			cout << "The shortest distance of the three points is: " << distance3 << endl << "There is a minimum of two points that are the same." << endl;
		}
	}
	else if (distance3 == 0) { //If distance #3 is equal to zero then distance #1 will be greatest if it is greater than distance #2, if not distance #2 will be greatest.
		if (distance1 < distance2) {
			cout << distance1 << endl << "There is a minimum of two points that are the same." << endl;
		}
		else {
			cout << "The shortest distance of the three points is: " << distance2 << endl << "There is a minimum of two points that are the same." << endl;
		}
	}
	else if (distance1 < distance2 && distance1 < distance3) { //If distance #1 is greater than both distances #2 & #3 it is declared the shortest distance.
		cout << "The shortest distance of the three points is: " << distance1 << endl;
	}
	else if (distance2 < distance1 && distance2 < distance3) { //If distance #2 is greater than both distances #1 & #3 it is declared the shortest distance.
		cout << "The shortest distance of the three points is: " << distance2 << endl;
	}
	else if (distance3 < distance1 && distance3 < distance2) { //If distance #3 is greater than both distances #1 & #2 it is declared the shortest distance.
		cout << "The shortest distance of the three points is: " << distance3 << endl;
	}
	
	cout << "Distance 1: " << distance1 << endl; // This prints to the screen the final computed values of-
	cout << "Distance 2: " << distance2 << endl; // of the variables distance #1, distance #2, and distance #3.
	cout << "Distance 3: " << distance3 << endl; //

	return 0;
}
//That's all folks!