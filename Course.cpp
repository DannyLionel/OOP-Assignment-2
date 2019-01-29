//Dhanushga Lionel
//ID: 100616831
#include "Course.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Course::courseDetail()
{
	cout << "\nEnter the Course Number" << endl;//ask user for input such as course number, course name and credit hours
	cin >> courseNo;
	cout << "\nEnter Course Name:" << endl;
	cin >> courseName;
	cout << "\nEnter Credit hours of course" << endl;
	cin >> credit;
}
void Course::WritetoFile1()
{
	ofstream myFile1;
	myFile1.open("course.txt"); //open a file named Course.txt
	if (!myFile1.fail())
	{
		myFile1 << courseNo << endl << courseName << endl << credit << endl;
	}
	myFile1.close();//close the file
}

void Course::displayCourse()
{
	int CourseNO1;
	int Total = 1; // Find out how Total Number of Courses
	string CName;
	string Credit1;
	ifstream File2;
	File2.open("Course.txt");//open a text file called Course.txt
	cout << endl;
	while (!File2.fail())
	{
		File2 >> CourseNO1 >> CName >> Credit1;
		cout << "Student:" << Total++ << "Course Number: " << CourseNO1 << endl
			<< "Course Name: " << CName << endl << "CREDIT: " << Credit1
			<< endl;
		File2 >> CourseNO1 >> CName >> Credit1;
		cout << endl;
	}
	File2.close();//close File2

	cout << "Total number of Courses: " << Total - 1 << endl;

}
