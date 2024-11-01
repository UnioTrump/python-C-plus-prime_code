#include <iostream>
using namespace std;

int main()
{
	int i;
	int sum = 0;
	for ( i = 1; i <= 10; i++)
	{
		sum += i;
	}
	cout << sum << endl;
	cin.get();
}