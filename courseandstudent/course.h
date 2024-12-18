#pragma once
#include"Students.h"
#include<iostream>
#include<string>
#include<vector>
#include<ostream>
using namespace std;
namespace my
{
	class student;
class Course
{
private:
	char* course;
	vector<student*> students;
public:
	Course();
	Course(const char* incourse);
	~Course();
	char* getname();
	void addStudent(student*);
	void removeStudentsFromCourse();
	void addcourse(const char* e);
	friend ostream& operator<<(ostream& d, Course v);
};

}
