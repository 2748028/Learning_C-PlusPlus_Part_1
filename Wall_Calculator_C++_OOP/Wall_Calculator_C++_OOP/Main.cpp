#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Wall
{
public:

	//Constructor call
	Wall() : width(1.0), height(1.0), color("white")
	{
	}

	//Get functions
	float getHeight()
	{
		return height;
	}
	float getWidth()
	{
		return width;
	}

	//Set functions
	void setWidth(float x)
	{
		if (x <= 20.0, x >= 0.0)
		{
			width = x;
		}
		else (width = 1.0);
		cout << "Width is: " << width << endl;
	}
	void setHeight(float y)
	{
		if (y <= 20.0, y >= 0.0)
		{
			height = y;
		}
		else (height = 1.0);
		cout << "Height is: " << height << endl;
	}

	//Calculatory functions
	float calcPerimeter()
	{
		perimeter = (width * 2 + height * 2);
		cout << "Perimeter with these parameters is: " << perimeter << endl;
		return perimeter;
	}
	float calcArea()
	{
		area = (width * height);
		cout << "Area with these parameters is: " << area << endl;
		return area;
	}

private:
	float width;
	float height;
	string color;
	float perimeter;
	float area;

};

int main()
{
	Wall object1;
	object1.setWidth(2.3);
	object1.setHeight(5.6);
	object1.calcArea();
	object1.calcPerimeter();

	return 0;
};