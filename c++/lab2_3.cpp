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
	cout << "������Ҫ�����������ͣ�1-Բ��2-�����Σ�3-�����Σ�";
	cin >> i;
	switch (i)
	{
	case 1: {
		double radius;
		cout << "������Բ�İ뾶��";
		cin >> radius;
		double Area = Circle(radius);
		cout << Area << endl; break;
	}
	case 2: {
		double l, s;
		cout << "���������볤���εĳ��Ϳ�" << endl;
		cin >> l >> s;
		double Area = ChangArea(l, s);
		cout << Area << endl; break;
	}
	case 3: {
		double a;
		cout << "�����������εı߳���";
		cin >> a;
		double Area = ZhengArea(a);
		cout << Area << endl; break;
	}
	default:
		break;
	}

	cin.get();
}