/*************************************************
** ���� : ��������
** ���� :
** �汾 : 2019-10-15 / 18:36
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
private:
	double a;
	double b;
	double c;
public:
	void setdate(double, double, double);
	int Judge(double, double, double);
	void putC(double, double, double);
	void putS(double, double, double);
	void Display(double, double, double);
};
void triangle::setdate(double x, double y, double z)
{
	a = x;
	b = y;
	c = z;
}
int triangle::Judge(double x, double y, double z)
{
	if (x + y > z&&x + z > y&&y + z > x)
	{
		cout << "�����ܹ���������" << endl;
		return 1;
	}
	else
	{
		cout << "���߲��ܹ���������" << endl;
		return 0;
	}
}
void triangle::putC(double x, double y, double z)
{
	double C;
	C = x + y + z;
	cout << "�����ε��ܳ�Ϊ" << C << endl;
}
void triangle::putS(double x, double y, double z)
{
	double S, p;
	p = (x + y + z) / 2;
	S = sqrt(p*(p - x)*(p - b)*(p - c));
	cout << "�����ε����Ϊ" << S << endl;

}
void triangle::Display(double long1, double short1, double short2)
{
	if (long1*long1 <short1 * short1+ short2 * short2)
		cout << "��������Ϊ���������" << endl;
	else if (long1*long1 ==  short1 * short1+short2*short2)
		cout << "��������Ϊֱ��������" << endl;
	else if (long1*long1 > short1 * short1+short2*short2)
		cout << "��������Ϊ�۽�������" << endl;
}
void swap(double &m, double &n)
{
	double temp;
	temp = m;
	m = n;
	n = temp;
}
void MAX(double &m, double &n, double &t)
{
	if (m >= n)
	{
		if (m < t) swap(m,t);
	}
	else
	{
		if (n >= t) swap(m,n);
		else swap(m,t);
	}
}
/*
double MIN(double m, double n, double t)
{
	if (m <= n)
	{
		if (m <= t) return m;
		else return t;
	}
	else
	{
		if (n <= t) return n;
		else return t;
	}
}
void sort(double &x1, double &y1, double &z1)
{
	double temp1=0,temp2=0,temp3=0;
	temp1 = MAX(x1, y1, z1);
	temp3 = MIN(x1, y1, z1);
	if (temp1 != x1 || temp3 != x1)
		temp2 = x1;
	else if (temp1 != y1 && temp3 != y1)
		temp2 = y1;
	else if (temp1 != z1 && temp3 != z1)
		temp2 = z1;
	x1 = temp1;
	y1 = temp2;
	z1 = temp3;
}
*/
int main()
{
	double x;
	double y;
	double z;
	cout << "���������������߱߳���" << endl;
	cin >> x >> y >> z;
	triangle TRI;
	TRI.setdate(x, y, z);
	if (TRI.Judge(x, y, z))
	{
		TRI.putS(x, y, z);
		TRI.putC(x, y, z);
		MAX(x, y, z);
		//sort(x, y, z);
		TRI.Display(x, y, z);
	}
	system("pause");
	return 0;
}