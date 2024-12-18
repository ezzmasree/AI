#pragma once
#include<vector>
#include<iostream>
#include<ostream>
#include"Students.h"
#include"course.h"
namespace my
{
	class student;
	class Course;
class registrar
{
private:
	vector<student*> students;
	vector<Course*> courses;
	int findstudent(const char* w);
	int findcourse(const char* z);
public:
	registrar();
	void Addcourse(const char * q);
	void addstudent(const char* e);
	bool enrollstudentincourse(const char* namestudent, const char *coursename);
	bool canclecourse(const char* v);
	void clear();
	friend ostream& operator<<(ostream& os, registrar& b);


};
}
