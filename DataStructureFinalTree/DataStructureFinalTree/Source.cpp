#include<iostream>
using namespace std;

struct node {
	int info;
	node* right;
	node* left;
};

class Tree {
private:
	node* root;
public:
	void preorderTraversal(node* p);
	void inorderTraversal(node* p);
	void postorderTraversal(node* p);
};

void Tree::preorderTraversal(node* t) {
	if (root == NULL) {
		cout << "Tree Is Empty." << endl;
		return;
	}
	if (t != NULL) {
		cout << t->info << " ";
		preorderTraversal(t->left);
		preorderTraversal(t->right);
	}
}

void Tree::inorderTraversal(node* t) {
	if (root == NULL) {
		cout << "Tree Is Empty." << endl;
		return;
	}
	if (t != NULL) {
		inorderTraversal(t->left);
		cout << t->info << " ";
		inorderTraversal(t->right);
	}
}

void Tree::postorderTraversal(node* t) {
	if (root == NULL) {
		cout << "Tree Is Empty." << endl;
		return;
	}
	if (t != NULL) {
		postorderTraversal(t->left);
		postorderTraversal(t->right);
		cout << t->info << " ";
	}
}