//Dean Orchard 100589745
//January 18th, 2015
//Object Oriented Programming Assignment 1

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Account
{
public:
	Account(int num, float bal) //This stores and checks the initial value of the accounts overall value.
	{
		accountNum = num;
		if (bal >= 0) accountBal = bal;
		else
		{
			cout << " *Warning: Invalid Initial Balance. " << endl;
			accountBal = 0;
		}
	}

	void credit(float credBal) //This function adds the specified credited value into the account balance.
	{
		accountBal += credBal;
	}

	void debit(float debtBal) //This function checks to see if the account has enough funds to complete a successful withdrawl.
	{
		if (debtBal > accountBal)
		{
			cout << " debit amount exceed account balance. " << endl;
		}
		else accountBal -= debtBal;
	}

	void displayAccount() //This function outputs the current account balance and account number when called.
	{
		cout << " Account Number: " << accountNum << endl;
		cout << " Account Balance $ :" << accountBal << endl;
	}

private: //Customer data is stored in the private section of this class to enforce security.
	int accountNum;
	float accountBal;
	string accountHol;
};

int main() //Main function.
{
	Account valueDec01(1025, 100.00);	//Customer account #1
	valueDec01.debit(50.00);
	valueDec01.credit(100.00);
	valueDec01.displayAccount();

	Account valueDec02(1026, -7.00); //Customer account #2
	valueDec02.debit(50.00);
	valueDec02.credit(100.00);
	valueDec02.displayAccount();
} 