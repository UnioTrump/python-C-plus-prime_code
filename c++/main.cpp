#include <iostream>
#include "Client.h"
using namespace std;

int Client::ClientNum = 0;
char Client::ServerName = 'N';

int main() {
	char Clientname_a, Clientname_b;
	char newServername;
	cout << "������һ���ַ���Ϊ�ͻ��������ƣ�";
	cin >> Clientname_a;
	Client A(Clientname_a);
	A.GetClientNum();
	cout << "������һ���ͻ���" << A.getName() << endl;
	cout << "������һ���ַ���Ϊ�ͻ��������ƣ�";
	cin >> Clientname_b;
	Client B(Clientname_b);
	B.GetClientNum();
	cout << "������һ���ͻ���" << B.getName() << endl;
	cout << "�ͻ���" << A.getName() << "�ķ�����������" << A.GetServerName() << endl;
	cout << "�ͻ���" << B.getName() << "�ķ�����������" << B.GetServerName() << endl;
	cout << "������������������ƣ�";
	cin >> newServername;
	A.ChangeServerName(newServername);
	B.ChangeServerName(newServername);
	cout << "�ͻ���" << A.getName() << "�ķ�����������" << A.GetServerName() << endl;
	cout << "�ͻ���" << B.getName() << "�ķ�����������" << B.GetServerName() << endl;
	cout << "�ͻ����������ǣ�" << Client::GetClientNum() << endl;
}