#pragma once
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.1415926;

class sphere
{
private:
	double radius;

public:
	sphere();
	sphere(double r);
	sphere(const sphere& other);

	~sphere();

	double surfaceArea();
	double volumeSpace();
	void display();
};
//-----------���ʵ�֣����캯��+����������---------
sphere::sphere()
{
	cout << "++�޲ι��캯�����Զ�����++" << endl;
}

sphere::sphere(double r)
{
	cout << "++�вι��캯�����Զ�����++" << endl;
	this->radius = r;

}

sphere::sphere(const sphere &r)
{
	cout << "++�������캯�����Զ�����++" << endl;

	this->radius = r.radius;

}

sphere::~sphere()
{
	cout << "--�����������Զ�����--" << endl;
}

//------------���ʵ�֣���ͨ������-------------
double sphere::surfaceArea()
{

	double s = 4 * pi*pow(radius, 2);

	return s;

}

double sphere::volumeSpace()
{
	double v = 4.0 / 3 * pi*pow(radius, 3);


	return v;

}

void sphere::display()
{
	cout << "**********�����ͳ����Ϣ**********" << endl;

	cout << "�뾶��" << radius << "�������" << surfaceArea() << "�������" << volumeSpace() << endl;

}
