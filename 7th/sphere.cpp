#include "sphere.h"
#include <cstdio>
#include <iostream>
using namespace std;
//------------------��������------------------
sphere function_1(sphere t) //ʵ��Mars��ֵ���β�tʱ���ÿ������캯������Ӧ���������
{
	sphere s = t;     //�����ڲ������ÿ������캯������Ӧ���������

	return  s;     //function_1��������һ������sʱ���ÿ������캯������Ӧ�ڰ������

}

sphere& function_2(sphere& t) //����������Ϊ��ʽ�����������ÿ������캯��
{
	sphere s(t);     //���ÿ������캯������Ӧ��ʮ�������

	return  t;

}

//=================������===================

int main()
{

	sphere Earth;   //�����޲ι��캯������Ӧ��һ�����

	sphere Mars(3.398);   //�����вι��캯������Ӧ�ڶ������

	sphere Venus(Mars);   // ���ÿ������캯������Ӧ���������

	sphere Saturn = Venus;    //���ÿ������캯������Ӧ���������

	Saturn = Mars;      //��ֵ��䣬�������κι��캯��

	sphere *p = new sphere(2.44);    //�����вι��캯������Ӧ���������

	Earth = function_1(Mars);     //����function_1����

	//function_1�������ý���ʱ���չ��캯������˳����෴˳�����������������
	
	Earth = function_2(Venus);    //����function_2����

	//function_2�������ý���ʱ����������������Ӧ��ʮ�������

	Earth.display();

	p->display();

	delete p;    //����������������Ӧ�������������

	//system("pause");
}