#include "Header.h" //This includes our custom header file.

void getVersion()
{ cout << "Alpha not numbered, "; }

namespace Production{
	void getVersion()
	{
		cout << "(c) Version: " << vP << ", ";
	}
}

namespace Testing {
	void getVersion()
	{
		cout << "Beta: " << vT << ", ";
	}
}

namespace {
	void getVersionI()
	{
		cout << "Intern's space/n";
	}
}
