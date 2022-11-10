#include <iostream>
using namespace std;

const int SIZE = 5;

class stack {

private:
	int top;
	int items[SIZE];

public:

	stack() {
		top = -1;
	}

	void push(int newItem);
	int pop();
	bool isEmpty();
	bool isFull();
	void display();

};

void stack::push(int newItem) {
	if (isFull()) {
		cout << "Stack Overflow" << endl;
	}
	else {
		top += 1;
		items[top] = newItem;
	}
}

int stack::pop() {
	if (isEmpty()) {
		cout << "Stack Underflow" << endl;
		return NULL;
	}
	else {
		top -= 1;
		return items[top + 1];
	}
}

bool stack::isEmpty() {
	if (top < 0) {
		return true;
	}
	else {
		return false;
	}
}

bool stack::isFull() {
	if (top >= SIZE - 1) {
		return true;
	}
	else {
		return false;
	}
}

void stack::display() {
	cout << "Stack : ";
	for (int i = 0; i < SIZE; i++) {
		cout << items[i] << " ";
	}
	cout << endl;
}

void copy(stack &s1, stack &s2) {

		stack temp;

		while (!temp.isFull()) {
			int x = s1.pop();
			temp.push(x);
		}

		while (!temp.isEmpty()) {
			int x = temp.pop();
			s2.push(x);
		}
}

int main() {

	stack s1, s2;

	s1.push(5);
	s1.push(50);
	s1.push(6);
	s1.push(60);
	s1.push(700);
	s1.pop();
	s1.push(70);
	s1.display();

	copy(s1, s2);

	s2.display();
}