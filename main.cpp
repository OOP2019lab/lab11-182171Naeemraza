#pragma once 
#include"person.h"
#include"student.h"
#include"faculty.h"
int main()
{
	student s1("Ted",3.91,"thompson",22);
	faculty f1(2,420,"Richard","Karp",45);
	s1.print();
	cout<<endl;
	s1.printStudent();
	f1.printfaculty();
}