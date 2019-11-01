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
	/******构造函数******/
	student();

	student(const char *na, const char idd[], int ag, string add);

	student(const student &stu);

	/******析构函数******/

	~student();

	/******普通函数******/
	char* getname(); 
	void GET(int item);

	void modify1(char *name);
	void modify2(char id[]);
	void modify3(int age);
	void modify4(string address);


	void display();
};

