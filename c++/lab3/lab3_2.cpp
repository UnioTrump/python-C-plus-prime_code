#include <iostream>
using namespace std;

int Max1(int a, int b) {
	return max(a, b);
}

int Max1(int a, int b , int c) {
	return max(max(a, b), c);
}

double Max1(double a, double b) {
	return max(a, b);
}

double Max1(double a, double b , double c) {
	return max(max(a, b), c);
}

int main()
{
	int a, b, c;
	double m, n, q;
	cout << "请输入三个整数：" << endl;;
	cin >> a >> b >> c;
	cout << "请输入三个浮点数:" << endl;;
	cin >> m >> n >> q;
	int m1 = Max1(a, b);
	int m2 = Max1(a, b, c);
	double m3 = Max1(m, n);
	double m4 = Max1(m, n, q);
	

	cout << "a与b之间较大的是" << m1 << endl;
	cout << "a,b,c之间较大的是" << m2 << endl;
	cout << "m,n之间较大的是" << m3 << endl;
	cout << "m,n,q之间较大的是" << m4 << endl;
	
	cin.get();
}
