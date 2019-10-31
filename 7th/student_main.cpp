#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "student.h"
#include <iostream>
using namespace std;

const int N = 3;

student fun(student S)
{
	student T(S);

	return T;
}

int main()
{
	//student stu[N];
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
/*
	char idd[12];
	cout << "请输入要修改信息的学生的学号" << endl;
	for (int i = 0; i < 12; i++)
	{
		cin >> idd[i];
	}
	student stu;
	stu.modify(idd);
*/
	//system("pause");
	return 0;

}
