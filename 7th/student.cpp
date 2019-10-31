#include "student.h"
#include <cstdio>
#include <string>
#include <cstring>
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

void student::modify(char idd[])
{
	int item;
	if (strcmp(id,idd)==0)
	{
		cout << "该学生存在" << endl;
	}
	else
		cout << "该学生不存在" << endl;
	printf("------------------\n");
	printf("1.修改姓名\n");
	printf("2.修改学号\n");
	printf("3.修改年龄\n");
	printf("4.修改住址\n");
	printf("------------------\n");
	printf("请选择子菜单编号:");
	cin >> item;
	char *na=NULL;
	int ag;
	string add;
	switch (item)
	{
	case 1:
		cout << "请输入新的姓名" << endl;
		cin >> *na;
		if (na != NULL)
		{
			int len = strlen(na);

			this->name = new char[len + 1];

			strcpy(this->name, na);
		}
		break;
	case 2:
		cout << "请输入新的学号" << endl;
		for (int i = 0; i < strlen(idd); i++)
		{
			cin >> idd[i];
		}
		strcpy(this->id, idd);
		break;
	case 3:
		cout << "请输入新的年龄" << endl;
		cin >>ag;
		age = ag;
		break;
	case 4:
		cout << "请输入新的住址" << endl;
		cin >> add;
		address = add;
		break;
	default:cout << "请在1-4之间选择" << endl;
	}
}

void student::display()
{
	cout << "该学生的信息为:\n";
	cout << "姓名："<< name;
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
