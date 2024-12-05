//lab3_1 摄氏度华氏度转换
#include <iostream>
using namespace std;
double F_H(double f);

int main()
{
	double c , f;
	cout << "请输入要转换的华氏温度:";
	cin >> f;
	c = F_H(f);
	cout << c << endl;

	cin.get();
}

double F_H(double f) {
	double c;
	c = (f - 32) * 5 / 9;
	return c;
}