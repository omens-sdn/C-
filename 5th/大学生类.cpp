/*************************************************
** ���� : ��ѧ����
** ���� :
** �汾 : 2019-10-15 / 18:36
** ��Ȩ : GNU General Public License(GNU GPL)
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
	if (sex == 0)sexx = "��";
	else sexx = "Ů";
	cout << "��ѧ���Ļ�����ϢΪ:\n" << "������" <<name<< "��ѧ�ţ�" <<number<< "���Ա�" <<sexx<< "���������ڣ�" <<date<< "����ߣ�" <<height<< "�����أ�" <<weight<< "���߿��ɼ���" <<grade<< "����ͥסַ��" <<address<< endl;
}
void student::modify(int num)
{
	int item;
	if (number == num)
	{
		cout << "��ѧ������" << endl;
	}
	else
		cout << "��ѧ��������" << endl;
	printf("------------------\n");
	printf("1.�޸�����\n");
	printf("2.�޸�ѧ��\n");
	printf("3.�޸��Ա�\n");
	printf("4.�޸ĳ�������\n");
	printf("5.�޸����\n");
	printf("6.�޸�����\n");
	printf("7.�޸ĸ߿��ɼ�\n");
	printf("8.�޸ļ�ͥסַ\n");
	printf("------------------\n");
		printf("��ѡ���Ӳ˵����:");
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
			cout << "�������µ�����" << endl;
			cin >> NAME;
			name = NAME;
			break;
		case 2:
			cout << "�������µ�ѧ��" << endl;
			cin >> NUMBER;
			number = NUMBER;
			break;
		case 3:
			cout << "�������µ��Ա�" << endl;
			cin >> SEX;
			sex = SEX;
			break;
		case 4:
			cout << "�������µĳ�������" << endl;
			cin >> DATE;
			date = DATE;
			break;
		case 5:
			cout << "�������µ����" << endl;
			cin >> HEIGHT;
			height = HEIGHT;
			break;
		case 6:
			cout << "�������µ�����" << endl;
			cin >> WEIGHT;
			weight = WEIGHT;
			break;
		case 7:
			cout << "�������µĸ߿��ɼ�" << endl;
			cin >> GRADE;
			grade = GRADE;
			break;
		case 8:
			cout << "�������µļ�ͥסַ" << endl;
			cin >> ADDRESS;
			address = ADDRESS;
			break;
		default:cout << "����1-7֮��ѡ��" << endl;
		}
		//cout << "�޸ĳɹ���" << endl;
		//cout << "��ѧ���Ļ�����ϢΪ:\n" << "������" << name << "��ѧ�ţ�" << number << "���Ա�" << sexx << "���������ڣ�" << date << "����ߣ�" << height << "�����أ�" << weight << "���߿��ɼ���" << grade << "����ͥסַ��" << address << endl;
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
	cout << "������ѧ����������Ϣ��������ѧ�ţ��Ա�����Ϊ0��Ů��Ϊ1�����������ڣ���ʽ��1999-9-9������ߣ����ף������أ�����߿��ɼ�����ͥסַ)" << endl;
	cin >> name0>> number0 >> sex0 >> date0 >> height0 >> weight0 >> grade0 >> address0;
	Stu.setdate(name0, number0, sex0, date0, height0, weight0, grade0, address0);
	Stu.putout(name0, number0, sex0, date0, height0, weight0, grade0, address0);
	int num;
	cout << "������Ҫ��ѯ��ѧ����ѧ��" << endl;
	cin >> num;
	Stu.modify(num);
	Stu.putout(name0, number0, sex0, date0, height0, weight0, grade0, address0);
	system("pause");
	return 0;
}