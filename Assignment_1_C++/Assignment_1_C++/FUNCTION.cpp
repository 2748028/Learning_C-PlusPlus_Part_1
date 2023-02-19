//Dean Orchard 100589745
//January 18th, 2015
//Object Oriented Programming Assignment 1

#include "HEADER.h"

	Account::Account(int num, float bal) //This stores and checks the initial value of the accounts overall value.
	{
		accountNum = num;
		if (bal >= 0) accountBal = bal;
		else
		{
			cout << " *Warning: Invalid Initial Balance. " << endl;
			accountBal = 0;
		}
	}

	void Account::credit(float credBal) //This function adds the specified credited value into the account balance.
	{
		accountBal += credBal;
	}

	void Account::debit(float debtBal) //This function checks to see if the account has enough funds to complete a successful withdrawl.
	{
		if (debtBal > accountBal)
		{
			cout << " debit amount exceed account balance. " << endl;
		}
		else accountBal -= debtBal;
	}

	void Account::displayAccount() //This function outputs the current account balance and account number when called.
	{
		cout << " Account Number: " << accountNum << endl;
		cout << " Account Balance $ :" << accountBal << endl;
		cout << endl;
	}



