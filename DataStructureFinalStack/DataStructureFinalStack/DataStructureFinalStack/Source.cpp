#include <iostream>
using namespace std;

class stack {
private:
	int *arr;
	int top;
	int size;
public:
	stack();
	bool isEmpty();
	bool isFull();
	void push(int value);
	int pop();
	void display();
	~stack();
};

stack::stack() {
	top = -1;
	cout << "enter stack size : ";
	cin >> size;
	arr = new int[size];
}

bool stack::isEmpty() {
	if (top >= 0)
		return false;
	return true;
}

bool stack::isFull() {
	if (top < size-1)
		return false;
	return true;
}

void stack::push(int value) {
	if (isFull()) {
		cout << "Stack Overflow." << endl;
		return;
	}
	arr[++top] = value;
}

int stack::pop() {
	if (isEmpty()) {
		cout << "Stack Underflow." << endl;
		return -1;
	}
	return arr[top--];
}

void stack::display() {
	for (int i = 0; i <= top; i++)
		cout << arr[i] << " ";
	cout << endl;
}

stack::~stack() {
	top = -1;
	delete arr;
}

int main() {
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.push(60);
	st.display();
}