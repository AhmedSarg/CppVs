#include <iostream>
using namespace std;

class student
{
public :
	string name;
	int id, total_degrees;
	int degrees[3];

	void init(string, int, int[]);
	int compute_total_degrees(int[]);
};
int student::compute_total_degrees(int deg[3])
{
	total_degrees = 0;
	for (int i = 0; i < 3; i++)
	{
		total_degrees += deg[i];
	}
	return total_degrees;
}
void student::init(string n, int i, int d[3])
{
	name = n;
	id = i;
	for (int j = 0; j < 3; j++)
	{
		degrees[j] = d[j];
	}
	compute_total_degrees(degrees);
}

void main()
{
	int n;
	cout << "enter number of students : ";
	cin >> n;
	student *ptrArr = new student[n];

	for (int i = 0; i < n; i++)
	{
		string nm;
		int idd, dgrs[3];

		cout << "enter student name : ";
		cin >> nm;
		cout << "enter student id : ";
		cin >> idd;
		for (int j = 0; j < 3; j++)
		{
			cout << "enter degree " << j + 1 << " : ";
			cin >> dgrs[j];
		}
		ptrArr[i].init(nm, idd, dgrs);
	}
	cout << "############################" << endl << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Name : " << ptrArr[i].name << endl;
		cout << "ID : " << ptrArr[i].id << endl;
		cout << "Total Degrees : " << ptrArr[i].total_degrees << endl << endl;
		cout << "############################" << endl << endl;
	}
}