//ax^2+bx+c=0
#include<cmath>
#include<stdio.h>
#include<iostream>
using namespace std;
float main()
{
	float a, b, c;
	float x1, x2, x, z, s, realpart, imagpart;
	cout << "������a,b,c:" << endl;
	cin >> a >> b >> c;
	cout << a << "x^2+" << b << "x+" << c << "=0" << endl;
	s = b * b - 4 * a*c;
	if (s > 0)
	{
		cout << "����������ʵ����" << endl;
		z = sqrt(s);
		x1 = (-b + z) / (2 * a);
		x2 = (-b - z) / (2 * a);
		cout << "x1=" << x1 << "," << "x2=" << x2 << endl;
	}
	else if (s == 0)
	{
		cout << "������һ��ʵ����" << endl;
		z = sqrt(s);
		x = (-b + z) / (2 * a);
		cout << "x=" << x << endl;
	}
	else
	{
		cout << "���������������" << endl;
		z = sqrt(-s);
		realpart = -b / (2 * a);
		imagpart = z / (2 * a);
		cout << "x1=" << realpart << "+" << imagpart << "i" << "," << "x2=" << realpart << "-" << imagpart << "i" << endl;
	}
	system("pause");
	return 0;
}
