//��2���ļ�: example4_04_Circle.cpp, ��Բ���ʵ��
#include "4_04_Circle.h"                    //����ͷ�ļ�
double Circle::Area( )                  //��Բ�����
{
    //Radius*=2;
    double a=GetRadius();
    //PI=3.14;
	return PI*Radius*Radius;
}
double  Circle::Circumference()         //��Բ���ܳ�
{	return 2*PI*Radius;
}
double Circle::GetRadius( )const         //����Ա��������ȡ�뾶ֵ��ʵ�ִ��룬����������
{
    //Radius*=2;
    //double a=Area();
	return Radius;
}
