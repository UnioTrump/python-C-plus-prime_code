#include <iostream>
#include "Log.h"

int main()
{
	for ( int i = 0; i < 5; i++)
	{
		if (i > 2)
			break;
		Log("Hello World!");
		std::cout << i << std::endl;
	}
	
	Log("======================");

	/*

	int j = 0;
	while (j < 5)
	{
		Log("Hello World!");
		j++;
	}

	Log("======================");
	
	bool condition = false;
	do
	{
		Log("Hello world!");
	} while (condition);//��ִ��ѭ������䣬���ж�����

	*/

	std::cin.get();
}