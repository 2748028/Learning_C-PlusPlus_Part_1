#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Head
{
public:
	void MainFunc()
	{
		cout << " *Hello, please be prepared to enter your bank credentials* " << endl;
		cout << " Please enter your current account balance: " << endl;
		cin >> accountSum;
		if (accountSum >= 0)
		{
			cout << " Please enter your account number: " << endl;
			cin >> accountNum;

			cout << " Please enter you first name: " << endl;
			cin >> accountOwner;
		}

		else
		{
			cout << " Sorry, the amount you have provided is too little. " << endl;
			accountSum = 0;
		}

	}

private:
	int accountNum;
	float accountSum;
	string accountOwner;
};

int main()
{
	Head accountHolder1;
	accountHolder1.MainFunc();

}