#pragma once
#include<iostream>
#include<stdio.h>
#include"person.h"
using namespace std;
class faculty:public person
{
	int coursecount;
	int three_digit_extension_nmb;
public:
	faculty(int ,int ,string ,string ,int );
	faculty();
	~faculty();
	int getcoursecount();
	void setcoursecount(int);
	int get_three_digit_extension_nmb();
	void setcoursecount_three_digit_extension_nmb(int);
	void printfaculty();
};