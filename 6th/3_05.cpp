//example_3_5.cpp：圆点访问形式的应用举例
#include"Date1.h"
int main()
{
	Date today,*t;
    today.SetDate(2006,10,17);      		//通过对象以圆点形式访问成员函数
    cout<<"One day is:";
    today.Display();               			//输出日期的信息
    t=&today;
    (*t).SetDate(2007,12,18);       		//通过指针以圆点形式访问成员函数
    cout<<"the other day is:";
    (*t).Display();                			//输出日期的信息
	//cout << today.year << "-" << today.month << "-" << today.day << endl;
	cout << today.GetYear()<< "-" << today.GetMonth() << "-" << today.GetDay() << endl;
	system("pause");
	   return 0;
}