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

	double GetX();//提取横坐标
	double GetY();//提取纵坐标
	void SetX(double ax); //修改横坐标
	void SetY(double bx);//修改纵坐标
	void SwapAxis(double *xa,double *xb);//交换坐标值
	// void SwapPoint(double& ra，double& xb);
	friend double GetLength(point& A, point& B);//计算两点距离
};

