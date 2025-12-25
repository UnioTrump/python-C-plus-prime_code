/*Stack Code*/

#include <iostream>
using namespace std;
typedef int ElemType;

class Stack {
public:
	Stack(int Max) { p = new ElemType[Max]; top = -1; this->Max = Max; }
	~Stack() { delete[] p; }
	void push(ElemType e);
	ElemType pop();
	void SetEmpty() { top = -1; }
	void GetTop();
	void OutStack();
	void disp();

	bool isEmpty();
	bool isFull();

private:
	int* p;
	int top;
	int Max;
};

bool Stack::isEmpty() {
	if (top == -1) { cout << "Stack is Empty!" << endl; return 1; }
	else return 0;
}
bool Stack::isFull() {
	if (top == Max - 1) { cout << "Stack is Full" << endl; return 1; }
	else return 0;
}

void Stack::push(ElemType e) {
	if (isFull()) return;
	if (top < Max - 1){
		top += 1;
		p[top] = e;
	}
}

ElemType Stack::pop() {
	if (isEmpty()) return 0;
	ElemType x = p[top];
	top -= 1;
	return x;
}

void Stack::GetTop() {
	if (isEmpty()) return;
	ElemType x = p[top];
	cout << "Top element is " << x << endl;
}

void Stack::OutStack() {
	if (isEmpty()) return;
	for (int i = top; i >= 0; i--)
		cout << "The " << i << "th Element is " << p[i] << endl;
}

void Stack::disp() {
	if (isEmpty()) return;
	for (int i = top; i >= 0; i-- ) {
		cout << p[i] << "\t";
	}
	cout << endl;
}

int main() {
	int Maxnum = 50;
	Stack myStack(Maxnum);	//initStack

	myStack.push(10);
	myStack.push(-5);
	myStack.push(7);
	myStack.disp();		

	myStack.pop();
	myStack.push(3);
	myStack.GetTop();	//get top element

	myStack.SetEmpty();
}
