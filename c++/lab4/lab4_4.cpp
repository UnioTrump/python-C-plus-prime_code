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
	cout << "依次输入年、月、日、时、分、秒" << endl;
	cin >> year_in >> month_in >> day_in >> hour_in >> minute_in >> second_in;
	struct Time clock = { year_in, month_in, day_in , hour_in , minute_in , second_in };
	
	cout << clock.year << "年" << clock.month << "月" << clock.day << "日" << clock.hour << ":"
		<< clock.minute << ";" << clock.second << endl;
	cin.get();
}
