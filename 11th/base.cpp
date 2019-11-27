#include "base.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "1、派生类全盘接受基类的所有本类成员，其中包括基类的普通公有成员，保护成员和私有成员。" << endl;
	cout << "基类base的大小为: " << sizeof(base) << endl;
	cout << "派生类derived1的大小为: " << sizeof(derived1) << endl;
	cout << "派生类derived2的大小为: " << sizeof(derived2) << endl;
	cout << "派生类derived3的大小为: " << sizeof(derived3) << endl;
	cout << "---------------------------------" << endl;

	cout << "3、派生类对象被建立时派生类调用构造函数的次序。" << endl;
	base a;
	cout << "---------------" << endl;
	derived1 b;
	cout << "---------------" << endl;
	derived2 c;
	cout << "---------------" << endl;
	derived3 d;
	cout << "---------------" << endl;

	base::statistic();

	cout << "---------------------------------" << endl;

	cout << "2、根据继承类数据成员能否在类内或类外被访问的问题，探索分析三种不同继承方式各自的特点" << endl;
	b.a = 1000;          //子类内仍然为公有成员,类内外均可访问
	//b.b = 1000;        //子类内仍然为保护成员,类内外均可访问
	//b.c = 1000;        //基类私有成员在子类内外均不可见
	b.print();               //访问的是子类自身的公有成员
	b.base::print();         //子类内仍然为公有成员,类内外均可访问
	//c.a = 2000;        //变为子类保护成员,无法类外直接访问
	//c.b = 2000;        //变为子类保护成员,无法类外直接访问
	//c.c = 2000;        //基类私有成员在子类内外均不可见
	c.print();               //访问的是子类自身的公有成员
	//c.base::print();       //变为子类的保护函数,不可类外访问
	//d.a = 3000;        //变为子类的私有成员,无法类外直接访问
	//d.b = 3000;        //变为子类的私有成员,无法类外直接访问
	//d.c = 3000;        //基类私有成员在子类内外均不可见
	d.print();               //访问的是子类自身的公有成员
	//d.base::print();       //变为子类的私有函数,不可类外访问

	cout << "3、派生类对象被析构时派生类调用析构函数析构次序" << endl;

	system("pause");
	//base::statistic();
	return 0;
}