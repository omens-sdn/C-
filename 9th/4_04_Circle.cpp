//第2个文件: example4_04_Circle.cpp, 是圆类的实现
#include "4_04_Circle.h"                    //包含头文件
double Circle::Area( )                  //求圆的面积
{
    //Radius*=2;
    double a=GetRadius();
    //PI=3.14;
	return PI*Radius*Radius;
}
double  Circle::Circumference()         //求圆的周长
{	return 2*PI*Radius;
}
double Circle::GetRadius( )const         //常成员函数，获取半径值的实现代码，此例新增加
{
    //Radius*=2;
    //double a=Area();
	return Radius;
}
