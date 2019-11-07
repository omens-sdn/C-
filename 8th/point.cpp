#include "point.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;


point::point()
{
	cout << "�޲ι��캯��������" << endl;

}

point::point(double a, double b)
{
	cout << "�вι��캯��������" << endl;
	x = a;
	y = b;
}

point:: point(const point& r)
{
	cout << "�������캯��������" << endl;
	this->x = r.x;
	this->y = r.y;
}

point::~point()
{
	cout << "��������������" << endl;
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

	cout << "����array_stack��ֵΪ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "(" << array_stack[i].GetX ()<< "," << array_stack[i].GetY() << ")" << endl;
	}
	cout << "����array_heap��ֵΪ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "(" << array_heap[i].GetX() << "," << array_heap[i].GetY ()<< ")" << endl;
	}

	cout << "***********����������������������ͬλ������������֮��ľ���**********" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "��" << i+1 << "��λ������������֮��ľ���Ϊ��" << endl;
		cout << GetLength(array_stack[i], *(array_heap + i)) << endl;
	}

	delete[] array_heap;

	system("pause");

	return 0;
}