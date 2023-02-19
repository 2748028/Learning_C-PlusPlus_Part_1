#include <iostream>
#include <string>

using namespace std;

class CustomClass{

public: 
//Constructor.
	CustomClass(string z)
	{
		setName(z);
	}
//

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
	CustomClass /*type of object*/ bo("James Roberts");
	cout << bo.getName() << endl;

	CustomClass ba("Hannah Bobanna");
	cout << ba.getName() << endl;
	
	return 0;
}