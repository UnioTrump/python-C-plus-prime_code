#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Interge(int* value)
{
	(*value)++;
}

int main()
{
	int num = 8;
	
	int* ptr = &num;		//num�ĵ�ַ
	Interge(ptr);
			//*ptr = 10;		//����ָ��
	LOG(num);
	std::cin.get();
}