#include "registrar.h"
#include <iostream>
using namespace std;
namespace my
{
	int registrar::findstudent(const char* w)
	{
		for (int i = 0; i < students.size(); i++) {
			int x = strcmp(students[i]->getname(), w);
			//cout << "x=   " << x;
			if (x == 0) return 1;
		}
		return 0;
	}

	int registrar::findcourse(const char* z)
	{
		for (int i = 0; i < courses.size(); i++) {
			int x = strcmp(courses[i]->getname(), z);
		
			if (x == 0) return 1;
		}
		return 0;
	}

	registrar::registrar()
	{

	}

	void registrar::Addcourse(const char* q)
	{
		Course* r;
		r = new Course(q);

		courses.push_back(r);
	}

	void registrar::addstudent(char const* e) {
		student* j = new student(e);
		students.push_back(j);
	
		
	}

	bool registrar::enrollstudentincourse(char const* namestudent, char const* coursename)
	{
		if (findstudent(namestudent) && findcourse(coursename)) {
			for (int i = 0; i < students.size(); i++) {
				int x = strcmp(students[i]->getname(), namestudent);
				if (x == 0) {
					students[i]->addcourse(coursename);
					return true;
				}
			}
		}
		return false;
	}

	bool registrar::canclecourse(const char* v)
	{
		
		
				for (int i = 0; i < students.size(); i++) {
					if (students[i]->canclecourse(v)) {
						return true;
						//students.erase(students.begin() + i);

					}
				}
				

			

		
		return false;
	}

	void registrar::clear()
	{
		students.clear();
		courses.clear();
	}




	ostream& operator<<(ostream& a, registrar& b)
	{
	//	a << b.courses.size();
		
		for (int i = 0; b.courses.size() > i; ++i) {
			if (i == 0) {
				printf("courses :");
			}
			printf("%s   ,", b.courses[i]->getname());
			
		}
		a << endl;
		for (int i = 0; b.students.size() > i; ++i) {
			if (i == 0) {
				printf("student :");
			}
			a << (*b.students[i]) << endl;
		}
		return a;
	}
}