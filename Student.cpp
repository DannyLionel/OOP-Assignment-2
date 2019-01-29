//Dhanushga Lionel
//ID: 100616831
#include "Student.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void Student::setagreeToTeach()
{
	cout << "\nWould you like to Teach? Enter Yes or No:" << endl;
	cin >> agreeToTeach;//user input if they want to teach
}

void Student::setnumberCourses()
{
	cout << "\nPlease Enter number of courses you are taking" << endl;
	cin >> numberCourses;//user input number of courses
}

void Student::setMajorandDepartment()
{
	cout << "\nWhat is your Major?" << endl;
	cin >> major;//user input major
	cout << "What Department Are you From?" << endl;
	cin >> department;//user input department
}

void Student::WritetoFile()
{
	ofstream myFile;
	while (!myFile.fail()) {
		myFile.open("Student.txt");//open the file Student.txt
		myFile << getName() << endl << getYear() << endl << getMonth() << endl
			<< getDay() << endl << getSSN() << endl << agreeToTeach << endl
			<< numberCourses << endl << major << department << endl;//write to text file
	}
	myFile.close();//close the File
}

void Student::displayStudent()
{
	int Year1, Month1, Day1, SSN1, numofCourses1;
	int numofStudents = 1;//display how many students
	string Name1, Agree1, Department1, Major1, temp;
	ifstream File1;
	File1.open("Student.txt");//open file Student.txt
	cout << endl;
	while (!File1.eof())
	{
		File1 >> Name1 >> Year1 >> Month1 >> Day1 >> SSN1 >> Agree1 >>
			numofCourses1 >> Department1 >> Major1;
		cout << "Student Number:" << numofStudents++ << endl << "Student Information" << endl
			<< "Name: " << Name1 << endl << "Date of Birth (DOB): " <<
			Year1 << "-" << Month1 << "-" << Day1 << endl << "SSN Number: "
			<< SSN1 << endl;
		cout << "Do you agree to Teach? " << Agree1 << endl;
		cout << "Number of Courses: " << numofCourses1 << endl << "Department: "
			<< Department1 << endl << "Major: " << Major1 << endl;
		File1 >> Name1 >> Year1 >> Month1 >> Day1 >> SSN1 >> Agree1 >>
			numofCourses1 >> Department1 >> Major1;//write to txt file
		cout << endl;
	}
	File1.close();//close file
	cout << endl;
	cout << "Total Number of Students: " << numofStudents - 1;//calculate total student
	cout << endl;
}
