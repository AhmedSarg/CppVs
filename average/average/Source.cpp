#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3, n4, n5 , avg , sum;
	cout << "enter five numbers" << endl;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	sum = n1 + n2 + n3 + n4 + n5;
	avg = sum / 5;
	cout << "the average of the five numbers is " << avg << endl;
	return 0;
}