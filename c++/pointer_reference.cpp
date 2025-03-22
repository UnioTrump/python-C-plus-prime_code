#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Interger(int& vaule)
{
	vaule++;
}

int main()
{
	int a = 8;
	

	int& ref = a;		//对a的引用

	Interger(a);

	LOG(a);

	std::cin.get();
}