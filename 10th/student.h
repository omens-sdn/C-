#pragma once
#include <iostream>
#include <string>
using namespace std;

#include <stdlib.h>
#include <time.h>

#include <iomanip>

class student;        //向前引用
class school
{
private:
	string address;
public:
	school()
	{

	}
	school(string add)
	{
		address = add;
	}
	~school()
	{

	}

	friend student;
};

class date
{
private:
	int year;
	int month;
	int day;
	int age;
public:
	date()
	{

	}
	date(int ye,int mo,int da)
	{
		year = ye;
		month = mo;
		day = da;
	}
	date(const date &r)
	{
		this->year = r.year;
		this->month = r.month;
		this->day = r.day;
		this->age = 2019 - r.year;
	}
	~date()
	{

	}

	void display() const
	{
		cout << "出生日期为：" << year << "-" << month << "-" << day ;
		cout << "\t当前年龄为：" << age << endl;
	}
};

class student
{
private:
	string name; 
	bool gender; 
	string id; 
	double GPA;
public:
	school sch;
	date birthday;
	static int number;
	student()
	{
		number++;
	}
	~student()
	{
		number--;
	}
	student(string na,bool ge,string idd,string add,date birth):sch(add),birthday(birth)
	{
		number++;
		name = na;
		gender = ge;
		id = idd;
		GPA = (rand() % (400 - 0 + 1) + 0) / 100.0;   //产生在0-4之间的随机小数，精确到小数点后2位
	}

	void display()
	{
		cout << "姓名：" << name << "\t性别：" << gender << "\t学号：" << id << "\t绩点：" << fixed << setprecision(2) << GPA << endl;    /*输出精确到小数点后两位*/
	}

	void SCHOOL(school &sch)
	{
		cout << "地址：" << sch.address << endl;
	}
};
int student::number=0;

