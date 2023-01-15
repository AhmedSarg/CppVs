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
	void insertLast(int value);
	void display();
};

void linkedList::insertLast(int value) {
	node* newNode = new node;
	newNode->next = NULL;
	newNode->value = value;
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

void linkedList::display() {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	linkedList ll;
	ll.insertLast(10);
	ll.insertLast(20);
	ll.insertLast(30);
	ll.insertLast(40);
	ll.display();
}