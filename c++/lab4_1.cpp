#include <iostream>
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
	void run() { cout << "Start running!" << endl; }
	void stop() { cout << "Stop running!" << endl; }
	
	~CPU() { cout << "析构了一个CPU!" << endl; }

	CPU_Rank GetRank() { return rank; }
	int GetFerquency() { return frequency; }
	float GetVoltage() { return voltage; }

	void setRank(CPU_Rank r) { rank = r; }
	void setFrequency(int f) { frequency = f; }
	void setVoltage(float v) { voltage = v; }
};
int main()
{
	CPU a(P2, 300, 2.7);
	a.run();
	cout << "rank of this CPU is " << a.GetRank() << "\tFrequency of this CPU is "
		<< a.GetRank() << "\tVoltage of this CPU is " << a.GetVoltage() << endl;
	a.setRank(P1);
	a.setFrequency(33);
	a.setVoltage(8.908);

	cout << "Exchange rank,frequency and voltage." << endl;
	cout << "rank of this CPU is " << a.GetRank() << "\tFrequency of this CPU is "
		<< a.GetRank() << "\tVoltage of this CPU is " << a.GetVoltage() << endl;

	a.stop();
	cin.get();
}