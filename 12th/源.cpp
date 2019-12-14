#include<iostream>
using namespace std;

#if 1
	class base
	{
	public:
		base()
		{
			cout << "构造base子对象" << endl;
			f();
		}
		virtual void f()
		{
			cout << "调用base::f()" << endl;
		}
	};
	class derived 
	{
	public:
		derived()
		{
			cout << "构造derived子对象" << endl;
			f();
		}
		void f()
		{
			cout << "调用derived::f()" << endl;
		}
	};
	int main()
	{
		derived d;
		system("pause");
		return 0;
	}
#endif

#if 0
	class base1
	{
	public:
		virtual void who()
		{
			cout << "this is the class of base1!" << endl;
		}
	};
	class base2
	{
	public:
		void who()
		{
			cout << "this is the class of base2!" << endl;
		}
	};
	class derived:public base1,public base2
	{
	public:
		void who()
		{
			cout << "this is the class of derived!" << endl;
		}
	};
	int main()
	{
		base1 obj1, *ptr1;
		base2 obj2, *ptr2;
		derived obj3;
		ptr1 = &obj1;
		ptr1->who();
		ptr2 = &obj2;
		ptr2->who();
		ptr1 = &obj3;
		ptr1->who();
		ptr2 = &obj3;
		ptr2->who();
		system("pause");
		return 0;
	}
#endif

#if 0
	class point
	{
	private:
		float x, y;
	public:
		point(float xx = 0, float yy = 0)
		{
			x = xx;
			y = yy;
		}
		float get_x()
		{
			return x;
		}
		float get_y()
		{
			return y;
		}
		point operator++();
		point operator--();
	};
	point point::operator++()
	{
		if (x < 640)
			++x;
		if (y < 480)
			++y;
		return *this;
	}
	point point::operator--()
	{
		if (x > 0)
			--x;
		if (y > 0)
			--y;
		return *this;
	}
	int main()
	{
		point p1(10, 10), p2(200, 200);
		for (int i = 0; i < 5; i++)
		{
			cout << "p1:x=" << p1.get_x() << ",y=" << p1.get_y() << endl;
			++ p1;
		}
		for (int i = 0; i < 5; i++)
		{
			cout << "p2:x=" << p2.get_x() << ",y=" << p2.get_y() << endl;
			--p2;
		}
		system("pause");
		return 0;
	}
#endif
