#include <iostream>
using namespace std;

int main()
{
	cout << "Hello world!" << endl ;
	cout << "C++" << endl ;

	//******************转义字符*****************************

	cout << "Plaease enter \"Yes\" or \"No\"" << endl;

	//******************变量*********************

	//声明变量
	int num, total;
	
	//变量赋值
	num = 100;
	total = 45000;

	char c = 'a';

	//*******************符号常量**********************

	//const 使用前要声明，声明时要赋值
	//定义圆周率PI为符号常量

	const double PI = 3.1415926;


	return 0;
}
