#include <iostream>
using namespace std;

int volume(int length=1, int width=1, int height=1);

int main()
{
	cout << volume() << endl;
}

int volume(int length, int width, int height)
{
return length*width*height;
}