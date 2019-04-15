#pragma once
#include<iostream>
#include<stdio.h>
#include"person.h"
using namespace std;
class student:public person
{
	float cgpa;
public:
	student(string a,float b,string c,int);
	student();
	~student();
	float getcgpa();
	void setcgpa(float);
	 void printStudent();
};