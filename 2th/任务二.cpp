//�����������
#include<cmath>
#include<stdio.h>
#include<iostream>
using namespace std;
float main()
{
	float C,S,a,b,c;
	cout << "������������������a,b,c��" << endl;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		C = (a + b + c) / 2;
		S = sqrt(C*(C - a)*(C - b)*(C - c));
		cout << "�������ε����Ϊ" << S << endl;
	}
	else
	{
		cout << "����a,b,c���ܹ��������Σ�" << endl;
	}
	system("pause");
	return 0;
}