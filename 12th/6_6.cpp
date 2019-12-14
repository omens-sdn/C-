#include<iostream>
using namespace std;
class Array
{
private:
	int  *ptr;                    		//动态申请空间存放数组的元素
	int  size;                    		//数组中实际元素个数
public:
	Array(int arraySize)
	{
		size = arraySize;
		ptr = new int[size];
	/*	for (int j = 0; j < size; j++)
			ptr[j] = j;
	}
	Array(const Array &init)
	{
		size = init.size;
		ptr = new int[size + 1];
		for (int j = 0; j < size; j++)
			ptr[j] = init.ptr[j];  */
	}
	~Array()
	{
		delete[] ptr;
	}
	void print()
	{
		for (int j = 0; j < size; j++)
			cout << ptr[j] << " ";
		cout << endl;
	}
	int getSize() const      		//得到数组元素个数
	{
		return size;
	}
	int &operator[](int i)
	{
		return *(ptr + i);
	}
};
int main()
{
	int n;
	cout << "请输入数组大小" << endl;
	cin >> n;
	Array a(n);
	for (int i = 0; i < a.getSize(); i++)
	{
		a[i] = i * i;
	}
	a.print();
	cout << "the last element of the array is" << endl;
	cout << a[n - 1] << endl;
	system("pause");
	return 0;
}