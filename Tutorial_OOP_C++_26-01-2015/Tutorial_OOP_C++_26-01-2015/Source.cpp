#include <iostream>

using namespace std;

/*class MyClass
{
public:
	int puby;
	MyClass()
	{

	}
	~MyClass()
	{

	}

private:

};

// Global Object
// Constructed first, destructed last
// Destroyed on "exit()"
MyClass GlobalObject;

void SeparateFunction()
{
	// Local static object
	// Constructed when the program reaches this line
	// They are destroyed at the end of the main program
	// Or when we call "exit()"
	// Not destoyed on "abort()"
	static MyClass StaticObject;
}

int main()
{
	// Automatic objects or local function objects
	// Constructed once the code gets to that line
	// Destrcuted at end of current function or scope {}
	// Not destoyed on "exit()" or "abort()"
	MyClass obj1;
	MyClass *obj2;
	obj2 = new MyClass();

	obj1.puby;
	obj2->puby;

	delete obj2;

	return 0;
}*/

class Person
{
private:
	string name_;
	int age_;
	int ID_;
	static int counter;
public:
	int getage()
	{
		return age_;
	}
	void setage(int age){ age_ = age; }
	static int returncount();
};

int counter = 0;

int Person::returncount()
{
	return counter;
}

int main()
{
	Person P;
	P.setage(10);
	cout << P.getage();
}
