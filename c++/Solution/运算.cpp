#include <iostream>

using namespace std;
int main()
{
	//��������
	int num, total;
	double price;
	int i = 1 , j = 1;
	int a = 2;

	//������ֵ
	num = 100;
	total = 45000;

	//��������
	price = float(total) / num;
	cout << "price = " << price << endl;

	int remainder_price = total % num;		//ȡ��
	cout << "remainder_price = " << remainder_price << endl;

	int i_1 = i++;		//�ȸ�ֵ��������
	int i_2 = i;
	int j_1 = ++j;		//���������ٸ�ֵ
	cout << "i++ = " << i_1 << endl;
	cout << "++j = " << j_1 << endl;
	cout << "i = " << i_2 << endl;

	//��ֵ����
	a = a + (a = a - a * a);		//�� a + = a - = a * a �ȼ�
	cout << "a = " << a << endl;

	//��������
	int b;
	b = 3 * 5, b * 4;		//�������㣬�����ǰʽ��������ʽ

	//�߼�����

	int m = 1;
	int n = 2;
	int p = 3;
	int q = 4;

	cout << bool(m > n) << endl;		//false
	cout << (m + n == 4) << endl;		//false

	bool log3 = ((m < n) && (p < q));
	cout << log3 << endl;				//true

	bool log4 = ((m > n) || (p < q));
	cout << log4 << endl;				//true

	bool log5 = (!(m > n));
	cout << log5 << endl;				//true

	//��������
	cout << "��������" << endl;

	cout << "m��n�н�С���Ǹ������� : " << (m < n ? m : n) <<endl;

	//sizeof�����
	cout << "sizeof�����" << endl;

	int long1 = sizeof("txt");
	cout << "sizeof(\"txt\") = " << long1 << endl;		//"txt" �൱�� t x t \0 ��λ

	//λ����
	cout << "��λ������" << endl;
	int res_1 = 3 | 5;
	cout << res_1 << endl;



	return 0;
}
