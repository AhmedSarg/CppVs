#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int nm1 = 19 , nm2 = 2;
	double result;

	result = static_cast <double> (nm1 / nm2);
	cout << result;

	return 0;
	
}