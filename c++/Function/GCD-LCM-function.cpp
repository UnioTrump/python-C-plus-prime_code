#include <iostream>
using namespace std;

//���Լ��
int GetGCD(int num1 , int num2) {
	int GCD = 0;
	int i;
	int keynum = min(num1, num2);
	for (i = 1; i <= keynum; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			GCD = i;
			continue;
		}
		else
			continue;
	}
	return GCD;
}
//��С������
int GetLCM(int num1, int num2) {
	int LCM = 0;
	int keynum = max(num1, num2);
	int i = keynum;
	while (i % num1 != 0 || i % num2 != 0) {
		i++;
	}
	LCM = i;
	return LCM;
}

int main()
{
	int num1, num2;
	cout << "����������������" << endl;
	cin >> num1 >> num2;
	int GCD = GetGCD(num1, num2);
	int LCM = GetLCM(num1, num2);
	cout << "���Լ��" << GCD << endl;
	cout << "��С������" << LCM << endl;
	cin.get();
}