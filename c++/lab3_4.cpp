#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	else {
		cout << "fib(" << n << ") = fib(n - 1) + fib(n - 2) = " << "fib(" << n-1 << ") = " << "+" << "fib(" << n-2 << ")" << endl;
		return fib(n - 1) + fib(n - 2);
	}
	}

int main()
{
	int n;
	cout << "������Ҫ���㵽��λ��:";
	cin >> n;
	int result = fib(n);
	cout << "fib(" << n << ") = " << result << endl;

	cin.get();
}