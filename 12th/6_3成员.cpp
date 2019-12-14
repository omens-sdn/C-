#include<iostream>
//#include<string>
using namespace std;
class vect
{
private:
	double x;
	double y;
public:
	vect(double a=5,double b=5)
	{
		x = a;
		y = b;
	}
	~vect()
	{

	}
	void print()
	{
		cout << "向量为" <<"("<<x<<","<<y<<")"<<endl;
	}
	vect operator +=(vect &v)
	{
		x = x + v.x;
		y = y + v.y;
		return *this;
	}
	vect operator -=(vect &v)
	{
		x = x - v.x;
		y = y - v.y;
		return *this;
	}
};
int main()
{
	vect a;
	vect b(a);
	vect c(3,9);
	vect d = a;
	a.print();
	b.print();
	c.print();
	d.print();
	cout << "执行成员函数重载的运算符+=后:" << endl;
	b += c;
	b.print();
	cout << "执行成员函数重载的运算符-=后:" << endl;
	d -= c;
	d.print();
	system("pause");
	return 0;
}