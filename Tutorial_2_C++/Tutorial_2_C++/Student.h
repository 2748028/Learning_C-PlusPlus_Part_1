#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
	
	Student(int id, float gpa); //Constructor example
	~Student();
	//Accessor functions
	int getID();
	float getGPA();
	//Manipulator functions
	void setID(int id);
	void setGPA(float gpa);
	
private:
	int dollars;
	int ID;
	float GPA;
	int numStudents;
};

#endif