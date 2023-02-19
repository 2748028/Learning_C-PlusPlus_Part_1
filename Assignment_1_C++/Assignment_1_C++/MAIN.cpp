//Dean Orchard 100589745
//January 18th, 2015
//Object Oriented Programming Assignment 1

#include "HEADER.h"

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