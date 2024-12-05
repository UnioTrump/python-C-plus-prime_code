#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cout << "ÇëÊäÈëÁ½¸öÊý×Ö" << endl;
	cin >> x >> y;
	double result = pow(x, y);
	cout << "pow(x , y) = " << result << endl;

	cin.get();
}
