#pragma once
#include<iostream>
using namespace std;
const double pi=3.1415926535;
class Location
{
	double x;
	double y;
public:
	Location()
	{

	}
	Location(double X, double Y)
	{
		x = X;
		y = Y;
		cout << "λ��������ڶ�ά����ϵ�е�����λ��Ϊ(" << x << "," << y << ")" << endl;
		cout << "Location x=" << x << ",y=" << y << endl;
	}
	~Location()
	{
		cout << "Destructing Location" << endl;
		getchar();
	}

	void move(double X, double Y)
	{
		cout << "Location move" << endl;
		x = X;
		y = Y;
		cout << "�޸ĺ��λ��������ڶ�ά����ϵ�е�����λ��Ϊ(" << x << "," << y << ")" << endl;
	}
};

class Point:public Location
{
public:
	Point()
	{

	}
	Point(double X, double Y):Location(X,Y)
	{
		cout << "Point form Location X=" << X<< ",Y=" << Y << endl;
	}
	~Point()
	{
		cout << "Destructing Point" << endl;
		getchar();
	}

	void move()
	{
		cout << "Point move" << endl;

	}
};
class Circle:public Point
{
	double r;
public:
	Circle()
	{

	}
	Circle(double X, double Y,double R):Point(X, Y)
	{
		r = R;
		cout << "Circle form Point X=" << X << ",Y=" << Y << endl;
		cout << "Circle r=" << r << endl;
	}
	~Circle()
	{
		cout << "Destructing Circle" << endl;
		getchar();
	}

	void draw()
	{
		cout<<"Circle draw"<<endl;
		double s;
		double c;
		s = pi * r*r;
		c = 2 * pi*r;
		cout << "Բ���������Ϊ" << s << "���ܳ�Ϊ" << c << endl;
	}
};