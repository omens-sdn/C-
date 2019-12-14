#include "Triangle.h"
#include<iostream>
using namespace std;
int main()
{
	Triangle s;
	cout << "s:" << endl;
	cout << s ;
	Triangle x(s);
	cout << "x:" << endl;
	cout << x ;
	Triangle y(6, 6, 6);
	cout << "y:" << endl;
	cout << y ;
	Triangle z ;
	cout << "z:" << endl;
	cout << z ;
	z = y;
	cout << "z:" << endl;
	cout << z ;
	s = x + z;
	cout << "输出x+z的结果为" << endl;
	cout << s ;
	system("pause");
	return 0;
}