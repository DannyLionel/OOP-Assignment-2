//Dhanushga Lionel
//ID: 100616831
#ifndef SECTION_H
#define SECTION_H
#include "Course.h"

class Section : public Course
{
public:
	void enroll(); //enroll in a course
private:
	int sectionNo;
	int roomSeatingCapacity;
	string dayOfWeek;
	string timeOfDay;
};
#endif // !SECTION_H
