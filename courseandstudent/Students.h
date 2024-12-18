#pragma once
#include"course.h"
#include<vector>
#include<ostream>
using namespace std;
namespace my
{
	class Course;
class student
{
private:
	char student1 [20];
	vector<Course*> courses;
public:
	student(char const * inname);
	~student();
	char* getname();
	void addcourse(const char * c);
	void removefromcourse(Course*c);
	void addstudentname(char* w); 
	friend ostream& operator<<(ostream& a, student s);
	bool canclecourse(const char* w);
};
}
