#include <iostream>
#include "Bag.h"

using namespace std;

Bag::Bag(int c, int s)
{

	cubes = c;
	spheres = s;

}

Bag Bag::operator+(Bag &other)
{
	Bag re(0, 0);

	re.cubes = cubes + other.cubes;
	re.spheres = spheres + other.spheres;

	return re;
}

Bag Bag::operator-(Bag &other)
{
	Bag re(0, 0);

	re.cubes = cubes - other.cubes;
	re.spheres = spheres - other.spheres;

	return re;
}

Bag Bag::operator*(int x)
{
	Bag re(0, 0);

	re.cubes = cubes * x;
	re.spheres = spheres * x;

	return re;
}


void Bag::print()
{
	cout << "Number of Cubes: " << cubes << endl;
	cout << "Number of Spheres: " << spheres << endl;
	cout << endl;
}

Bag operator*(int x, Bag &other)
{
	Bag re(0, 0);

	re.cubes = other.cubes * x;
	re.spheres = other.spheres * x;

	return re;
}

ostream& operator<<(ostream& out, const Bag &bag)
{
	out << "Number of Cubes: " << bag.cubes << endl;
	out << "Number of Spheres: " << bag.spheres << endl;
	out << endl;

	return out;
}