#include "Location.h"
#include<iostream>
using namespace std;

int main()
{
	Location A;
	Point B;
	Circle C(0,1,2);
	C.draw();
	C.move();
	C.Location::move(2, 5);
	C.draw();
	system("pause");
	return 0;
}