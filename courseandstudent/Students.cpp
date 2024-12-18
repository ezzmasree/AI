#include "Students.h"
#include<iostream>
using namespace std;
namespace my {

	student::student(char const* inname)
	{
		strcpy(student1, inname);
	}

	student::~student()
	{
	}

	char* student::getname()
	{
		return student1;
	}

	void student::addcourse(const char*q)
	{
		Course* r;
		r = new Course(q);

		courses.push_back(r);
	}

	void student::removefromcourse(Course* c)
	{
		courses.clear();
	}

	void student::addstudentname(char* w)
	{
		strcpy(student1, w);
	}

	bool student::canclecourse(const char* w)
	{
		for (int i = 0; courses.size() > i; i++) {
			int x = strcmp(courses[i]->getname(), w);
			if (x == 0) {
				courses.erase(courses.begin() + i);
				return true;
			}
		}
		return false;
	}


	ostream& operator<<(ostream& a, student s)
	{
		printf_s("%s \n", s.student1);
		for (int i = 0; s.courses.size() > i; ++i)
		{
			if (i == 0) {
				printf("courses for student:"); 
		}
			const char* e = s.courses[i]->getname();
			a << "   "<<e;
		}
		return a;
	}
}
