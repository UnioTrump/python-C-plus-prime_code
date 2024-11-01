#include <iostream>
using namespace std;

int main()
{
	char Key;
	cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
	cin >> Key;
	while (Key != 'Q')
	{
		switch (Key)
		{
		case 'A':
		{
			cout << "数据已增加" << endl;
			cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
			cin >> Key; break;
		}
		case 'D':
		{
			cout << "数据已删除" << endl;
			cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
			cin >> Key; break;
		}
		case 'S':
		{
			cout << "数据已排序" << endl;
			cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
			cin >> Key; break;
		}
		default:
			break;
		}
	}
	cout << "程序结束！" << endl;

	cin.get();
}