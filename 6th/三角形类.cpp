/*************************************************
** 功能 : 三角形类
** 作者 :
** 版本 : 2019-10-15 / 18:36
** 版权 : GNU General Public License(GNU GPL)
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
	void show();//展示对象内不同成员变量在内存中的分布规律
	~triangle();
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
		cout << "三边能构成三角形" << endl;
		return 1;
	}
	else
	{
		cout << "三边不能构成三角形" << endl;
		return 0;
	}
}
void triangle::putC(double x, double y, double z)
{
	double C;
	C = x + y + z;
	cout << "三角形的周长为" << C << endl;
}
void triangle::putS(double x, double y, double z)
{
	double S, p;
	p = (x + y + z) / 2;
	S = sqrt(p*(p - x)*(p - b)*(p - c));
	cout << "三角形的面积为" << S << endl;

}
void triangle::Display(double long1, double short1, double short2)
{
	if (long1*long1 <short1 * short1+ short2 * short2)
		cout << "该三角形为锐角三角形" << endl;
	else if (long1*long1 ==  short1 * short1+short2*short2)
		cout << "该三角形为直角三角形" << endl;
	else if (long1*long1 > short1 * short1+short2*short2)
		cout << "该三角形为钝角三角形" << endl;
}
triangle::~triangle()
{
	cout << "Destructor called." << endl;
}
//展示对象内不同成员变量在内存中的分布规律
void triangle::show()
{
	cout << "成员变量a的地址为" << &this->a << endl;
	cout << "成员变量b的地址为" << &this->b << endl;
	cout << "成员变量c的地址为" << &this->c << endl;
}
//
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
	cout << "请输入三角形三边边长：" << endl;
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
//任务一：
	triangle A;
	triangle B;
	triangle C;
	cout << "对象A的存储大小为：" << sizeof(A) << endl;
	cout << "类中成员变量的存储大小为：" << sizeof(double) * 3 << endl;
	cout << "类的不同对象在内存中的分布规律" << endl;
	cout << "对象A的地址为" << &A << endl;
	cout << "对象B的地址为" << &B << endl;
	cout << "对象C的地址为" << &C << endl;
	cout << "对象内不同成员变量在内存中的分布规律" << endl;
	A.show();
	system("pause");
	return 0;
}