#include <iostream>
using namespace std;
const int SIZE = 5;

class stack {
private:
	int top;
	int arr[SIZE];
public:
	stack() {
		top = -1;
	}
	void push(int value);
	int pop();
	bool isFull();
	bool isEmpty();
	void display();
};

bool stack::isFull() {
	if (top >= SIZE - 1)
		return true;
	return false;
}

bool stack::isEmpty() {
	if (top <= -1)
		return true;
	return false;
}

void stack::push(int value) {
	if (isFull()) {
		cout << "Stack Overflow" << endl;
		return;
	}
	arr[++top] = value;
}

int stack::pop() {
	if (isEmpty()) {
		cout << "Stack Underflow" << endl;
		return -1;
	}
	return arr[top--];
}

void stack::display() {
	for (int i = 0; i <= top; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	stack st;
	int arrPops[6];
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	arrPops[0] = st.pop();
	arrPops[1] = st.pop();
	arrPops[2] = st.pop();
	arrPops[3] = st.pop();
	arrPops[4] = st.pop();
	arrPops[5] = st.pop();
	st.push(6);
	st.push(7);
	st.push(8);
	st.push(9);
	st.push(10);
	st.push(11);
	st.display();
	cout << "pops: ";
	for (int i = 0; i < 6; i++) {
		cout << arrPops[i] << " ";
	}
}