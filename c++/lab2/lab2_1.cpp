#include <iostream>
using namespace std;

int main()
{
	int sum = 0, i = 1;
	do
	{
		sum += i;
		i++;
	} while (i <= 10);
	cout << sum << endl;

	cin.get();
}
