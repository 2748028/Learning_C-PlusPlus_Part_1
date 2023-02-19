#include <iostream>
#include <string>

using namespace std;

class CustomClass2
{
public:
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}

private:

	string name;

};

class CustomClass1
{
public:
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}

private:
	string name;
};

int main()
{
	CustomClass1 Object1;
	Object1.setName("This name has been re-mapped");
	cout << Object1.getName() << endl;

	CustomClass1 Object2;
	Object2.setName("This name has also been re-mapped");
	cout << Object2.getName() << endl;

		return 0;
}