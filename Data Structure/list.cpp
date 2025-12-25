#include <iostream>
using namespace std;
/*
struct node {
	int data;
	node* succ;
	//操作
	node* insertAsHead();
	node* insertAsTail();
	node* Locate(node* head, int x);
};
void insert(node* p, int x, int y);
void deletel(node* head, int x);	//在head为头指针的单链表中，删除值为x的结点
void change(node* head, int x, int y);	//在head为头指针的单链表中，将值为x的结点改为y
void print(node* head);		//输出head为头指针的单链表

//insertAsHead
node* insertAsHead() {
	node* s, * p;
	int i;
	cout << "请输入字符，以0结束:"; cin >> i;
	p = new node;
	p->succ = NULL;
	while (i) {
		s = new node;
		s->data = i;
		s->succ = p->succ;
		p->succ = s;
		cin >> i;
	}
	return p;
}

//insertAsTail
node* insertAsTail() {
	node* s, * p, *tail;
	int i;
	cout << "请输入字符:"; cin >> i;
	p = new node;
	p->succ = NULL;
	tail = p;
	while (i) {
		s = new node;
		s->data = i;
		tail->succ = s;
		s->succ = NULL;
		tail = s;
		cin >> i;
	}
	return p;
}

//Find node->data = x
node* Locate(node* head, int x) {
	node* p;
	p = head->succ;
	while (p->data != x) {
		p = p->succ;
	}
	return p;
}

//Change node->data = x to node->data = y
void change(node* head, int x, int y) {
	node* p;
	p = head->succ;
	while(p!= NULL) {
		if (p->data == x) p->data = y;
		p = p->succ;
	}
}

//insert an element->data=y after node->data = x
void insert(node* head, int x, int y) {
	node* p, * s;
	s = new node;
	s->data = y;
	p = Locate(head, x);
	s->succ = p->succ;
	p->succ = s;
}

void deletel(node* head, int x) {
	node* p, * q;
	q = head;
	p = q->succ;
	while ((p != NULL) && (p->data != x)) {
		q = p;
		p = p->succ;
	}
	if (p == NULL)cout << "删除节点";
	else {
		q->succ = p->succ;
		delete(p);
	}
}

void print(node* head) {
	node* p;
	p = head->succ;
	while (p->succ != NULL) {
		cout << p->data << "->";
		p = p->succ;
	}
	cout << p->data << endl;
}

int main() {

	node* p;
	p = insertAsTail();
	print(p);
	deletel(p, 1);
	print(p);
	insert(p, 3, 2);
	print(p);
	change(p, 2, 9);
	print(p);
	return 0;
}
*/

template<typename T>
struct node {
    T data;
    node<T>* succ;

    // 操作
    static node<T>* insertAsHead();
    static node<T>* insertAsTail();
    static node<T>* Locate(node<T>* head, T x);
	static int _size(node<T>* head);
};

template<typename T>
void insert(node<T>* p, T x, T y);  //在p为头的列表中值为x的节点后插入值为y的节点

template<typename T>
void deletel(node<T>* head, T x);    // 在head为头指针的单链表中，删除值为x的结点

template<typename T>
void change(node<T>* head, T x, T y);    // 在head为头指针的单链表中，将值为x的结点改为y

template<typename T>
void print(node<T>* head);     // 输出head为头指针的单链表

// insertAsHead
template<typename T>
node<T>* node<T>::insertAsHead() {
    node<T>* s, * p;
    T i;
    cout << "请输入数据，以0结束: ";
    cin >> i;
    p = new node<T>;
    p->succ = NULL;
    while (i != T(0)) {  // 使用T(0)来适配不同类型的"0"
        s = new node<T>;
        s->data = i;
        s->succ = p->succ;
        p->succ = s;
        cin >> i;
    }
    return p;
}

// insertAsTail
template<typename T>
node<T>* node<T>::insertAsTail() {
    node<T>* s, * p, * tail;
    T i;
    cout << "请输入数据，以0结束: ";
    cin >> i;
    p = new node<T>;
    p->succ = NULL;
    tail = p;
    while (i != T(0)) {  // 使用T(0)来适配不同类型的"0"
        s = new node<T>;
        s->data = i;
        tail->succ = s;
        s->succ = NULL;
        tail = s;
        cin >> i;
    }
    return p;
}

// Find node->data = x
template<typename T>
node<T>* node<T>::Locate(node<T>* head, T x) {
    node<T>* p;
    p = head->succ;
    while (p != NULL && p->data != x) {
        p = p->succ;
    }
    return p;
}

//Get size of the list
template<typename T>
int node<T>::_size(node<T>* head) {
    node<T>* p;
    int count = 0;
    p = head->succ;
    while (p != NULL) {
        count++;
        p = p->succ;
    }
    return count;
}

// Change node->data = x to node->data = y
template<typename T>
void change(node<T>* head, T x, T y) {
    node<T>* p;
    p = head->succ;
    while (p != NULL) {
        if (p->data == x) p->data = y;
        p = p->succ;
    }
}

// insert an element->data=y after node->data = x
template<typename T>
void insert(node<T>* head, T x, T y) {
    node<T>* p, * s;
    p = node<T>::Locate(head, x);
    if (p == NULL) {
        cout << "未找到值为 " << x << " 的节点" << endl;
        return;
    }
    s = new node<T>;
    s->data = y;
    s->succ = p->succ;
    p->succ = s;
}

template<typename T>
void deletel(node<T>* head, T x) {
    node<T>* p, * q;
    q = head;
    p = q->succ;
    while ((p != NULL) && (p->data != x)) {
        q = p;
        p = p->succ;
    }
    if (p == NULL) cout << "未找到要删除的节点" << endl;
    else {
        q->succ = p->succ;
        delete(p);
    }
}

template<typename T>
void print(node<T>* head) {
    node<T>* p;
    p = head->succ;
    if (p == NULL) {
        cout << "链表为空" << endl;
        return;
    }
    while (p->succ != NULL) {
        cout << p->data << "->";
        p = p->succ;
    }
    cout << p->data << endl;
}

int main() {
    // 测试int类型
    cout << "=== 测试int类型 ===" << endl;
    node<int>* p_int;
    p_int = node<int>::insertAsHead();
	cout << "Insert As Head completed." << endl;
    print(p_int);
    deletel(p_int, 1);
	cout << "After deletion of 1:" << endl;
    print(p_int);
    insert(p_int, 3, 2);
	cout << "Insert 2 after 3 completed." << endl;
    print(p_int);
    change(p_int, 2, 9);
	cout << "Change 2 to 9 completed." << endl;
    print(p_int);
	cout << "Size of list: " << node<int>::_size(p_int) << endl;

    // 测试double类型
    /*
    cout << "\n=== 测试double类型 ===" << endl;
    node<double>* p_double;
    p_double = node<double>::insertAsTail();
    print(p_double);
    deletel(p_double, 1.5);
    print(p_double);
    insert(p_double, 3.5, 2.5);
    print(p_double);
    change(p_double, 2.5, 9.9);
    print(p_double);
    */
    return 0;
}
