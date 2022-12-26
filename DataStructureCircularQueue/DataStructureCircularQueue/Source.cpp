#include <iostream>
using namespace std;
const int SIZE = 5;

class circularQueue {
private:
	int front, rear;
	int arr[SIZE];
public:
	circularQueue() {
		front = -1, rear = -1;
	}
	bool isEmpty();
	bool isFull();
	void enqueue(int value);
	int dequeue();
	void display();
};

bool circularQueue::isEmpty() {
	if (rear == -1 && front == -1)
		return true;
	return false;
}

bool circularQueue::isFull() {
	if ((rear + 1) % SIZE == front)
		return true;
	return false;
}

void circularQueue::enqueue(int value) {
	if (isFull()) {
		cout << "Circular Queue Overflow" << endl;
		return;
	}
	else {
		if (front == -1)
			front = 0;
		rear = (rear + 1) % SIZE;
		arr[rear] = value;
	}
}

int circularQueue::dequeue() {
	int item;
	if (isEmpty()) {
		cout << "Circular Queue Underflow" << endl;
		return -1;
	}
	else if (front == rear) {
		item = arr[front];
		front = -1, rear = -1;
	}
	else {
		item = arr[front];
		front = (front + 1) % SIZE;
	}
	return item;
}

void circularQueue::display() {
	if (isEmpty()) {
		cout << "Circular Queue Is Empty" << endl;
		exit(0);
	}
	for (int i = front; i != rear; i = (i + 1) % SIZE) {
		cout << arr[i] << " ";
	}
	cout << arr[rear] << " " << endl;
}

int main() {
	circularQueue cq;
	cq.enqueue(1);
	cq.enqueue(2);
	cq.enqueue(3);
	cq.enqueue(4);
	cq.enqueue(5);
	cq.dequeue();
	cq.dequeue();
	cq.enqueue(6);
	cq.enqueue(7);
	cq.enqueue(8);
	cq.dequeue();
	cq.dequeue();
	cq.dequeue();
	cq.dequeue();
	cq.dequeue();
	cq.dequeue();
	cq.display();
}