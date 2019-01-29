//Dhanushga Lionel
//ID: 100616831
#ifndef DATE_H
#define DATE_H
class Date
{
public:
	Date();
	Date(int month1, int day1, int year1);
	void setDATE();
	void setMonth(int); //set month
	void setDay(int);//set day
	void setYear(int);//set year
	int getMonth();//get month
	int getDay();//get Day
	int getYear();//get year
private:
	int day;
	int month;
	int year;
};
#endif // !DATE_H

