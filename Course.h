//Dhanushga Lionel
//ID: 100616831
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class Course
{
public:

	void WritetoFile1();//writing to file
	void displayCourse();//display output
	void courseDetail();//asking user for input
private:
	int credit;
	int courseNo;
	string courseName;
};
#endif // !COURSE_H
