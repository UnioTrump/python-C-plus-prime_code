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
			cout << "����������" << endl;
			cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
			cin >> Key; break;
		}
		case 'D':
		{
			cout << "������ɾ��" << endl;
			cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
			cin >> Key; break;
		}
		case 'S':
		{
			cout << "����������" << endl;
			cout << "Menu : A(dd) D(elete) S(ort) Q(uit) , Select one:";
			cin >> Key; break;
		}
		default:
			break;
		}
	}
	cout << "���������" << endl;

	cin.get();
}