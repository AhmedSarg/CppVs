#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

class LinkedList {
private:
	node* head;
public:
	LinkedList();
	node* createNode(int value);
	void insertLast(int value);
	void insertFirst(int value);
	void insertPosition(int pos, int value);
	int deleteLast();
	int deleteFirst();
	int deletePosition(int pos);
	void display();
};

LinkedList::LinkedList() {
	head = NULL;
}

node* LinkedList::createNode(int value) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

void LinkedList::insertFirst(int value) {
	node* newNode = createNode(value);
	if (head == NULL) {
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}