#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*int x;

	cout << "Please enter your password: " << endl;
	cin >> x;

	if (x == 87)
	{
		cout << "Welcome user! :" << endl;
	}
	else
	{
		cout << " **Access denied** " << endl;
	}*/

	//////////////////////////////////////////

	/*int x;

	cout << "Please enter your password: " << endl;
	cin >> x;

	if (x == 87 || x == 78)
	{
	cout << "Welcome user! :" << endl;
	}
	else
	{
	cout << " **Access denied** " << endl;
	}*/

	//////////////////////////////////////////////

	int x;
	cout << sizeof x << endl;

	cout << "Please enter your password: " << endl;
	cin >> x;

	if (x < 64 || x > 128)
	{
		cout << "Welcome user! :" << endl;
	}
	else
	{
		cout << " **Access denied** " << endl;
	}
	

	return 0;
}