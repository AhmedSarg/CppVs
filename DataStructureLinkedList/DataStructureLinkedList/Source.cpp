#include <iostream>
using namespace std;

struct node {
	int value;
	node* next;
};

class linkedList {
private:
	node* head;
public:
	linkedList() {
		head = NULL;
	}
	node* createNode(int value);
	void insertStart(int value);
	void insertLast(int value);
	void insertPosition(int pos, int value);
	void deleteStart();
	void deleteLast();
	void deletePosition(int pos);
	void display();
};

node* linkedList::createNode(int value) {
	node* newNode = new node;
	newNode->value = value;
	newNode->next = NULL;
	return newNode;
}

void linkedList::insertStart(int value) {
	node* newNode = createNode(value);
	if (head != NULL)
		newNode->next = head;
	head = newNode;
}

void linkedList::insertLast(int value) {
	node* newNode = createNode(value);
	if (head == NULL)
		head = newNode;
	else {
		node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
}

void linkedList::insertPosition(int pos, int value) {
	node* newNode = createNode(value);
	node* previous = head;
	node* current = head;
	if (pos == 1)
		insertStart(value);
	else {
		for (int i = 1; i < pos - 1; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = newNode;
		newNode->next = current;
	}
}

void linkedList::deleteStart() {
	node* temp;
	temp = head;
	head = head->next;
	delete temp;
}

void linkedList::deleteLast() {
	node* current = head;
	node* previous = head;
	while (current->next != NULL) {
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
	delete current;
}

void linkedList::deletePosition(int pos) {
	node* current = head;
	node* previous = head;
	if (pos == 1)
		deleteStart();
	else {
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		delete current;
	}
}

void linkedList::display() {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
}

int main() {
	linkedList ll;
	ll.insertLast(4);
	ll.insertStart(2);
	ll.insertPosition(3, 3);
	ll.insertStart(1);
	ll.insertLast(5);
	ll.deleteLast();
	ll.deleteStart();
	ll.deletePosition(2);
	ll.display();
}