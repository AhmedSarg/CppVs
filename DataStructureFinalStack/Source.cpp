#include <iostream>
using namespace std;

class stack {
private:
	int *arr;
	int top;
	int size;
public:
	stack();
	bool isEmpty();
	bool isFull();
	void push(int value);
	int pop();
	void display();
	~stack();
};

stack::stack() {
	top = -1;
	cout << "enter stack size : ";
	cin >> size;
	arr = new int[size];
}

bool stack::isEmpty() {
	if (top >= 0)
		return false;
	return true;
}

bool stack::isFull() {
	if (top < size-1)
		return false;
	return true;
}

void stack::push(int value) {
	if (isFull()) {
		cout << "Stack Overflow." << endl;
		return;
	}
	arr[++top] = value;
}

int stack::pop() {
	if (isEmpty()) {
		cout << "Stack Underflow." << endl;
		return -1;
	}
	return arr[top--];
}

void stack::display() {
	for (int i = 0; i <= top; i++)
		cout << arr[i] << " ";
	cout << endl;
}

stack::~stack() {
	top = -1;
	delete arr;
}

bool isOperator(char op) {
	if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == '%')
		return true;
	return false;
}

int power(int op1, int op2) {
	int result = 1;
	for (int i = 0; i < op2; i++)
		result *= op1;
	return result;
}

int postfixEvaluation(string postfix) {
	stack st;
	for (int i = 0; i < postfix.length(); i++) {
		if (!isOperator(postfix[i]))
			st.push(postfix[i] - 48);
		else {
			int operator2 = st.pop();
			int operator1 = st.pop();
			switch (postfix[i]) {
			case '+':
				st.push(operator1 + operator2);
				break;
			case '-':
				st.push(operator1 - operator2);
				break;
			case '*':
				st.push(operator1 * operator2);
				break;
			case '/':
				st.push(operator1 / operator2);
				break;
			case '^':
				st.push(power(operator1, operator2));
				break;
			case '%':
				st.push(operator1 % operator2);
				break;
			default:
				st.push(-1);
				break;
			}
		}
	}
	return st.pop();
}

int main() {
	string postfix;
	cout << "Enter the postfix : ";
	cin >> postfix;
	cout << "Result : " << postfixEvaluation(postfix) << endl;
}