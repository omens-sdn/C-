//判断某天是该年的第几周和第几天
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int Leapyear(int year)
{
	if ((year % 4 == 0 && year & 100 != 0)|| year % 400 == 0)
	{
		return 1;
	}
	else 
		return 0;
}
int main()
{
	int year, month, day;
	int x=0,y,i;
	int time[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char ch;
	cout << "请输入年，月，日，格式：2019-9-17" << endl;
	cin >> year >> ch >> month >> ch >> day;
	if (Leapyear(year))
	{
		time[1] += 1;
		if (day <= time[month-1])
		{
			for (i = 0; i < month - 12; i++)
			{
				x += time[i];
			}
			x += day;
			y = x / 7 + 1;
			cout << "所输入这天是该年的第" << x << "天,该年的第" << y << "周。" << endl;
		}
		else cout << "输入日期错误！" << endl;
	}
	else
	{
		if (day <= time[month-1])
		{
			for (i = 0; i < month - 1; i++)
			{
				x += time[i];
			}
			x += day;
			y = x / 7 + 1;
			cout << "所输入这天是该年的第" << x << "天,该年的第" << y << "周。" << endl;
		}
		else cout << "输入日期错误！" << endl;
	}
	system("pause");
	return 0;
}