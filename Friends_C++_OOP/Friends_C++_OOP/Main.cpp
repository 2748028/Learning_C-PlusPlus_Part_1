#include <iostream>
#include <string>

using namespace std;

/*class Friendly
{
public:

	Friendly()
	{
		friend1 = 0;
	}

private:
	int friend1;

	friend void friendlyFriend(Friendly &friendFunc);
};

void friendlyFriend(Friendly &friendFunc)
{
	friendFunc.friend1 = 7;
	cout << friendFunc.friend1 << endl;
}*/


//////////////////////////////////////////////////////////////////////////

class Mane
{
public:
	Mane()
	{
		accessor = 0;
		cout << accessor << endl;
	}
private:
	int accessor;
	friend void friend2(Mane &friendFunc2);
};

void friend2(Mane &friendFunc2)
{
	friendFunc2.accessor = 8;
	cout << friendFunc2.accessor << endl;
};

int main()
{
	Mane object1;
	friend2(object1);

	return 0;
}