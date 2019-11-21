#pragma once
#include <iostream>
#include <string>
using namespace std;

#include <stdlib.h>
#include <time.h>

#include <iomanip>

class student;        //��ǰ����
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
		cout << "��������Ϊ��" << year << "-" << month << "-" << day ;
		cout << "\t��ǰ����Ϊ��" << age << endl;
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
		GPA = (rand() % (400 - 0 + 1) + 0) / 100.0;   //������0-4֮������С������ȷ��С�����2λ
	}

	void display()
	{
		cout << "������" << name << "\t�Ա�" << gender << "\tѧ�ţ�" << id << "\t���㣺" << fixed << setprecision(2) << GPA << endl;    /*�����ȷ��С�������λ*/
	}

	void SCHOOL(school &sch)
	{
		cout << "��ַ��" << sch.address << endl;
	}
};
int student::number=0;

