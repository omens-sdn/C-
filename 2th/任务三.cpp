//�ж�ĳ���Ǹ���ĵڼ��ܺ͵ڼ���
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
	cout << "�������꣬�£��գ���ʽ��2019-9-17" << endl;
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
			cout << "�����������Ǹ���ĵ�" << x << "��,����ĵ�" << y << "�ܡ�" << endl;
		}
		else cout << "�������ڴ���" << endl;
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
			cout << "�����������Ǹ���ĵ�" << x << "��,����ĵ�" << y << "�ܡ�" << endl;
		}
		else cout << "�������ڴ���" << endl;
	}
	system("pause");
	return 0;
}