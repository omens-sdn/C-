#include<iostream>
using namespace std;
class vect
{
private:
	double x;
	double y;
public:
	vect(double a = 6, double b = 6)
	{
		x = a;
		y = b;
	}
	~vect()
	{

	}
	void print()
	{
		cout << "����Ϊ" << "(" << x << "," << y << ")" << endl;
	}
	friend vect &operator +=(vect &v,vect &z);
	friend vect &operator -=(vect &v, vect &z);
};
vect &operator +=(vect &v, vect &z)
{
	v.x = v.x + z.x;
	v.y = v.y + z.y;
	return v;
}
vect &operator -=(vect &v, vect &z)
{
	v.x = v.x - z.x;
	v.y = v.y - z.y;
	return v;
}
int main()
{
	vect a;
	vect b(a);
	vect c(3, 9);
	vect d = a;
	a.print();
	b.print();
	c.print();
	d.print();
	cout << "ִ����Ԫ�������ص������+=��:" << endl;
	b += c;
	b.print();
	cout << "ִ����Ԫ�������ص������-=��:" << endl;
	d -= c;
	d.print();
	system("pause");
	return 0;
}