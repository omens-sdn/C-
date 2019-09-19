//求三角形面积
#include<cmath>
#include<stdio.h>
#include<iostream>
using namespace std;
float main()
{
	float C,S,a,b,c;
	cout << "请输入三角形三条边a,b,c：" << endl;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		C = (a + b + c) / 2;
		S = sqrt(C*(C - a)*(C - b)*(C - c));
		cout << "该三角形的面积为" << S << endl;
	}
	else
	{
		cout << "输入a,b,c不能构成三角形！" << endl;
	}
	system("pause");
	return 0;
}