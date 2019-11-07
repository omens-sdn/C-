#pragma once
class point
{
private:
	double x;
	double y;
public:
	point();
	point(double a, double b);
	point(const point& r);
	~point();

	double GetX();//��ȡ������
	double GetY();//��ȡ������
	void SetX(double ax); //�޸ĺ�����
	void SetY(double bx);//�޸�������
	void SwapAxis(double *xa,double *xb);//��������ֵ
	// void SwapPoint(double& ra��double& xb);
	friend double GetLength(point& A, point& B);//�����������
};

