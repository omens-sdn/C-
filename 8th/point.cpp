#include "point.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;


point::point()
{
	cout << "无参构造函数被调用" << endl;

}

point::point(double a, double b)
{
	cout << "有参构造函数被调用" << endl;
	x = a;
	y = b;
}

point:: point(const point& r)
{
	cout << "拷贝构造函数被调用" << endl;
	this->x = r.x;
	this->y = r.y;
}

point::~point()
{
	cout << "析构函数被调用" << endl;
}

double point::GetX()
{
	return x;
}

double point::GetY()
{
	return y;
}

void point::SetX(double ax)
{
	x = ax;
}

void point::SetY(double bx)
{
	y = bx;
}

void point::SwapAxis(double *xa, double *xb)
{
	double *temp;
	temp = xa;
	xa = xb;
	xb = temp;
}


double GetLength(point& A, point& B)
{
	//cout << abs(&A - &B) << endl;
	double xx;

	double yy;
	
	xx =pow( (A.x - B.x), 2);

	yy = pow((A.y - B.y), 2);

	double a;

	a = sqrt(xx + yy);

	return a;
}

int main()
{
	point array_stack[10];

	point *array_heap = new point[10];

	for (int i = 0; i < 10; i++)
	{
		double j = i;
		array_stack[i].SetX(j) ;
		array_stack[i].SetY(2*j);
	}

	for (int i = 0; i < 10; i++)
	{
		double j = i;
		(array_heap + i)->SetX(j+2);
		(array_heap + i)->SetY(j*j);
	}

	cout << "数组array_stack的值为：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "(" << array_stack[i].GetX ()<< "," << array_stack[i].GetY() << ")" << endl;
	}
	cout << "数组array_heap的值为：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "(" << array_heap[i].GetX() << "," << array_heap[i].GetY ()<< ")" << endl;
	}

	cout << "***********计算这两个对象数组中相同位置上两个对象之间的距离**********" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "第" << i+1 << "个位置上两个对象之间的距离为：" << endl;
		cout << GetLength(array_stack[i], *(array_heap + i)) << endl;
	}

	delete[] array_heap;

	system("pause");

	return 0;
}