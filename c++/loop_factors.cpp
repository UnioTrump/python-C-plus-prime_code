#include <iostream>

int main()
{
	//claim
	unsigned int num;

	std::cout << "Please input a postive integer:" << std::endl;
	std::cin >> num;

	for (unsigned int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			std::cout << i << " ";
		}
	}
}