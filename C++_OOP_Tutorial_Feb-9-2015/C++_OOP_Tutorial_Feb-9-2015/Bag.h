#pragma once
#include <iostream>
using namespace std;

class Bag
{
public:
	Bag(int c, int s);

	Bag operator+(Bag &other);
	Bag operator-(Bag &other);
	Bag operator*(int x);
	friend Bag operator*(int x, Bag &other);
	friend ostream& operator<<(ostream& out, const Bag &bag);

	void print();
private:
	int cubes;
	int spheres;
};

Bag operator*(int x, Bag &other);
ostream& operator<<(ostream& out, const Bag &bag);