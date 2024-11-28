#include <iostream>
using namespace std;

class Date {
public:
	Date(int y = 1900, int m = 1, int d = 1) { year = y, month = m, day = d; }
	void display() { cout << year << '-' << month << '-' << day << endl; }
	//Date(const Date& d) {}
private:
	int year;
	int month;
	int day;;
};
class People {
public:
	People(int num, char s, Date bday, int idnum);
	People(const People& peo);
	~People() {}
	void display() {
		cout << "Number:" << number << endl;
		cout << "Sex:" << sex << endl;
		cout << "birthday:";
		birthday.display();
		cout << "ID:" << id << endl;
	}
private:
	int number;
	char sex;
	Date birthday;
	int id;
};

People::People(int num, char s, Date bday, int idnum) :birthday(bday)
{
	number = num;
	sex = s;
	birthday = bday;
	id = idnum;
}

People::People(const People& peo) :birthday(peo.birthday)
{
	number = peo.number;
	sex = peo.sex;
	birthday = peo.birthday;
	id = peo.id;
}

int main() {
	Date birth(1900, 5, 20);
	People person1(10009, 'M', birth, 12345);
	People person2(person1);
	cout << "Person1:\n";
	person1.display();
	cout << "\nPerson 2:\n";
	person2.display();
	return 0;
}