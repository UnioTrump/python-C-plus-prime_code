#include <iostream>

using namespace std;
int main()
{
	//声明变量
	int num, total;
	double price;
	int i = 1 , j = 1;
	int a = 2;

	//变量赋值
	num = 100;
	total = 45000;

	//算数运算
	price = float(total) / num;
	cout << "price = " << price << endl;

	int remainder_price = total % num;		//取余
	cout << "remainder_price = " << remainder_price << endl;

	int i_1 = i++;		//先赋值，再自增
	int i_2 = i;
	int j_1 = ++j;		//先自增，再赋值
	cout << "i++ = " << i_1 << endl;
	cout << "++j = " << j_1 << endl;
	cout << "i = " << i_2 << endl;

	//赋值运算
	a = a + (a = a - a * a);		//与 a + = a - = a * a 等价
	cout << "a = " << a << endl;

	//逗号运算
	int b;
	b = 3 * 5, b * 4;		//逗号运算，先求解前式，在求解后式

	//逻辑运算

	int m = 1;
	int n = 2;
	int p = 3;
	int q = 4;

	cout << bool(m > n) << endl;		//false
	cout << (m + n == 4) << endl;		//false

	bool log3 = ((m < n) && (p < q));
	cout << log3 << endl;				//true

	bool log4 = ((m > n) || (p < q));
	cout << log4 << endl;				//true

	bool log5 = (!(m > n));
	cout << log5 << endl;				//true

	//条件运算
	cout << "条件运算" << endl;

	cout << "m和n中较小的那个数字是 : " << (m < n ? m : n) <<endl;

	//sizeof运算符
	cout << "sizeof运算符" << endl;

	int long1 = sizeof("txt");
	cout << "sizeof(\"txt\") = " << long1 << endl;		//"txt" 相当于 t x t \0 四位

	//位运算
	cout << "按位或运算" << endl;
	int res_1 = 3 | 5;
	cout << res_1 << endl;



	return 0;
}
