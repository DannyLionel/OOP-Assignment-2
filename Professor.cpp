//Dhanushga Lionel
//ID: 100616831
#include "Professor.h"
#include <iostream>
#include <string>
using namespace std;

void Professor::setOffice()
{
	cout << "\nEnter where the Office is:" << endl;
	cin >> office;//user input where the office is
}

void Professor::setNumofCourses()
{
	cout << "\nEnter the number of courses Professor Teaches: " << endl;
	cin >> numberOfCourses;//user inputs how many courses prof teaches
}

void Professor::setEmploymentStatus()
{
	cout << "\nWhat is the Employment Status:" << endl;
	cin >> employmentStatus;//user input employement status of prof
}
