//Dhanushga Lionel
//ID: 100616831
#include "Course.h"
#include "Date.h"
#include "Person.h"
#include "Professor.h"
#include "Section.h"
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int enter = 1;
	Course c1;
	Student s1;
	while (enter)
	{
		cout << "\nOptions: 1.Add Student\n2.Add New Course\n3.Display Course\n4.Display Students\n5.Exit\n" << endl;
		cout << "Enter your option:" << endl;
		cin >> enter;
		switch (enter)
		{
		case 1:
			s1.setName();//name
			s1.setdob();//dob
			s1.setSSN();//ssn
			s1.setagreeToTeach();
			s1.setnumberCourses();
			s1.setMajorandDepartment();
			s1.WritetoFile();//Sutdent.txt
			cout << "New Student Info Added Success!" << endl;
			break;
		case 2:
			c1.courseDetail();
			c1.WritetoFile1();//Course.txt
			cout << "New Courses Added Success!" << endl;
			break;
		case 3:
			c1.displayCourse();//display course Info
			break;
		case 4:
			s1.displayStudent();//display student info
			break;
		case 5:
			exit(1); //exit program
			break;
		default: //for invalid entry
			cout << "Invalid Entry" << endl;
			enter = 1;
		}

	}
	system("pause");
	return 0;
}