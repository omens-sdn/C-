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
	cout << "请输入学生的姓名、年龄和分数：" << endl;
	cin >> name >> age >> score;
	try
	{
		checkAgeScore(age, score);
		score = score / 5 * 100;
		cout << "姓名：" << name << ",年龄：" << age << ",百分制成绩：" << score<< "%" << endl;
	}
	catch (int)
	{
		cout << "年龄异常!" << endl;
	}
	catch (float)
	{
		cout << "百分制成绩异常!" << endl;
	}
	system("pause");
	return 0;
}