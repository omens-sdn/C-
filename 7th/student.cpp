#include "student.h"
#include <cstdio>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
student::student()
{
	cout << "++无参构造函数被自动调用++" << endl;
}

student::student(const char *na, const char idd[], int ag, string add)
{
	cout << "++有参构造函数被自动调用++" << endl;

	if (na != NULL)
	{
		int len = strlen(na);

		name = new char[len + 1];

		strcpy(name, na);

		//strcpy(name, '\0');

	}
	for (int i = 0; i < strlen(idd); i++)
	{
		id[i] = idd[i];
	}
	id[strlen(idd)] = '\0';

	age = ag;

	address = add;
}
/*
student::student(const student &stu)
{
	cout << "++浅拷贝构造函数被自动调用++" << endl;

	this->name = stu.name;
	strcpy(this->id, stu.id);
	this->age = stu.age;
	this->address = stu.address;
}
*/
student::student(const student &stu)
{
	cout << "++(深)拷贝构造函数被自动调用++" << endl;

	if (stu.name != NULL)
	{
		int len = strlen(stu.name);

		this->name = new char[len + 1];

		strcpy(this->name, stu.name);

	}
	strcpy(this->id, stu.id);
	this->age = stu.age;
	this->address = stu.address;
}


char* student :: getname()
{
	return name;
}

void student::GET(int item)
{
	switch (item)
	{
	case 1:
		modify1(name);
		break;
	case 2:
		modify2(id);
		break;
	case 3:
		modify3(age);
		break;
	case 4:
		modify4(address);
		break;
	default:cout << "请在1-4之间选择" << endl;
	}
}

void student::modify1(char *name)
{
	cout << "请输入新的学生姓名：" << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> name[i];
	}
	//strcpy(name, '\0');
	strcpy(this->name, name);
}

void student::modify2(char id[])
{
	cout << "请输入新的学生学号：" << endl;
	for (int i = 0; i < strlen(id); i++)
	{
		cin >> id[i];
	}
	//strcpy(id, '\0');
	strcmp(this->id, id);
}

void student::modify3(int age)
{
	cout << "请输入新的学生年龄：" << endl;
	cin >> age;
	this->age = age;
}

void student::modify4(string address)
{
	cout << "请输入新的学生住址：" << endl;
	cin >> address;
	this->address = address;
}

void student::display()
{
	cout << "该学生的信息为:\n";
	cout << "姓名：" << name;
	cout << "\t学号：";
	for (int i = 0; i < strlen(id); i++)
	{
		cout << id[i];
	}
	cout << "\t年龄：" << age << "\t住址：" << address << endl;
}

student::~student()
{
	cout << "--析构函数被自动调用--" << endl;
}
