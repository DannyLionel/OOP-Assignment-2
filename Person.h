//Dhanushga Lionel
//ID: 100616831
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
public:


	void setName(); //set name
	string getName();//get name

	void setSSN();//set SSN Number
	int getSSN();// get SSN Number

	void setdob();//Set date

	int getDay();//Get Day
	int getMonth();// Get Month
	int getYear();//Get Year

private:
	string Name;
	int day;
	int month;
	int year;
	int ssn;
};
#endif // !PERSON_H

