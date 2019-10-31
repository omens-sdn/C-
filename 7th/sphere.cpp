#include "sphere.h"
#include <cstdio>
#include <iostream>
using namespace std;
//------------------其他函数------------------
sphere function_1(sphere t) //实参Mars传值给形参t时调用拷贝构造函数，对应第六行输出
{
	sphere s = t;     //函数内部，调用拷贝构造函数，对应第七行输出

	return  s;     //function_1函数返回一个对象s时调用拷贝构造函数，对应第八行输出

}

sphere& function_2(sphere& t) //对象引用作为形式参数，不调用拷贝构造函数
{
	sphere s(t);     //调用拷贝构造函数，对应第十二行输出

	return  t;

}

//=================主函数===================

int main()
{

	sphere Earth;   //调用无参构造函数，对应第一行输出

	sphere Mars(3.398);   //调用有参构造函数，对应第二行输出

	sphere Venus(Mars);   // 调用拷贝构造函数，对应第三行输出

	sphere Saturn = Venus;    //调用拷贝构造函数，对应第四行输出

	Saturn = Mars;      //赋值语句，不调用任何构造函数

	sphere *p = new sphere(2.44);    //调用有参构造函数，对应第五行输出

	Earth = function_1(Mars);     //调用function_1函数

	//function_1函数调用结束时按照构造函数调用顺序的相反顺序调用三次析构函数
	
	Earth = function_2(Venus);    //调用function_2函数

	//function_2函数调用结束时调用析构函数，对应第十三行输出

	Earth.display();

	p->display();

	delete p;    //调用析构函数，对应倒数第五行输出

	//system("pause");
}