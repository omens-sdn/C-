//li3_9.cpp�����캯��Ӧ�þ���
#include<iostream>
using namespace std;
class Date
{private:
    int year,  month,  day;
public:
	//Date(int=2006  , int=10 , int=17 );                  	//���캯��ԭ������
    Date(int  , int , int );
    void Display( );
};	
//Date::Date(int y , int m , int d )            		//��������ʵ�ֹ��캯������ǰ�����������
Date::Date(int y=2006, int m=10, int d=17 )
{   cout<<"Executing constructor��\n";  	//�˾�Ϊ�����������������䣬��������
//���캯����ϵͳ�Զ�����
    year = y;                                    //��ɶ����ݳ�Ա�ĳ�ʼ��
    month = m;
    day = d;
}
void Date::Display()
{   cout<< year << "-" << month << "-" << day << endl;  
}
int main()
{   
	Date today;
	//Date today(2006,10,17);              		//�������ͬʱ��ɶ���ĳ�ʼ��
    cout<<"Today is:";
    today.Display();
	system("pause");
    return 0;
}