
#include<iostream>
#include<cstdio>
using namespace std;
class B
{
	int x, y;
public:
	B()
	{
		x = y = 0;
		cout << "con1\t";
	}
	B(int i)
	{
		x = i; y = 0;
		cout << "con2\t";
	}
	B(int i, int j)
	{
		x = i; y = j;
		cout << "con3\t";
	}
	~B()
	{
		cout << "Des\t";
	}
};
int main()
{
	B *ptr;
	ptr = new B[3];
	ptr[0] = B();
	ptr[1] = B(1);
	ptr[2] = B(2,3);
	delete[] ptr;
	system("pause");
	return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class student
{
	int age;
	char *name;
public:
	student(int m, const char *n)
	{
		age = m;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	friend void disp(student &);
	~student()
	{
		cout << "delete it." << name << endl;
		delete[]name;
	}
};
void disp(student &p)
{
	cout << "Student's name is " << p.name << ",age is " << p.age << endl;
}
int main()
{
	student A(18,"wujiang");
	student B(19, "xiayu");
	disp(A);
	disp(B);
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
class sample
{
	int x;
public:
	void setx(int i)
	{
		x = i;
	}
	int getx()
	{
		return x;
	}
};
int main()
{
	sample a[3], *p;
	int i = 0;
	for (p = a; p < a + 3; p++)
	{
		p->setx(i++);
	}
	for(int i = 0; i < 3; i++)
	{
		p = &a[i];
		cout << p->getx() << " ";
	}
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
class base
{
	int n;
public:
	base(int i)
	{
		n = i;
	}
	friend int add(base &s1, base &s2);
};
int add(base &s1, base &s2)
{
	return s1.n + s2.n;
}
int main()
{
	base A(29), B(11);
	cout << add(A, B) << endl;
	system("pause");
	return 0;
}
*/