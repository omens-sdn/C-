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
	double score;         //入学成绩
	string research;      //研究领域
	string tutor;         //指导教师
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
