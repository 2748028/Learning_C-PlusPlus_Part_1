#include <iostream>

using namespace std;

class CustomClass3
{
public:
	void statement()
	{
		cout << "Hello I am statement #3" << endl;
	}
};

class CustomClass2
{
public:
	void statement()
	{
		cout << "Hello I am statement #2" << endl;
	}
	void statement2()
	{
		cout << "Hello, I am the second statement in class #2." << endl;
	}
};

class CustomClass1
{
public:
	void statement()
	{
		cout << "Hello I am statement #1" << endl;
	}
	void statement2()
	{
		cout << "Hello, I am the second statement in class #1." << endl;
	}
};

int main()
{
	CustomClass1 Object1;
	Object1.statement();

	CustomClass1 Object4;
	Object4.statement2();

	CustomClass2 Object2;
	Object2.statement();

	CustomClass3 Object3;
	Object3.statement();

	CustomClass2 Object5;
	Object5.statement2();

		return 0;
}