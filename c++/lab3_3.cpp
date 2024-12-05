#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cout << "请输入两个数字" << endl;
	cin >> x >> y;
	double result = pow(x, y);
	cout << "pow(x , y) = " << result << endl;

	cin.get();
}