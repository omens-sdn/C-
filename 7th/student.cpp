#include "student.h"
#include <cstdio>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
student::student()
{
	cout << "++�޲ι��캯�����Զ�����++" << endl;
}

student::student(const char *na, const char idd[], int ag, string add)
{
	cout << "++�вι��캯�����Զ�����++" << endl;

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
	cout << "++ǳ�������캯�����Զ�����++" << endl;

	this->name = stu.name;
	strcpy(this->id, stu.id);
	this->age = stu.age;
	this->address = stu.address;
}
*/
student::student(const student &stu)
{
	cout << "++(��)�������캯�����Զ�����++" << endl;

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
	default:cout << "����1-4֮��ѡ��" << endl;
	}
}

void student::modify1(char *name)
{
	cout << "�������µ�ѧ��������" << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> name[i];
	}
	//strcpy(name, '\0');
	strcpy(this->name, name);
}

void student::modify2(char id[])
{
	cout << "�������µ�ѧ��ѧ�ţ�" << endl;
	for (int i = 0; i < strlen(id); i++)
	{
		cin >> id[i];
	}
	//strcpy(id, '\0');
	strcmp(this->id, id);
}

void student::modify3(int age)
{
	cout << "�������µ�ѧ�����䣺" << endl;
	cin >> age;
	this->age = age;
}

void student::modify4(string address)
{
	cout << "�������µ�ѧ��סַ��" << endl;
	cin >> address;
	this->address = address;
}

void student::display()
{
	cout << "��ѧ������ϢΪ:\n";
	cout << "������" << name;
	cout << "\tѧ�ţ�";
	for (int i = 0; i < strlen(id); i++)
	{
		cout << id[i];
	}
	cout << "\t���䣺" << age << "\tסַ��" << address << endl;
}

student::~student()
{
	cout << "--�����������Զ�����--" << endl;
}
