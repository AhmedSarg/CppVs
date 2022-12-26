#include <iostream>
using namespace std;
const int SIZE = 5;

class queue {
private:
	int front, rear;
	int arr[SIZE];
public:
	queue() {
		front = -1, rear = -1;
	}
	void enqueue(int value);
	int dequeue();
	bool isFull();
	bool isEmpty();
	void display();
};

bool queue::isEmpty() {
	if (front == -1 && rear == -1)
		return true;
	return false;
}

bool queue::isFull() {
	if (rear == SIZE - 1)
		return true;
	return false;
}

void queue::enqueue(int value) {
	if (isFull()) {
		cout << "Queue Overflow" << endl;
		return;
	}
	else {
		if (front == -1)
			front = 0;
		arr[++rear] = value;
	}
}

int queue::dequeue() {
	int item;
	if (isEmpty()) {
		cout << "Queue Underflow" << endl;
		exit(0);
	}
	else if (front == rear) {
		item = arr[front];
		front = -1, rear = -1;
	}
	else {
		item = arr[front++];
	}
	return item;
}

void queue::display() {
	if (isEmpty()) {
		cout << "Queue Is Empty" << endl;
		return;
	}
	for (int i = front; i <= rear; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	queue qu;
	qu.enqueue(1);
	qu.enqueue(2);
	qu.enqueue(3);
	qu.enqueue(4);
	qu.enqueue(5);
	qu.enqueue(6);
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.display();
}