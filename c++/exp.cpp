#include <iostream>
using namespace std;

double zx(double x)
{
	double k = 0;	//初始项
	for (int i = 1;; i++)
	{		
		//先写泰勒展开单项
		int a = 1;
		long double b = 1;
		for (int n = 2 * i - 1; n > 0; n--)
		{
			a = n * a;
			b = x * b;
		}
		int c = -1;

		int j = i;
		for (; j > 0; j--)
		{
			c = c * (-1);
		}
		
		//对单项限制
		k = k + b / a * c;
		cout << b / a * c << endl;
		if (abs(b / a * c) < 1e-7)	//大于阈值结束循环
		{
			break;
		}
	}
	return k;
}


int main()
{
	double y;
	double x;
	cout << "请输入你要计算的y:";
	cin >> y;
	x = y * 3.14159265 / 180;
	cout << "y的正弦值为：";
	cout << zx(x) << endl;
	//cout << sin(x) << endl;可直接求出

	cin.get();
}