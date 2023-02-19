//string manipulation; inverting order of characters in a c-string
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char a[] = "This is a c-string!";
	char temp;
	string s = "Hello World!";
	strcpy(a, s.c_str());
	for (int i = 0; i < strlen(a) / 2; i++)
	{
		temp = toupper(a[i]); 
		a[i] = a[strlen(a) - i - 1]; 
		a[strlen(a) - i - 1] = temp;
	}
	cout << a;
	return 0;
}