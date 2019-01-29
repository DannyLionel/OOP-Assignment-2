//Dhanushga Lionel
//ID: 100616831
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

void Person::setName()
{
	cout << "Please Enter the Name:" << endl;//ask user input for name
	cin >> Name;//user input name

}

string Person::getName()
{
	return Name;//get the name
}

void Person::setSSN()
{
	cout << "\nPlease Enter the SSN Number: " << endl;//asking user input for SSN number
	cin >> ssn; //input ssn
}

int Person::getSSN()
{
	return ssn;//return ssn number
}

void Person::setdob()
{
	cout << "\nPlease Enter the Date:" << endl;
	cout << "Please Enter the Year:" << endl;
	cin >> year;
	cout << "\nPlease Enter the Month:" << endl;
	cin >> month;
	cout << "\nPlease Enter the Day:" << endl;
	cin >> day;
}

int Person::getDay()
{
	return day;//return day
}

int Person::getMonth()
{
	return month;//return month
}

int Person::getYear()
{
	return year;//return year
}
