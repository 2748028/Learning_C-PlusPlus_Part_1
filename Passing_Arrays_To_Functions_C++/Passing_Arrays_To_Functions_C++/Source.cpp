#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
	int arrayOne[3] = { 20, 54, 675 };
	int arrayTwo[6] = { 54, 24, 7, 8, 9, 99 };

	cout << "Now printing array #1... " << endl;
	printArray(arrayOne, 3);
	cout << "Now printing array #2... " << endl;
	printArray(arrayTwo, 6);
}

void printArray(int theArray[], int sizeOfArray)
{
	for (int x = 0; x < sizeOfArray; x++)
	{
		cout << theArray[x] << endl;
	}
}