#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "student.h"
#include <string>
#include <iostream>
using namespace std;

student fun(student S)
{
	student T(S);

	return T;
}


int check(char* na,student stu[3])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(na,stu[i].getname()))
		{
			cout << "��ѧ������!" << endl;
		}
		else
			cout << "��ѧ��������!" << endl;
		break;
	}
	return i;
}


int main()
{
	student A;
	//char *name = new char[20];
	//strcpy(name, "zhao");
	//char id[] = new char[12];
	//strcpy(id, "20181199001");
	student B("zhao","20181199001", 20, "�ൺ");
	student C(B);
	student D("qian", "20181199002", 19, "����");
	student E = D;
	student F = fun(E);
	B.display();
	C.display();
	D.display();
	E.display();
	F.display();
	int a;
	cout << "�Ƿ���Ҫ�޸�ѧ����Ϣ����--1����--0����" << endl;
	cin >> a;
	if (a)
	{
		student stu[3] = { student("zhao","20181199001", 20, "�ൺ"),student("qian", "20181199002", 19, "����"),student("wang","20181199003",20,"̩��") };
		for (int i = 0; i < 3; i++)
		{
			stu[i].display();
		}
		char na[5];
		cout << "������Ҫ�޸�ѧ����������" << endl;
		for (int i = 0; i < 4; i++)
		{
			cin >> na[i];
		}
		int b=check(na, stu);
		int item;
		printf("------------------\n");
		printf("1.�޸�����\n");
		printf("2.�޸�ѧ��\n");
		printf("3.�޸�����\n");
		printf("4.�޸�סַ\n");
		printf("------------------\n");
		printf("��ѡ���Ӳ˵����:");
		cin >> item;
		stu[b].GET(item);
		cout << "�޸ĳɹ���" << endl;
		for (int i = 0; i < 3; i++)
		{
			stu[i].display();
		}
	}
	system("pause");
	return 0;

}
