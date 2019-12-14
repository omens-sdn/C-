#pragma once
#include<math.h>
#include<iostream>
using namespace std;
class Triangle
{
private:
	double a, b, c;
	double cir;
	double are;
public:
	Triangle(double aa = 3, double bb = 4, double cc = 5)
	{
		a = aa;
		b = bb;
		c = cc;
		this->circulate();
		this->area();
	}
	Triangle(const Triangle &t)
	{
		this->a = t.a;
		this->b = t.b;
		this->c = t.c;
		this->cir = t.cir;
		this->are = t.are;
	}
	~Triangle()
	{

	}

	void circulate()
	{
		cir = a + b + c;
	}
	void area()
	{
		double p;
		p = (a + b + c) / 2;
		are = sqrt(p*(p - a)*(p - b)*(p - c));
	}
	Triangle operator+(Triangle a)
	{
		Triangle temp;
		temp.are = are + a.are;
		return temp;
	}
	Triangle operator=(const Triangle &a)
	{
		this->a = a.a;
		this->b = a.b;
		this->c = a.c;
		this->cir = a.cir;
		this->are = a.are;
		return *this;
	}
	friend ostream &operator<<(ostream &out, const Triangle &b);
};

ostream &operator<<(ostream &out, const Triangle &b)
{
	out << b.a;
	out << "¡¢";
	out << b.b;
	out << "¡¢";
	out << b.c;
	out << ",";
	out << b.cir;
	out << ",";
	out << b.are;
	out << endl;
	return out;
}