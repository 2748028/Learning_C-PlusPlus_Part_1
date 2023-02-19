#include <iostream>
using namespace std;
class Student
{
public:
	Student(int num, double g) :id(num), gpa(g){}
	void setGPA(double g){ gpa = g; }
	double getGPA() const { return gpa; }
private:
	int id; double gpa;
	friend void testFriendship(Student);
};
const Student operator +(const Student& s1, const Student& s2)
{
	return Student(0, (s1.getGPA() + s2.getGPA()) / 2);
}
void testFriendship(Student st){ cout << st.id; }
int main()
{
	Student john(1, 3.1), peter(4, 1.0), jen(5, 3.9);
	Student other = peter + jen;
	cout << other.getGPA();
	//testFriendship(john);
	return 0;
}