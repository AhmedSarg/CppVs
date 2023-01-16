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
	void deleteNode(node* oldNode);
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

void LinkedList::deleteNode(node* oldNode) {
	delete oldNode;
}

void LinkedList::insertLast(int value) {
	node* newNode = createNode(value);
	if (head == NULL) {
		head = newNode;
	}
	else {
		node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
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

void LinkedList::insertPosition(int pos, int value) {
	if (head == NULL && pos > 1)
		cout << "Position Greater Than Existing Elements." << endl;
	else if (head == NULL && pos == 1) {
		node* newNode = createNode(value);
		head = newNode;
	}
	else {
		node* newNode = createNode(value);
		node* temp = head;
		for (int i = 1; i < pos - 1; i++) {
			if (temp == NULL) {
				cout << "Position Greater Than Existing Elements." << endl;
				exit(0);
			}
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

int LinkedList::deleteLast() {
	int val;
	if (head == NULL) {
		val = -1;
		cout << "No Items To Delete." << endl;
	}
	else if (head->next == NULL) {
		val = head->data;
		deleteNode(head);
		head = NULL;
	}
	else {
		node* temp = head;
		node* prev;
		while (temp->next != NULL) {
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		val = temp->data;
		deleteNode(temp);
	}
	return val;
}

int LinkedList::deleteFirst() {
	int val;
	if (head == NULL) {
		val = -1;
		cout << "No Items To Delete." << endl;
	}
	else if (head->next == NULL) {
		val = head->data;
		deleteNode(head);
		head = NULL;
	}
	else {
		val = head->data;
		node* temp = head;
		head = head->next;
		deleteNode(temp);
	}
	return val;
}

int LinkedList::deletePosition(int pos) {
	int val;
	if (head == NULL) {
		val = -1;
		cout << "Position Greater Than Existing Elements." << endl;
	}
	else {
		node* temp = head;
		node* prev;
		for (int i = 1; i < pos; i++) {
			prev = temp;
			temp = temp->next;
			if (temp == NULL) {
				cout << "Position Greater Than Existing Elements." << endl;
				exit(0);
			}
		}
		prev->next = NULL;
		deleteNode(temp);
	}
}