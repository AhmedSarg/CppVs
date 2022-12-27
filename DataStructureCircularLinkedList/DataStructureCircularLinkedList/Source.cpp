#include <iostream>
using namespace std;

struct node {
	int value;
	node* next;
};

class circularLinkedList {
private:
	node* last;
public:
	circularLinkedList() {
		last = NULL;
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

node* circularLinkedList::createNode(int value) {
	node* newNode = new node;
	newNode->value = value;
	newNode->next = NULL;
	return newNode;
}

void circularLinkedList::insertStart(int value) {
	node* newNode = createNode(value);
	if (last == NULL) {
		last = newNode;
		last->next = newNode;
	}
	else {
		newNode->next = last->next;
		last->next = newNode;
	}
}

void circularLinkedList::insertLast(int value) {
	node* newNode = createNode(value);
	if (last == NULL) {
		last = newNode;
		last->next = newNode;
	}
	else {
		newNode->next = last->next;
		last->next = newNode;
		last = newNode;
	}
}

void circularLinkedList::insertPosition(int pos, int value) {
	node* newNode = createNode(value);
	node* current = last->next;
	for (int i = 0; i < pos - 2; i++)
		current = current->next;
	if (current == last) {
		//cout << "There Are Less Than " << pos << " Items In List" << endl;
		insertStart(value);
		return;
	}
	newNode->next = current->next;
	current->next = newNode;
	if (current == last)
		last = newNode;
}

void circularLinkedList::deleteStart() {
	node* temp = last->next;
	last->next = last->next->next;
	delete temp;
}

void circularLinkedList::deleteLast() {
	node* current = last->next;
	while (current->next != last)
		current = current->next;
	current->next = last->next;
	last = current;
}

void circularLinkedList::deletePosition(int pos) {
	node* current = last->next;
	node* prev = last;
	for (int i = 0; i < pos - 1; i++) {
		prev = prev->next;
		current = current->next;
	}
	if (current == last) {
		last = prev;
		last->next = current->next;
		delete current;
		return;
	}
	else {
		prev->next = current->next;
		delete current;
	}
}

void circularLinkedList::display() {
	if (last == NULL) {
		cout << "List Is Empty" << endl;
		return;
	}
	node* temp = last->next;
	while (temp != last) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << temp->value << endl;
}

int main() {
	circularLinkedList ll;
	ll.insertLast(4);
	ll.insertStart(2);
	ll.insertPosition(2, 3);
	ll.insertStart(1);
	ll.insertLast(5);
	ll.insertLast(6);
	ll.insertLast(7);
	ll.deleteStart();
	ll.deleteLast();
	ll.deletePosition(3);
	ll.display();
}