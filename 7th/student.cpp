#include "student.h"
#include <cstdio>
#include <string>
#include <cstring>
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

void student::modify(char idd[])
{
	int item;
	if (strcmp(id,idd)==0)
	{
		cout << "��ѧ������" << endl;
	}
	else
		cout << "��ѧ��������" << endl;
	printf("------------------\n");
	printf("1.�޸�����\n");
	printf("2.�޸�ѧ��\n");
	printf("3.�޸�����\n");
	printf("4.�޸�סַ\n");
	printf("------------------\n");
	printf("��ѡ���Ӳ˵����:");
	cin >> item;
	char *na=NULL;
	int ag;
	string add;
	switch (item)
	{
	case 1:
		cout << "�������µ�����" << endl;
		cin >> *na;
		if (na != NULL)
		{
			int len = strlen(na);

			this->name = new char[len + 1];

			strcpy(this->name, na);
		}
		break;
	case 2:
		cout << "�������µ�ѧ��" << endl;
		for (int i = 0; i < strlen(idd); i++)
		{
			cin >> idd[i];
		}
		strcpy(this->id, idd);
		break;
	case 3:
		cout << "�������µ�����" << endl;
		cin >>ag;
		age = ag;
		break;
	case 4:
		cout << "�������µ�סַ" << endl;
		cin >> add;
		address = add;
		break;
	default:cout << "����1-4֮��ѡ��" << endl;
	}
}

void student::display()
{
	cout << "��ѧ������ϢΪ:\n";
	cout << "������"<< name;
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
