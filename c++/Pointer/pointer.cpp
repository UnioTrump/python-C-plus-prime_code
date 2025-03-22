#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Interge(int* value)
{
	(*value)++;
}

int main()
{
	int num = 8;
	
	int* ptr = &num;		//numµÄµØÖ·
	Interge(ptr);
			//*ptr = 10;		//ÄæÏòÖ¸Õë
	LOG(num);
	std::cin.get();
}
