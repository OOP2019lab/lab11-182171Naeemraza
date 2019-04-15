#include"student.h"
student::student(string a,float b,string c,int d):person(a,c,d)
{
	cout<<"overloaded constructor of student invoke:"<<endl;
	
	cgpa=b;
}
student::~student()
{
	cout<<"Default deconstructor of student invoke:"<<endl;
}
void student::setcgpa(float a)
{
	cgpa=a;
}
float student::getcgpa()
{
	 return cgpa;
}
void student::printStudent()
{
	print();
	cout<<" , cgpa is "<<cgpa<<endl;
}
