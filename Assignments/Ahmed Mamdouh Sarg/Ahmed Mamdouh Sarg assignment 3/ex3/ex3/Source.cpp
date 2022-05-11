#include <iostream>
using namespace std;

struct player
{
	string name;
	int number;
	int points;
}egy[5];

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "enter player " << i + 1 << " data" << endl;
		cout << "name : ";
		cin >> egy[i].name;
		cout << "number : ";
		cin >> egy[i].number;
		cout << "points : ";
		cin >> egy[i].points;
		cout << endl;
	}

	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += egy[i].points;
		cout << egy[i].number << " " << egy[i].name << " " << egy[i].points << endl;
	}
	cout << "total points : " << total;
}