//lab3_1 ���϶Ȼ��϶�ת��
#include <iostream>
using namespace std;
double F_H(double f);

int main()
{
	double c , f;
	cout << "������Ҫת���Ļ����¶�:";
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