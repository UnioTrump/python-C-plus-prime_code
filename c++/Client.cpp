#include <iostream>
#include "Client.h"

using namespace std;

Client::Client(char name) {
	ClientName = name;
	ClientNum++;
}

void Client::ChangeServerName(char name) {
	ServerName = name;
}

char Client::GetServerName() {
	return ServerName;
}

int Client::GetClientNum() {
	return ClientNum;
}

Client::~Client(){}