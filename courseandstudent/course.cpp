#include "course.h"
#include<iostream>
using namespace std;
namespace my
{
Course::Course()
{
}
Course::Course(const char* incourse)

{
	course = new char[strlen(incourse)];
	//printf("%s\n", incourse);
	strcpy(course, incourse);
	/*for (int i = 0; i<strlen(incourse); ++i)/
		course[i] = incourse[i];
		cout << "c";
	}*/
	//printf("%s\n", course);
}

Course::~Course()
{
}

char* Course::getname()
{
	return course;
}
void Course::addStudent( student* s)
{
	students.push_back(s);
}

void Course::removeStudentsFromCourse()
{
	students.clear();
}

void Course::addcourse(const char* e)
{
	strcpy(course, e);
}





ostream& operator<<(ostream& d, Course v)
 {
	 const char* e = v.course;
	printf_s("%s \n", e);
	for (int i = 0; v.students.size() > i; ++i)
	{
		const char* e = v.students[i]->getname();
		d << e << endl;
	}
	return d;
}

}

