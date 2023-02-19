#include <iostream>

using namespace std;

int main()
{
	int numb[7];
	int i, j;

	for (i = 0; i <= 6; i++)
	{
		cout << "Please, enter a number: ";
		cin >> numb[i];
	}

	for (i = 0; i <= 5; i++)
	{
		for (j = i + 1; j <= 6; j++)
		{
			int temp;

			if (numb[i] > numb[j])
			{
				temp = numb[i];
				numb[i] = numb[j];
				numb[j] = temp;
			}
		}
	}

	for (i = 0; i <= 6; i++)
	{ 
		cout << endl << numb[i] << endl;
	}

	system("PAUSE");
}