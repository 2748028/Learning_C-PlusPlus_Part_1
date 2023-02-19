#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT
#include <iostream>
#include <string>
#include <cmath>

class bankAccount
{
	bankAccount()
	{

	}
public:

	void setAcc(int);
	int retrieveAcc();

	double retrieveBal();

	void depositMuneh(double);
	void withdrawMuneh(double);

protected:
private:
	int accountNum;
	double accountBal;
};

#endif
