#include "bank_account.h"

using namespace std;

class bankAccount
{
	bankAccount(int accountNum2, double accountBal2) : accountNum(0), accountBal(0)
	{
	}

public:

	void bankAccount::setAcc(int accNumIn)
	{
		accountNum = accNumIn;
	}
	int bankAccount::retrieveAcc()
	{
		return accountNum;
	}

	double bankAccount::retrieveBal()
	{
		return accountBal;
	}

	//_________________________________
	void bankAccount::depositMuneh(double deposit)
	{
		cout << " Please enter a sum to add to your account balance: " << endl;
		if (accountBal += deposit)
		{
			accountBal + deposit;
			cout << " Your balance is now: " << accountBal << endl;
		}
		else
		{
			cout << " This is an invalid entry. " << endl;
		}
	}

	void bankAccount::withdrawMuneh(double withdraw)
	{
		cout << "Please enter an amount you wish to withdraw: " << endl;
		if (accountBal <= withdraw)
		{
			cout << " Invalid entry." << endl;
			cout << " Please enter a value less than your total account balance." << endl;
		}
		else
		{
			accountBal - withdraw;
			cout << " Your balance is now: " << accountBal << endl;
		}
	}

protected:
private:
	int accountNum;
	double accountBal;
};