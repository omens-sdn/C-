#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.141596;
	double R, S, C;
	cout << "������Բ�İ뾶��" << endl;
	cin >> R;
	S = pi * R*R;
	C = 2 * pi*R;
	cout << "���Ϊ" << S << "���ܳ�Ϊ" << C << endl;
	system("pause");
	return 0;
}