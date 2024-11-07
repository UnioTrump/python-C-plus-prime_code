#include <iostream>
using namespace std;

double Circle(double radius)
{
	double Area;
	Area = 3.14 * radius * radius;
	return Area;
}

double ChangArea(double l, double s)
{
	double Area;
	Area = l * s;
	return Area;
}

double ZhengArea(double a)
{
	double Area;
	Area = a * a;
	return Area;
}

int main()
{
	int i;
	cout << "请输入要计算的面积类型：1-圆，2-长方形，3-正方形：";
	cin >> i;
	switch (i)
	{
	case 1: {
		double radius;
		cout << "请输入圆的半径：";
		cin >> radius;
		double Area = Circle(radius);
		cout << Area << endl; break;
	}
	case 2: {
		double l, s;
		cout << "请依次输入长方形的长和宽：" << endl;
		cin >> l >> s;
		double Area = ChangArea(l, s);
		cout << Area << endl; break;
	}
	case 3: {
		double a;
		cout << "请输入正方形的边长：";
		cin >> a;
		double Area = ZhengArea(a);
		cout << Area << endl; break;
	}
	default:
		break;
	}

	cin.get();
}
