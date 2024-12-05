#ifndef Client_h
#define Client_h

#include <iostream>
using namespace std;

class Client {
private:
	static char ServerName;		//����������
	static int ClientNum;		//һ����Ŀͻ�����
	char ClientName;
public:
	Client(char name);
	~Client();
	static void ChangeServerName(char name);
	static int GetClientNum();
	static char GetServerName();
	char getName() { return ClientName; }
};

#endif // CLIENT_H
