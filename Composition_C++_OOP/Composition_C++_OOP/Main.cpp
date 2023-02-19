#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
	Birthday2 object2(1, 31, 1996);

	People2 object2("Dean Orchard", object2);
	
	object2.printInfo();

	/*Birthday object1(1, 31, 1996);

	People object2("Dean Orchard", object1);

	object2.printInfo();*/
}