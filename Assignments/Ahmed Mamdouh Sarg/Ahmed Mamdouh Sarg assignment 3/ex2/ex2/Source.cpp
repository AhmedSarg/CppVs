#include <iostream>
using namespace std;

struct marks
{
	int number;
	string name;
	int chem_mark;
	int math_mark;
	int phys_mark;
}x[5];

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "enter student " << i + 1 << " data" << endl;
		cout << "enter student number : ";
		cin >> x[i].number;
		cout << "enter student name : ";
		cin >> x[i].name;
		cout << "enter student chemistry mark : ";
		cin >> x[i].chem_mark;
		cout << "enter student maths mark : ";
		cin >> x[i].math_mark;
		cout << "enter student physics mark : ";
		cin >> x[i].phys_mark;
		cout << endl;
	}

	int per[5];
	for (int i = 0; i < 5; i++)
	{
		per[i] = (((x[i].chem_mark + x[i].math_mark + x[i].phys_mark) * 100) / 300);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << x[i].number << " : " << x[i].name << " : " << per[i] << endl;
	}
}