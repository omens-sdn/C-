#include<cstdio>
#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5) throw score;
}
int main()
{
	char name[10];
	int age;
	float score;
	cout << "������ѧ��������������ͷ�����" << endl;
	cin >> name >> age >> score;
	try
	{
		checkAgeScore(age, score);
		score = score / 5 * 100;
		cout << "������" << name << ",���䣺" << age << ",�ٷ��Ƴɼ���" << score<< "%" << endl;
	}
	catch (int)
	{
		cout << "�����쳣!" << endl;
	}
	catch (float)
	{
		cout << "�ٷ��Ƴɼ��쳣!" << endl;
	}
	system("pause");
	return 0;
}