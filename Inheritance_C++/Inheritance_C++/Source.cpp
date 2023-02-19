#include <iostream> //Text input and output.
#include <sstream> //Allows us to convert between numbers and strings.
#include <iomanip> //Format the output to the console.
#include <fstream> //File loading and saving.
#include <string> //Strings store text.
#include <cstring> // C style string and character functions.
#include <cassert> //Assert checks for errors at run time.
#include <time.h> //System clock time and date.
#include <vector> //Vectors are resizable arrays.

using namespace std;

class A
{
public:
	float data;
};

class B : public A
{
public:
	int num;
};

int main()
{
	B b;
	b.data = 4.5f;



	return 0;
}