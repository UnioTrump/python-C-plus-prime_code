#include <iostream>
using namespace std;
const double PI = 3.14;

//length
double Circle(double radius)
{
	double C = 2 * PI * radius;
	return C;
}

//Area
double Area(double radius)
{
	double S = PI * radius * radius;
	return S;
}

int main()
{
	double r;
	cout << "please enter the radius" << endl;
	cin >> r;
	double C = Circle(r);
	double S = Area(r);
	cout << "The length of this circle is " << C << endl;
	cout << "The area of this circle is " << S << endl;

	cin.get();
}
