#include <iostream>
using namespace std;

struct Time {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

int main()
{
	int year_in, month_in, day_in, hour_in, minute_in, second_in;
	cout << "���������ꡢ�¡��ա�ʱ���֡���" << endl;
	cin >> year_in >> month_in >> day_in >> hour_in >> minute_in >> second_in;
	struct Time clock = { year_in, month_in, day_in , hour_in , minute_in , second_in };
	
	cout << clock.year << "��" << clock.month << "��" << clock.day << "��" << clock.hour << ":"
		<< clock.minute << ";" << clock.second << endl;
	cin.get();
}