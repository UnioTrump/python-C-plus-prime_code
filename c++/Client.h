#ifndef Client_h
#define Client_h

#include <iostream>
using namespace std;

class Client {
private:
	static char ServerName;		//服务器名称
	static int ClientNum;		//一定义的客户数量
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
