//Dhanushga Lionel
//ID: 100616831
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
}

Date::Date(int month1, int day1, int year1)
{
}
void Date::setDATE()
{
	cout << "\nPlease Enter the Date:" << endl;
	cout << "Please Enter the Year:" << endl;
	cin >> this->year;
	cout << "\nPlease Enter the Month:" << endl;
	cin >> this->month;
	cout << "\nPlease Enter the Day:" << endl;
	cin >> this->day;
}

void Date::setMonth(int mon)
{
	if (mon >= 1 && mon <= 12)//check if months are correct
	{
		this->month = mon;
	}
	else
	{
		this->month = 1;
	}
}

void Date::setDay(int d1)
{
	if (d1 >= 1 && d1 <= 30) //average number of days per month is 30.42
	{
		this->day = d1;
	}
	else
	{
		this->day = 01;
	}
}

void Date::setYear(int y1)
{
	if (y1 > 0001)
	{
		this->year = y1;//set year
	}
}

int Date::getMonth()
{
	return this->month;//return month
}

int Date::getDay()
{
	return this->day;//return day
}

int Date::getYear()
{
	return this->year;//return year
}
