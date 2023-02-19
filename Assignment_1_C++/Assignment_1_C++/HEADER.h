//Dean Orchard 100589745
//January 18th, 2015
//Object Oriented Programming Assignment 1

#include <string>
#include <iostream>
#ifndef HEADER_H
#define HEADER_H

using namespace std;

class Account
{
public:
	Account(int num, float bal); //This stores and checks the initial value of the accounts overall value.
	void credit(float credBal); //This function adds the specified credited value into the account balance.
	void debit(float debtBal); //This function checks to see if the account has enough funds to complete a successful withdrawl.
	void displayAccount(); //This function outputs the current account balance and account number when called.

private: //Customer data is stored in the private section of this class to enforce security.
	int accountNum;
	float accountBal;
	string accountHol;
};
#endif