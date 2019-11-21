#include<iostream>
#include<stdio.h>
using namespace std;

//-----------------------���������------------------------------


#include <iostream>
using namespace  std;


//------------------��child�ࡿ-----------------------------------
class Child             //1.����С���ѽڵ���
{
public:
	int childNo;         //��ǰС���ı��
	Child* leftchild;    //��¼С����������ھ�
	Child* rightchild;   //��¼С����������ھ�

public:

	Child(int id = 0) 	  //���캯��
	{
		childNo = id;
		leftchild = NULL;
		rightchild = NULL;
	}
};
//-------------------��Circle�ࡿ----------------------------------

class Circle               // ����ԲȦ��Ϸ��
{
public:
	int scale;             //��ǰ-���ڲ�����Ϸ������
	Child children[1000];  //���-������Ϸ��С������

public:
	Circle(int num = 1000) // ��Ĭ��ֵ���캯������ʼ��С���ڵ�
	{
		scale = num;


		for (int i = 0; i < num; i++)
		{
			children[i] = Child(i);
		}
	};

	//�����ڵ��ѭ����������ȷ��ÿ��С���������ھ�
	void Build()
	{
		for (int i = 0; i < scale; i++)
		{
			/*----��ͬѧ�����в�ȫ����----*/
			if (i == 0)               //��
			{
				children[i].leftchild = &children[scale - 1];
				children[i].rightchild = &children[1];
			}
			else if (i == scale - 1)       //β
			{
				children[i].leftchild = &children[i - 1];
				children[i].rightchild = &children[0];
			}
			else                       //�м�
			{
				children[i].rightchild = &children[i + 1];
				children[i].leftchild = &children[i - 1];
			}
		}
	}
	//��Ϸ���к������ӵ�ǰ�ڵ�˳ʱ��ѭ����ʼ��num����
	void Run(int T)
	{
		int k;
		cout << "�ӵڼ���С����ʼ��Ϸ����������(k<109)��" << endl;
		cin >> k;
		int count = 1;
		Child* current = &children[k - 1];      //�൱���¶���һ�����飬�Ե�k��С��Ϊ�׿�ʼ����
		while (scale > 1)                       //ֻʣһ��С��ʱ��Ϸ����
		{
			//Quit the circle��С���˳���ǰԲȦ
			if (count == T)
			{
				/*----��ͬѧ�����в�ȫ�������----*/
				scale = scale - 1;
				current->leftchild->rightchild = current->rightchild;
				current->rightchild->leftchild = current->leftchild;
				current = current->rightchild;
				count = 1;
			}
			else  //Count the next������������Ϸ	            		
			{
				/*----��ͬѧ�����в�ȫ�������----*/
				count++;
				current = current->rightchild;

			}
		}
		cout << "The last child id is " << current->childNo << endl;
	}
};


//----------------------------������----------------------------------

int main()
{
	Circle nodes(21); // ԲȦ������21���ڵ����С����

	nodes.Build();

	nodes.Run(7);      // ��ʼѭ����������7������Ϸ��������������߱��

	system("pause");

	return 0;
}