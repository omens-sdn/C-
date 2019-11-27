#pragma once
#include<iostream>
using namespace std;
class base
{
public:
	int a;
	static int count;
protected:
	int b;
private:
	int c;
		
public:
	base(int A=0,int B=0,int C=0) 
	{
		count++;
		cout << "base() is called" << endl;
		a = A;
		b = B;
		c = C;
	}
	~base()
	{
		count--;
		cout << "~base() is called" << endl;
		getchar();
	}

	void print()
	{
		cout << "基类对象成员数据:" << a << " " << b << " " << c << endl;
	}
	static void statistic()
	{
		cout << "类对象的个数为" << count << endl;
	}
};
int base::count = 0;
//公有继承
class derived1 :public base
{
	int x;
public:
	derived1(int X=1):base(1,1,1)
	{
		x = X;
		cout << "derived1() is called" << endl;
	}
	~derived1()
	{
		cout << "~derived1() is called" << endl;
		getchar();
	}

	void print()
	{
		a = 100;      //仍为公有数据, 子类内可以直接访问
		b = 100;      //仍为保护数据, 子类内可以直接访问
		//c = 100;    //基类私有成员在子类不可见
		base::print();
		cout << "自身添加数据成员: x = " << x << endl; 
	}
};
//保护继承
class derived2 :protected base
{
	int y;
public:
	derived2(int Y=2):base(2,2,2)
	{
		y = Y;
		cout << "derived2() is called" << endl;
	}
	~derived2()
	{
		cout << "~derived2() is called" << endl;
		getchar();
	}

	void print()
	{
		a = 200;      //变为保护数据,类内可以直接访问
		b = 200;      //变为保护数据,类内可以直接访问
		//c = 200;    //基类私有成员在子类不可见
		base::print();
		cout << "自身添加数据成员: y = " << y << endl;
	}
};
//私有继承
class derived3 :private base
{
	int z;
public:
	derived3(int Z=3):base(3,3,3)
	{
		z = Z;
		cout << "derived3() is called" << endl;
	}
	~derived3()
	{
		cout << "~derived3() is called" << endl;
		getchar();
	}

	void print()
	{
		a = 300;      //变为私有数据,类内可以直接访问
		b = 300;      //变为私有数据,类内可以直接访问
		//c = 300;    //基类私有成员在子类不可见
		base::print();
		cout << "自身添加数据成员: z = " << z << endl;
	}
};