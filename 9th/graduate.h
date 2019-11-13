#pragma once
#include <string>
#include <iostream>
using namespace std;
class graduate
{
private:
	char *name;
	bool gender;
	string id; 
	double score;         //��ѧ�ɼ�
	string research;      //�о�����
	string tutor;         //ָ����ʦ
public:
	graduate();
	graduate(const char *na,bool ge, string idd,double sco,string re,string tu);
	graduate(const graduate &g);
	~graduate();

	void display();
	void display() const;

	static int number;
	static double grade;

	friend void order(graduate stu);

};
int graduate::number = 0;
double graduate::grade = 0;
