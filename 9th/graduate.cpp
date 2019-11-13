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
	cout << "*****������ͨ��Ա������ʽ����о����ĵ������������Ϣ*****" << endl;
	cout << "������" << name << "\t�Ա�" << gender << "\t\tѧ�ţ�"<< id<< "\t��ѧ�ɼ���" << score << "\t�о�����" << research << "\tָ����ʦ��" << tutor << endl;
}
void graduate::display() const
{
	cout << "*****���ó���Ա������ʽ����о����ĵ������������Ϣ*****" << endl;
	cout << "������" << name << "\t�Ա�" << gender << "\t\tѧ�ţ�" << id << "\t��ѧ�ɼ���" << score << "\t�о�����" << research << "\tָ����ʦ��" << tutor << endl;
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
	const graduate A("jiang", 1, "20181199000", 60, "�����", "tang");
	graduate B(A);
	graduate stu[5] = { graduate("wang",0,"2018119901",88,"��ѧ","zhao") ,graduate("zhang",0,"2018119902",92,"Ӣ��","qian") ,graduate("li",1,"2018119903",65,"����","sun"),graduate("zhou",0,"2018119904",76,"��ʷ","wu"),graduate("huang",1,"2018119905",58,"����","wei") };
	A.display();
	B.display();
	cout << "����5���о�������" << endl;
	for (int i = 0; i < 5; i++)
	{
		stu[i].display();
	}
	cout << "�о��������ƽ���ɼ�Ϊ��" << endl;
	double x = graduate::grade / graduate::number;
	cout << x << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i + 1 << "���о�������ĳɼ��ȼ�Ϊ��" << endl;
		order(stu[i]);
	}
	system("pause");
	return 0;
}