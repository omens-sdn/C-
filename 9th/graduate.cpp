#define _CRT_SECURE_NO_WARNINGS

#include "graduate.h"
#include <string>
#include <iostream>
using namespace std;

graduate::graduate()
{
	name = NULL;
}
graduate::graduate(const char *na, bool ge, string idd, double sco, string re, string tu)
{
	if (na != NULL)
	{
		int len = strlen(na);

		name = new char[len + 1];

		strcpy(name, na);
	}
	else name = NULL;
	gender = ge;
	id = idd;
	score = sco;
	research = re;
	tutor = tu;
	number++;
	grade += score;
}
graduate::graduate(const graduate &g)
{
	if (g.name != NULL)
	{
		int len = strlen(g.name);

		name = new char[len + 1];

		strcpy(name, g.name);
	}
	this->gender = g.gender;
	this->id = g.id;
	this->score = g.score;
	this->research = g.research;
	this->tutor = g.tutor;
}
graduate::~graduate()
{
	if (name!=NULL)
	{
		delete[] name;
	}
}

void graduate::display()
{
	cout << "*****采用普通成员函数形式输出研究生的单项基本数据信息*****" << endl;
	cout << "姓名：" << name << "\t性别：" << gender << "\t\t学号："<< id<< "\t入学成绩：" << score << "\t研究领域：" << research << "\t指导教师：" << tutor << endl;
}
void graduate::display() const
{
	cout << "*****采用常成员函数形式输出研究生的单项基本数据信息*****" << endl;
	cout << "姓名：" << name << "\t性别：" << gender << "\t\t学号：" << id << "\t入学成绩：" << score << "\t研究领域：" << research << "\t指导教师：" << tutor << endl;
}

void order(graduate stu)
{
	int s = stu.score / 10;
	switch (s)
	{
	case 10:
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	default:
		cout << "E" << endl;
		break;
	}
}


int main()
{
	const graduate A("jiang", 1, "20181199000", 60, "计算机", "tang");
	graduate B(A);
	graduate stu[5] = { graduate("wang",0,"2018119901",88,"数学","zhao") ,graduate("zhang",0,"2018119902",92,"英语","qian") ,graduate("li",1,"2018119903",65,"物理","sun"),graduate("zhou",0,"2018119904",76,"历史","wu"),graduate("huang",1,"2018119905",58,"地理","wei") };
	A.display();
	B.display();
	cout << "生成5个研究生对象" << endl;
	for (int i = 0; i < 5; i++)
	{
		stu[i].display();
	}
	cout << "研究生对象的平均成绩为：" << endl;
	double x = graduate::grade / graduate::number;
	cout << x << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "第" << i + 1 << "个研究生对象的成绩等级为：" << endl;
		order(stu[i]);
	}
	system("pause");
	return 0;
}