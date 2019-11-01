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
			cout << "该学生存在!" << endl;
		}
		else
			cout << "该学生不存在!" << endl;
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
	student B("zhao","20181199001", 20, "青岛");
	student C(B);
	student D("qian", "20181199002", 19, "济南");
	student E = D;
	student F = fun(E);
	B.display();
	C.display();
	D.display();
	E.display();
	F.display();
	int a;
	cout << "是否需要修改学生信息（是--1，否--0）？" << endl;
	cin >> a;
	if (a)
	{
		student stu[3] = { student("zhao","20181199001", 20, "青岛"),student("qian", "20181199002", 19, "济南"),student("wang","20181199003",20,"泰安") };
		for (int i = 0; i < 3; i++)
		{
			stu[i].display();
		}
		char na[5];
		cout << "请输入要修改学生的姓名：" << endl;
		for (int i = 0; i < 4; i++)
		{
			cin >> na[i];
		}
		int b=check(na, stu);
		int item;
		printf("------------------\n");
		printf("1.修改姓名\n");
		printf("2.修改学号\n");
		printf("3.修改年龄\n");
		printf("4.修改住址\n");
		printf("------------------\n");
		printf("请选择子菜单编号:");
		cin >> item;
		stu[b].GET(item);
		cout << "修改成功！" << endl;
		for (int i = 0; i < 3; i++)
		{
			stu[i].display();
		}
	}
	system("pause");
	return 0;

}
