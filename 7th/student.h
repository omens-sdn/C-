#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class student
{
private:
	char *name; 
	char id[12];
	int age; 
	string address;
public:
	/******���캯��******/
	student();

	student(const char *na, const char idd[], int ag, string add);

	student(const student &stu);

	/******��������******/

	~student();

	/******��ͨ����******/
	//student fun(student S);

	void modify(char idd[]);

	void display();
};

