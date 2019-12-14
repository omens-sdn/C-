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
		cout << "����Ϊ" <<"("<<x<<","<<y<<")"<<endl;
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
	cout << "ִ�г�Ա�������ص������+=��:" << endl;
	b += c;
	b.print();
	cout << "ִ�г�Ա�������ص������-=��:" << endl;
	d -= c;
	d.print();
	system("pause");
	return 0;
}