#include <iostream>
#include "Client.h"
using namespace std;

int Client::ClientNum = 0;
char Client::ServerName = 'N';

int main() {
	char Clientname_a, Clientname_b;
	char newServername;
	cout << "请输入一个字符作为客户机的名称：";
	cin >> Clientname_a;
	Client A(Clientname_a);
	A.GetClientNum();
	cout << "创建了一个客户机" << A.getName() << endl;
	cout << "请输入一个字符作为客户机的名称：";
	cin >> Clientname_b;
	Client B(Clientname_b);
	B.GetClientNum();
	cout << "创建了一个客户机" << B.getName() << endl;
	cout << "客户机" << A.getName() << "的服务器名称是" << A.GetServerName() << endl;
	cout << "客户机" << B.getName() << "的服务器名称是" << B.GetServerName() << endl;
	cout << "请输入服务器的新名称：";
	cin >> newServername;
	A.ChangeServerName(newServername);
	B.ChangeServerName(newServername);
	cout << "客户机" << A.getName() << "的服务器名称是" << A.GetServerName() << endl;
	cout << "客户机" << B.getName() << "的服务器名称是" << B.GetServerName() << endl;
	cout << "客户机的数量是：" << Client::GetClientNum() << endl;
}