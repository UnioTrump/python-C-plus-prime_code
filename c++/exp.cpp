#include <iostream>
using namespace std;

double zx(double x)
{
	double k = 0;	//��ʼ��
	for (int i = 1;; i++)
	{		
		//��д̩��չ������
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
		
		//�Ե�������
		k = k + b / a * c;
		cout << b / a * c << endl;
		if (abs(b / a * c) < 1e-7)	//������ֵ����ѭ��
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
	cout << "��������Ҫ�����y:";
	cin >> y;
	x = y * 3.14159265 / 180;
	cout << "y������ֵΪ��";
	cout << zx(x) << endl;
	//cout << sin(x) << endl;��ֱ�����

	cin.get();
}