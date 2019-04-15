#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
	string firstname;
	string lastname;
protected:
	int age;
public:
	person(string a,string b,int c);
	person();
	~person();
	void sefirstname(string);
	string getfirstname();
	void setlastname(string);
	string getlastname();
	void setage(int);
	int getage();
	void print();
};
