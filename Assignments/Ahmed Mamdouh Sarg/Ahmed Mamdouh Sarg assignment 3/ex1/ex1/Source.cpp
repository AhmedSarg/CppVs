#include <iostream>
using namespace std;

struct customer
{
	string name;
	int accNum;
	int balance;
};

void lessThan200(customer[]);
void add100(customer[]);

int main()
{
	customer x[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "enter costumer " << i + 1 << " data : " << endl;
		cout << "account name : ";
		cin >> x[i].name;
		cout << "account number : ";
		cin >> x[i].accNum;
		cout << "account balance : ";
		cin >> x[i].balance;
		cout << endl;
	}

	lessThan200(x);
	add100(x);

}

void lessThan200(customer x[])
{
	cout << "less than 200 : ";
	for (int i = 0; i < 5; i++)
	{
		if (x[i].balance < 200)
		{
			cout << x[i].name << " ";
		}
	}
	cout << endl;
}

void add100(customer x[])
{
	cout << "increamented customers : ";
	for (int i = 0; i < 5; i++)
	{
		if (x[i].balance > 1000)
		{
			x[i].balance += 100;
			cout << x[i].name << " : " << x[i].balance << "   ";
		}
	}
	cout << endl;
}