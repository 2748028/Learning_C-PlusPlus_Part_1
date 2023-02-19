#include "CLASS.h"

int main()
{
	char answer1;

	cout << "********* Hello User! *********" << endl;
	cout << endl << " Would you like to create a student account? Y/N " << endl;
	cin >> answer1;
	if (tolower(answer1 == 'y'))
	{
        Record::setidNum(100589745);

		Record::setgpa(5.5);
	}
	else (cout << "Goodbye " << endl << endl);

	Record::thomas();

	return 0;
}