#include "student.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	date A(2000, 1, 26);
	date B(1999, 11, 6);
	date C(1999, 3, 12);
	date D(2000, 5, 19);
	date E(2000, 9, 30);

	srand(time(0));         // ÿ�β����µ������

	student stu[5] = { student("A",0,"20181199001","shandong",A),student("B",1,"20181199002","shanghai",B),student("C",1,"20181199003","shanghai",C), student("D",0,"20181199004","jiangsu",D),student("E",0,"20181199005","hubei",E) };
	cout << "��ǰ�ѹ�����ѧ�������ĸ���Ϊ��" << student::number << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i + 1 << "������Ϊ��" << endl;
		stu[i].display();
	}
	cout << "�������Ա�0��ӦŮ��1��Ӧ�У�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i + 1 << "�������" << endl;
		stu[i].birthday.display();
		cout << "��" << i + 1 << "�����������ѧУ�������ϢΪ��" << endl;
		stu[i].SCHOOL(stu[i].sch);
	}
	system("pause");
	return 0;
}

