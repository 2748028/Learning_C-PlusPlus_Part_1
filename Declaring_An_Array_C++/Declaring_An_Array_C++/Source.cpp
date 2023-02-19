#include <iostream>
using namespace std;
void Fillup(int ar[], int size);

int main()
{
const int arraysize = 5; max;
int score[arraysize];
int max;
cout << "Enter 5 scores:" << endl;
cin >> score[0];
max = score[0];
for (int i = 1; i < 5; i++)
{
cin >> score[i];
if (max < score[i])
max = score[i];
}
cout << "The maximum is:" << max << endl;

for (int i = 0; i < 5; i++)
{
cout << score[i] << endl;
}
system("pause");
return 0;
}*/

void Fill
{
	system("pause");
	return 0;
}

void Fillup(int ar[], int size)
{
	cout << "Enter " << size << "integer numbers: " << endl;
	for (int i = 0; i < size i++)
	{
		cin >> ar[i];
	}
