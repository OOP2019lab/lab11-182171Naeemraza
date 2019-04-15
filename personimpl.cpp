#include"person.h"
person::person(string a,string b,int c):firstname(a),lastname(b),age(c)
{
	cout<<"overloaded constructor of person invoke:"<<endl;
}
person::~person()
{
	cout<<"Default deconstructor of person invoke:"<<endl;
}
void person::sefirstname(string a)
{
	firstname=a;
}
string person::getfirstname()
{
	return firstname;
}
void person::setlastname(string a)
{
	lastname=a;
}
string person:: getlastname()
{
	return lastname;
}
void person::setage(int a)
{
	age=a;
}
int person:: getage()
{
	return age;
}
void person::print()
{
	cout<<firstname<<" "<<lastname<<" is "<<age<<" year old";
}