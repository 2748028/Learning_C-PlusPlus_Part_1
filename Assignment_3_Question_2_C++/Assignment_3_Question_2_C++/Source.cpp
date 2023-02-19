//Dean Orchard. 100589745
//October 25th, 2015.
//This function utilizes a custom created header file called "Header.h". It will then fetch and print text to the screen.
#include "Header.h" //This includes our custom generated header file.
#include <iostream>

int main() //This function calls the release data located on the "Source1.cpp".
{
	Testing::getVersion(); //This fetches our programs current development version. 
	Production::getVersion(); //This fetches our programs current commercial release version. 
	getVersion(); //This prints the Alpha status.

	system("PAUSE"); //This pauses the cmd window for easier viewer reading.
	return 0;
}