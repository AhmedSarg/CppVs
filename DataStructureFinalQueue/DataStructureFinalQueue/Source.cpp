#include <iostream>
#define max_size 5
using namespace std;

class queue {
private:
	int front, rear;
	int arr[max_size];
public:
	queue();
	bool isFull();
	bool isEmpty();
	void enqueue(int value);
	int dequeue();
	void display();
};

queue::queue() {
	front = -1;
	rear = -1;
}

bool queue::isEmpty() {
	if (front <= -1 && rear == -1)
		return true;
	return false;
}

bool queue::isFull() {
	if (rear >= max_size - 1)
		return true;
	return false;
}

void queue::enqueue(int value) {
	if (isEmpty()) {
		rear = 0;
		front = 0;
		arr[rear] = value;
	}
	else {
		if (isFull()) {
			cout << "Queue Overflow." << endl;
			return;
		}
		arr[++rear] = value;
	}
}

int queue::dequeue() {
	if (isEmpty()) {
		cout << "Queue Underflow." << endl;
		return -1;
	}
}