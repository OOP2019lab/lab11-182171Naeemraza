#include"faculty.h"
faculty::faculty(int a,int b,string c,string d,int e):person(c,d,e)
{
	cout<<"overloaded constructor of faculty invoke:"<<endl;
	coursecount=a;
	three_digit_extension_nmb=b;
}
faculty::~faculty()
{
	cout<<"Default deconstructor of faculty invoke:"<<endl;
}
int faculty:: getcoursecount()
{
	return coursecount;
}
void faculty::setcoursecount(int a)
{
	coursecount=a;
}
int faculty::get_three_digit_extension_nmb()
{
	return three_digit_extension_nmb;
}
void faculty::setcoursecount_three_digit_extension_nmb(int a)
{
	three_digit_extension_nmb=a;
}
void faculty::printfaculty()
{
	print();
	cout<<" have "<<coursecount<<" courses and have extension number "<<three_digit_extension_nmb; 
	cout<<endl;
}