#include<iostream>
using namespace std;
class Shapes
{
private:
	double c;
	double s;
public:
	Shapes()
	{

	}
	~Shapes()
	{

	}
	virtual void display() = 0;
};
class Rectangle :public Shapes
{
private:
	double m, n;
public:
	Rectangle(double a,double b)
	{
		m = a;
		n = b;
	}
	~Rectangle()
	{

	}
	void display()
	{
		cout << "矩形的长和宽为" << m << "," << n << endl;
	}
};
class Circle :public Shapes
{
private:
	double x, y, z;
public:
	Circle(double a, double b, double c)
	{
		x = a;
		y = b;
		z = c;
	}
	~Circle()
	{

	}
	void display()
	{
		cout << "三角形的三边为" << x <<"," << y << "," << z << endl;
	}
};

int main()
{
	Rectangle A(6,9);
	Circle B(4,8,9);
	Shapes *p;
	p = &A;
	cout << "p point to Rectangle class object:\n";
	p->display();
	p = &B;
	cout << "p point to Circle class object:\n";
	p->display();
	system("pause");
	return 0;
}