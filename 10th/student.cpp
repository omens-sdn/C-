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

	srand(time(0));         // 每次产生新的随机数

	student stu[5] = { student("A",0,"20181199001","shandong",A),student("B",1,"20181199002","shanghai",B),student("C",1,"20181199003","shanghai",C), student("D",0,"20181199004","jiangsu",D),student("E",0,"20181199005","hubei",E) };
	cout << "当前已构建的学生类对象的个数为：" << student::number << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "第" << i + 1 << "个对象为：" << endl;
		stu[i].display();
	}
	cout << "（其中性别0对应女，1对应男）" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "第" << i + 1 << "个对象的" << endl;
		stu[i].birthday.display();
		cout << "第" << i + 1 << "个对象的所在学校的相关信息为：" << endl;
		stu[i].SCHOOL(stu[i].sch);
	}
	system("pause");
	return 0;
}

