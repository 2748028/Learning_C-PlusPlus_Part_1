//Dean Orchard
//September 29th, 2015
//The purpose of this program is to convert pace in both minutes and seconds into mph; and then KPH to MPH.
#include <iostream> // Loads base and accessory code libraries for the main function.
#include <iomanip> //
#include <cmath> //
#include <string> //

using namespace std;

void main() //Initiates the main function without the need for returning "0" to confirm successful function completion.
{
	int x1, y1, x2, y2, x3, y3; //This declares three "partner" interger variables.
	double len1, len2, len3; //This declared double integer is used to store and report the three lengths of the user input triangle. 
	double area; //This declared double integer holds the computed area of the entire triangle.
	

	cout << "Enter the first 'X' value(Numbers Only Please): " << endl; //This prints "Enter the first 'X' value (Numbers Only Please)s: " to the screen.
		cin >> x1; //This binds keyboard input to the associated variable.

		cout << " " << endl;

	cout << "Enter the first 'Y' value: " << endl; //This prints "Enter the first 'Y' value: " to the screen.
		cin >> y1; //This binds keyboard input to the associated variable.

		cout << " " << endl;

	cout << "Enter the second 'X' value: " << endl; //This prints "Enter the second 'X' value: " to the screen.
		cin >> x2; //This binds keyboard input to the associated variable.

		cout << " " << endl;

	cout << "Enter the second 'Y' value: " << endl; //This prints "Enter the second 'Y' value: " to the screen.
		cin >> y2; //This binds keyboard input to the associated variable.

		cout << " " << endl;

	cout << "Enter the third 'X' value: " << endl; //This prints "Enter the third 'X' value: " to the screen.
		cin >> x3; //This binds keyboard input to the associated variable.

		cout << " " << endl;

	cout << "Enter the third 'Y' value: " << endl; //This prints "Enter the third 'Y' value: " to the screen.
		cin >> y3; //This binds keyboard input to the associated variable.
	
		cout << " " << endl;

	area = 0.5 * (x1 *(y2 - y3) + x2 *(y3 - y1) + x3 * (y1 - y2)); //The following formula uses the three points inputted by the user to calculate the area of the triangle.
	area = abs(area); //The product values will also have an absolute value applied to them to ensure even negative values entered by the user will become a positive product.

	cout.setf(ios::fixed); //This fixes the decimal to a preset position.
	cout.setf(ios::showpoint); //This forces the printing of the decimal even if the next digit is 0.
	cout.precision(3); //This sets the precision of the decimal to three points.

	if (area == 0) { //This if statement decides what length is the longest of the three inputed, triggered only if the calculated area of the triangle is equal to zero.
		len1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)* (y2 - y1)); //
		len2 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)* (y3 - y1)); //
		len3 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)* (y3 - y2)); //

		if (len1 >= len2 && len1 >= len3) //These if, else if, and else if statments calculate if the three points enetered by the user align in there virtual plots to form a straight line.-
			cout << len1; //If the statement is processed as true it will then print "The three points entered align to form a straight line! " to the screen.
		else if (len2 >= len3 && len2 >= len1) //
			cout << len2; //
		else if (len3 >= len2 && len3 >= len1) //
			cout << len3; //
		cout << "The three points entered align to form a straight line! " << endl; //

	}
	else if (area > 0) { //If the total area of the triangle is greater than that of zero this else if statement prints "The total area of the triangle is equal to: " to the screen.
		cout << "The total area of the triangle is equal to: " << area << endl;
	}
}
//That's all folks.