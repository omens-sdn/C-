/*************************************************
** 功能 : 大学生类
** 作者 :
** 版本 : 2019-10-15 / 18:36
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
class student
{
private:
	string name;
	int number;
	bool sex;
	string date;
	double height;
	double weight;
	double grade;
	string address;
public:
	void setdate(string, int, bool, string, double, double, double, string);
	void putout(string, int, bool, string, double, double, double, string);
	void modify(int);
	/*
	void modify_name(string);
	void modify_number(int);
	void modify_sex(bool);
	void modify_date(string);
	void modify_height(double);
	void modify_weight(double);
	void modify_grade(double);
	void modify_address(string);
	*/
};
void student::setdate(string name0, int number0, bool sex0,string date0, double height0, double weight0, double grade0, string address0)
{
	name = name0;
	number = number0;
	sex = sex0;
	date = date0;
	height = height0;
	weight = weight0;
	grade = grade0;
	address = address0;
}
void student::putout(string, int, bool, string, double, double, double, string)
{
	string sexx;
	if (sex == 0)sexx = "男";
	else sexx = "女";
	cout << "该学生的基本信息为:\n" << "姓名：" <<name<< "，学号：" <<number<< "，性别：" <<sexx<< "，出生日期：" <<date<< "，身高：" <<height<< "，体重：" <<weight<< "，高考成绩：" <<grade<< "，家庭住址：" <<address<< endl;
}
void student::modify(int num)
{
	int item;
	if (number == num)
	{
		cout << "该学生存在" << endl;
	}
	else
		cout << "该学生不存在" << endl;
	printf("------------------\n");
	printf("1.修改姓名\n");
	printf("2.修改学号\n");
	printf("3.修改性别\n");
	printf("4.修改出生日期\n");
	printf("5.修改身高\n");
	printf("6.修改体重\n");
	printf("7.修改高考成绩\n");
	printf("8.修改家庭住址\n");
	printf("------------------\n");
		printf("请选择子菜单编号:");
		cin >> item;
		string NAME;
		int NUMBER;
		bool SEX;
		string DATE;
		double HEIGHT;
		double WEIGHT;
		double GRADE;
		string ADDRESS;
		switch (item)
		{
		case 1:
			cout << "请输入新的姓名" << endl;
			cin >> NAME;
			name = NAME;
			break;
		case 2:
			cout << "请输入新的学号" << endl;
			cin >> NUMBER;
			number = NUMBER;
			break;
		case 3:
			cout << "请输入新的性别" << endl;
			cin >> SEX;
			sex = SEX;
			break;
		case 4:
			cout << "请输入新的出生日期" << endl;
			cin >> DATE;
			date = DATE;
			break;
		case 5:
			cout << "请输入新的身高" << endl;
			cin >> HEIGHT;
			height = HEIGHT;
			break;
		case 6:
			cout << "请输入新的体重" << endl;
			cin >> WEIGHT;
			weight = WEIGHT;
			break;
		case 7:
			cout << "请输入新的高考成绩" << endl;
			cin >> GRADE;
			grade = GRADE;
			break;
		case 8:
			cout << "请输入新的家庭住址" << endl;
			cin >> ADDRESS;
			address = ADDRESS;
			break;
		default:cout << "请在1-7之间选择" << endl;
		}
		//cout << "修改成功！" << endl;
		//cout << "该学生的基本信息为:\n" << "姓名：" << name << "，学号：" << number << "，性别：" << sexx << "，出生日期：" << date << "，身高：" << height << "，体重：" << weight << "，高考成绩：" << grade << "，家庭住址：" << address << endl;
}
int main()
{
	student Stu;
	string name0;
	int number0;
	bool sex0;
	string date0;
	double height0;
	double weight0;
	double grade0;
	string address0;
	cout << "请输入学生的数据信息（姓名，学号，性别（男生为0，女生为1），出生日期（格式如1999-9-9），身高（厘米），体重（斤），高考成绩，家庭住址)" << endl;
	cin >> name0>> number0 >> sex0 >> date0 >> height0 >> weight0 >> grade0 >> address0;
	Stu.setdate(name0, number0, sex0, date0, height0, weight0, grade0, address0);
	Stu.putout(name0, number0, sex0, date0, height0, weight0, grade0, address0);
	int num;
	cout << "请输入要查询的学生的学号" << endl;
	cin >> num;
	Stu.modify(num);
	Stu.putout(name0, number0, sex0, date0, height0, weight0, grade0, address0);
	system("pause");
	return 0;
}