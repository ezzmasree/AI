#include<iostream>

#include"course.h"
#include"Students.h"
#include"registrar.h"
using namespace std;
using namespace my;
int main()
{
	registrar reg;

	
	cout << "NO courses or students added yet \n";
	cout << reg; cout << endl;
	cout << "AddCourse DS10636211 \n";
	reg.Addcourse("DS10636211");
	cout << reg;
	cout << endl;
	cout << "AddStudent Ali_Ahmad\n";
	reg.addstudent("Ali_Ahmad");
	cout << reg << endl;
	cout << "AddCourse Java10636212\n";
	reg.Addcourse("Java10636212");
	cout << reg << endl;
	cout << "EnrollStudentInCoures Ali_Ahmad DS10636211\n";
	reg.enrollstudentincourse("Ali_Ahmad", "DS10636211");
	cout << "Ali_Ahmad Java10636212\n";
	cout << reg << endl;
	reg.enrollstudentincourse("Ali_Ahmad", "Java10636212");
	cout << reg << endl;
	cout << "EnrollStudentInCourse Haya_Samaana DS10636211\n";
	cout << "Should fail since Haya_Samaana is not a student.\n";
	reg.enrollstudentincourse("Haya_asmaana", "DS10636211");
	cout << reg<<endl;
	cout << "CancelCourse DS10636211\n";
	reg.canclecourse("DS10636211");
	cout << reg << endl;
	cout << "Clear system to start new semester\n";
	reg.clear();
	cout << reg << endl;

	


 }

