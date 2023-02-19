//Dean Orchard
//September 29th, 2015
//The Purpose Of This Program Is To Convert Pace In Minutes & Seconds To MPH, And Then Convert KPH To MPH.
#include <iostream> // Loads base and accessory code libraries for the main function.
#include <cstdlib> //
#include <string> //

using namespace std;

double ConvertToMilePerHour(int paceMin, int paceSec); //Declares a single double and two integers.
double ConvertToMilePerHour(double kph); //Associates a previously declared double and one newly declared integer.

int main() //Initiates the main function.
{

int paceMin; //Pace measured in minutes integer.
int paceSec; //Pace measured in seconds integer.
double kPerHour; //Kilometers per-hour double integer.

	cout << "Enter your pace in minutes (Numbers Only Please): "; //Prints out "Enter your pace in minutes (Numbers Only Please): " to the screen.
	cin >> paceMin; //Stores keyboard input into pace in minutes.
	
	cout << "Enter your pace in seconds (Numbers Only Please): "; //Prints out "Enter your pace in seconds (Numbers Only Please): " to the screen.
	cin >> paceSec; //Stores keyboard input into pace in seconds.
	
	cout << "Your pace measured in Miles Per-Hour is: " << ConvertToMilePerHour(paceMin, paceSec) << endl; //prints out "Your pace measured in Miles Per-Hour is: " to the screen from the computed "ConvertToMilePerHour" double.

	cout << "Please, enter your speed in Kilometers Per-Hour: "; //Prints out "Please, enter your speed in Kilometers Per-Hour: " to the screen.
	cin >> kPerHour; //Stores keyboard input into kilometers per-hour.
	cout << "Your Kilometers Per-Hour pace in Miles Per-Hour is: " << ConvertToMilePerHour(kPerHour) << endl; //prints out "Your Kilometers Per-Hour pace in Miles Per-Hour is: " to the screen from the computed "ConvertToMilePerHour" double.

	return 0;
}

double ConvertToMilePerHour(int paceMin, int paceSec) //Initialization of double integer for computation of MPH=KPH.
{
	return 60 / (paceMin + paceSec / 60.); //Returns value of paceSec plus paceMin divided by 60.
}

double ConvertToMilePerHour(double kph) //Transfers the value in "ConvertToMilePerHour" to "kph" double.
{
	return kph / 1.61; //Returns the kilometers per-hour double divided by 1.61.
}
//Thats all folks!