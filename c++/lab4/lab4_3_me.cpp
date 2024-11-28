#include <iostream>
using namespace std;

class Date {
private:
	int birthdate;
public:
	Date(int birth) { birthdate = birth; };
	//Date�ĸ��ƹ��캯��
	Date(const Date& d) { birthdate = d.birthdate; }
	void showbirth() { cout << birthdate << endl; };
};

class people {
private:
	int num;
	char sex;
	Date date;
	int id;
public:
	people(int n , char s , Date birth , int id_num);
	people(const people& p);
	void Print() {
		cout << "num:" << num << endl;
		cout << "sex:" << sex << endl;
		cout << "birthdate:";
		date.showbirth();
		cout << "id_num:" << id << endl;
	}
};

//����peple����
people::people(int n, char s, Date birth, int id_num) :date(birth){
	num = n;
	sex = s;
	date = birth;
	id = id_num;
}

//people�ĸ��ƹ��캯��
people::people(const people& p) :num(p.num), sex(p.sex), date(p.date), id(p.id) {
	num = p.num;
	sex = p.sex;
	date = p.date;
	id = p.id;
}

int main() {
	Date date1(20051002);
	people people1(80001, 'M', date1, 1111);
	//��people1���и��ơ�
	people people2(people1);
	cout << "people1:" << endl;
	people1.Print();
	cout << "people2:" << endl;
	people2.Print();

	cin.get();
}