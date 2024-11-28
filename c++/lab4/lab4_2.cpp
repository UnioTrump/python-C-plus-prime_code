#include <iostream>;
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU {
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r, int f, float  v) {
		rank = r;
		frequency = f;
		voltage = v;
		cout << "构造了一个CPU函数" << endl;
	}
	CPU(const CPU& c) {
		rank = c.rank, frequency = c.frequency, voltage = c.voltage;
		cout << "调用CPU的复制构造函数" << endl;
	}
	void run() { cout << "Start running!" << endl; }
	void stop() { cout << "Stop running!" << endl; }
};

class RAM {
private:
	int s;
public:
	RAM(int Size) { s = Size; cout << "构造了一个ram函数" << endl; }
	RAM(const RAM& r) { s = r.s; cout << "构造了一个ram复制函数" << endl; }
	void run() { cout << "Start running!" << endl; };
	void stop() { cout << "Stop running!" << endl; };
};

class cdrom {
public:
	cdrom(int Size) { s = Size; cout << "构造了一个cdrom函数" << endl; };
	cdrom(const cdrom& cd) { s = cd.s; cout << "构造了一个cdrom复制函数" << endl; }
	void run() { cout << "Start running!" << endl; };
	void stop() { cout << "Stop running!" << endl; };
private:
	int s;
};

class Computer {
public:
	Computer(CPU c , RAM r , cdrom cdr);
	Computer(const Computer& m);
	void run() { cout << "run" << endl; };
	void stop() { cout << "stop!" << endl; };
private:
	CPU cpu;
	RAM ram;
	cdrom cd;
};

Computer::Computer(CPU c, RAM r, cdrom cdr) :cpu(c) , ram(r) , cd(cdr){
	cout << "调用了Computer的构造函数" << endl;
}

Computer::Computer(const Computer& m) :cpu(m.cpu), ram(m.ram), cd(m.cd) {
	cout << "调用了Computer的复制调用函数" << endl;
}

int main()
{
	CPU CPU1(P1, 200, 220);
	RAM ram1(200);
	cdrom cd1(1000);
	Computer computer1(CPU1, ram1, cd1);
	Computer computer2(computer1);
	cout << "computer1" << endl;
	computer1.run();
	computer1.stop();
	cout << "computer2" << endl;
	computer2.run();
	computer2.stop();

	cin.get();
}