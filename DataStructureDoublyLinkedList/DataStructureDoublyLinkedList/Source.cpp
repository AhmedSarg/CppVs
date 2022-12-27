#include <iostream>
using namespace std;

struct node {
	int value;
	node* next;
	node* prev;
};

class doublyLinkedList {
private:
	node* head;
public:
	doublyLinkedList() {
		head = NULL;
	}
	node* createNode(int value);
	void insertStart(int value);
	void insertLast(int value);
	void insertPosition(int pos, int value);
	void deleteStart();
	void deleteLast();
	void deletePosition(int pos);
	void deleteData(int value);
	void display();
};

node* doublyLinkedList::createNode(int value) {
	node* newNode = new node;
	newNode->value = value;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void doublyLinkedList::insertStart(int value) {
	node* newNode = createNode(value);
	if (head != NULL) {
		newNode->next = head;
		newNode->prev = NULL;
		head->prev = newNode;
		head = newNode;
	}
}

void doublyLinkedList::insertLast(int value) {
	node* newNode = createNode(value);
	if (head == NULL) {
		head = newNode;
		return;
	}
	node* current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = newNode;
	newNode->prev = current;
}

void doublyLinkedList::insertPosition(int pos, int value) {
	node* current = head;
	for (int i = 0; i < pos - 2; i++) {
		current = current->next;
		if (head == NULL) {
			cout << "The List Has Elements Less Than " << pos << " elements" << endl;
			return;
		}
	}
	node* newNode = createNode(value);
	current->next->prev = newNode;
	newNode->next = current->next;
	newNode->prev = current;
	current->next = newNode;
}

void doublyLinkedList::deleteStart() {
	node* temp = head;
	head = head->next;
	delete temp;
}

void doublyLinkedList::deleteLast() {
	node* current = head;
	while (current->next != NULL)
		current = current->next;
	current->prev->next = NULL;
	current->prev = NULL;
	delete current;

}

void doublyLinkedList::deletePosition(int pos) {
	node* current = head;
	node* previous = head;
	for (int i = 0; i < pos - 1; i++) {
		previous = current;
		current = current->next;
		if (current == NULL) {
			cout << "The List Has Elements Less Than " << pos << " Elements" << endl;
			return;
		}
	}
	previous->next = current->next;
	current->next->prev = previous;
	delete current;
}

void doublyLinkedList::deleteData(int value) {
	node* temp = head;
	if (temp->value == value) {
		if (temp->next == NULL) {
			head = NULL;
			delete temp;
			return;
		}
		else {
			head = head->next;
			delete temp;
			return;
		}
	}
	while (temp->value != value && temp->next != NULL)
		temp = temp->next;
	if (temp->next == NULL && temp->value != value) {
		cout << "Item Not Found In List" << endl;
		return;
	}
	else if (temp->next == NULL) {
		temp->prev->next = NULL;
		delete temp;
	}
	else {
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		delete temp;
	}
}

void doublyLinkedList::display() {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
	delete temp;
}

int main() {
	doublyLinkedList ll;
	ll.insertLast(4);
	ll.insertStart(2);
	ll.insertPosition(2, 3);
	ll.insertStart(1);
	ll.insertLast(5);
	ll.insertLast(6);
	ll.insertLast(7);
	ll.deleteLast();
	ll.deleteStart();
	ll.deletePosition(2);
	ll.deleteData(10);
	ll.display();
}