//Dhanushga Lionel
//ID: 100616831
#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person
{
public:
	void setagreeToTeach(); //see if student wants a job
	void setnumberCourses();//user input for how many courses they are taking
	void setMajorandDepartment();//setting info for major and 
	void WritetoFile();//writing to a file
	void displayStudent();//display to screen
private:
	string major;
	string department;
	string agreeToTeach;
	int numberCourses;

};
#endif // !STUDENT_H
