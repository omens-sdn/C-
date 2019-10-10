#include<cstdio>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int[20];
	memset(ptr, 0, 20 * sizeof(int));//初始化全部为0
	int neg=0, pos=0;
	srand(time(NULL));
	for(int i=0;i<20;i++)
	ptr[i]= -100+rand() % (100 + 100 + 1);//生出20个-100~100的随机数
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << "  ";
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0) pos++;
		else if (ptr[i] < 0) neg++;
	}
	cout << "正数个数为" << pos << ",负数个数为" << neg << endl;
	delete ptr;
	system("pause");
	return 0;
}