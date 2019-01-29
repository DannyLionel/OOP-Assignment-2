//Dhanushga Lionel
//ID: 100616831
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Person.h"
#include <iostream>
using namespace std;
class Professor : public Person //inherited from Person Class
{
public:
	void setOffice(); //set the Office 
	void setNumofCourses(); //set number of courses prof teaches
	void setEmploymentStatus();//set employment status
private:
	string office;
	int numberOfCourses;
	string employmentStatus;

};
#endif // !PROFESSOR_H