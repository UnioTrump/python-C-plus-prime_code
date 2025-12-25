/*Queue Code*/

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class Queue {
private:
	Node* head;
	Node* tail;

public:
	Queue() { head = new Node; head->next = NULL; tail = head; }
	~Queue();
	void initQueue();
	void inQueue(int e);
	void outQueue();
	void displayQueue();
};

Queue::~Queue(){
	Node* p;
	while(head != NULL){
		p = head;
		head = head->next;
		delete p;
	}
}

void Queue::inQueue(int e){
	Node* newNode = new Node;
	newNode->data = e;
	newNode->next = NULL;
	tail->next = newNode;
	tail = newNode;
}

void Queue::outQueue(){
	if(head->next == NULL){
		cout << "Queue is empty!" << endl;
		return;
	}
	Node* p = head->next;
	head->next = p->next;
	if(tail == p) tail = head; // If the queue becomes empty, reset tail to head
	cout << "Dequeued element: " << p->data << endl;
	delete p;
}

void Queue::initQueue(){
	cout << "Please input number to establish a queen based on chain, end with 0: ";
	int num;
	cin >> num;
	while(num){
		inQueue(num);
		cin >> num;
	}
}

void Queue::displayQueue(){
	Node* p = head->next;
	if(p == NULL){
		cout << "Queue is empty!" << endl;
		return;
	}
	cout << "Queue elements: ";
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int main(){
	Queue q;
	q.initQueue();
	// display the elements in the queue
	q.displayQueue();
	q.outQueue();
	q.outQueue();
	q.outQueue();
	// display the remaining elements in the queue
	q.displayQueue();
	return 0;
}