#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Interger(int& vaule)
{
	vaule++;
}

int main()
{
	int a = 8;
	

	int& ref = a;		//¶ÔaµÄÒýÓÃ

	Interger(a);

	LOG(a);

	std::cin.get();
}
