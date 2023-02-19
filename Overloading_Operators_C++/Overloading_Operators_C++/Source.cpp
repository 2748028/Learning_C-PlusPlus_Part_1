#include <iostream>

using namespace std;

class Student
{
public:
	Student(int num){ id = num; }
	void setGroup(int g){ group = g; }
	friend void testFriendship(Student);
private:
	int id, group;
};
const Student operator +(const Student& s1, const Student& s2)
{
	return Student(0);
}
void testFriendship(Student st){ cout << flush << st.id; }
int main()
{
	Student john(1), peter(4), jen(5);
	john = peter + jen;
	testFriendship(john);
	return 0;
}