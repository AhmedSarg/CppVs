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
	if (front == -1)
		return true;
	return false;
}

bool queue::isFull() {
	if ((rear == max_size - 1 && front == 0) || front == rear + 1)
		return true;
	return false;
}

void queue::enqueue(int value) {
	if (isFull())
		cout << "Queue Overflow." << endl;
	else {
		if (front == -1)
			front = 0;
		rear = (rear + 1) % max_size;
		arr[rear] = value;
	}
}

int queue::dequeue() {
	int item;
	if (isEmpty()) {
		cout << "Queue Underflow." << endl;
		exit(0);
	}
	else if (front == rear) {
		item = arr[front];
		front = -1;
		rear = -1;
	}
	else {
		item = arr[front];
		front = (front + 1) % max_size;
	}
	return item;
}

void queue::display() {
	if (front > rear) {
		for (int i = rear; i <= front; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	else {
		for (int i = front; i <= rear; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

int main() {
	queue qu;
	qu.enqueue(10);
	qu.enqueue(20);
	qu.enqueue(30);
	qu.enqueue(40);
	qu.enqueue(50);
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.dequeue();
	qu.enqueue(60);
	qu.enqueue(70);
	qu.enqueue(80);
	qu.enqueue(90);
	qu.enqueue(100);
	qu.enqueue(110);
	qu.display();
}