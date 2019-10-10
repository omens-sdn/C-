#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.141596;
	double R, S, C;
	cout << "请输入圆的半径：" << endl;
	cin >> R;
	S = pi * R*R;
	C = 2 * pi*R;
	cout << "面积为" << S << "，周长为" << C << endl;
	system("pause");
	return 0;
}