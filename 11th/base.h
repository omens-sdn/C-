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
		cout << "��������Ա����:" << a << " " << b << " " << c << endl;
	}
	static void statistic()
	{
		cout << "�����ĸ���Ϊ" << count << endl;
	}
};
int base::count = 0;
//���м̳�
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
		a = 100;      //��Ϊ��������, �����ڿ���ֱ�ӷ���
		b = 100;      //��Ϊ��������, �����ڿ���ֱ�ӷ���
		//c = 100;    //����˽�г�Ա�����಻�ɼ�
		base::print();
		cout << "����������ݳ�Ա: x = " << x << endl; 
	}
};
//�����̳�
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
		a = 200;      //��Ϊ��������,���ڿ���ֱ�ӷ���
		b = 200;      //��Ϊ��������,���ڿ���ֱ�ӷ���
		//c = 200;    //����˽�г�Ա�����಻�ɼ�
		base::print();
		cout << "����������ݳ�Ա: y = " << y << endl;
	}
};
//˽�м̳�
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
		a = 300;      //��Ϊ˽������,���ڿ���ֱ�ӷ���
		b = 300;      //��Ϊ˽������,���ڿ���ֱ�ӷ���
		//c = 300;    //����˽�г�Ա�����಻�ɼ�
		base::print();
		cout << "����������ݳ�Ա: z = " << z << endl;
	}
};