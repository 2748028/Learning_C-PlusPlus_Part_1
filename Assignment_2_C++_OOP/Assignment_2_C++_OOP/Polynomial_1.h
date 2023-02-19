#ifndef POLYNOMIAL_1_H
#define POLYNOMIAL_1_H
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Polynomial
{

public:

	Polynomial(double[], double); // Provides a blank array of doubles when called.
	Polynomial(double, double); // Provides input for polynomials at request of the user.
	~Polynomial();

	void setPoly(double[]); // Allows the modification of the "a" value represented in "a x^2" within the array.
	void setPoly(double[], double); // Allows the modification of the "a" value represented in "a x^2" as well as the "x" value within the array.

	double getPoly(); // Pulls computed value from utility function.

	Polynomial operator+(Polynomial&); // Adds "polynomialx" to "polynomialy" then stores this value to "polynomial3".
	Polynomial operator-(Polynomial&); // Subtracts "polynomialx" from "polynomialy" then stores this value to "polynomial3".
	Polynomial operator=(Polynomial&); // Transfers the value of "polynomialx" to "polynomialy" in a overloaded statement.
	Polynomial operator*(Polynomial&); // 
	Polynomial operator+=(Polynomial&); // Adds "polynomialx" to "polynomialy" then stores the value to "polynomial3".
	friend ostream operator<<(ostream&, Polynomial);

private:
	double a[10], polyAr[10];
	double poly, x;
};

ostream operator<<(ostream&, Polynomial);

#endif
