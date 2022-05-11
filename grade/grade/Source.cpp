#include <iostream>
using namespace std;

int main()
{
	int degr;
	cout << "enter your degree : ";
	cin >> degr;

	// By If Else
	if (degr >= 50 && degr < 65)
	{
		cout << "succeed" << endl;
		cout << "FAIR" << endl;
	}
	else if (degr >= 65 && degr < 75)
	{
		cout << "succeed" << endl;
		cout << "GOOD" << endl;
	}
	else if (degr >= 75 && degr < 85)
	{
		cout << "succeed" << endl;
		cout << "VERY GOOD" << endl;
	}
	else if (degr >= 85 && degr <= 100)
	{
		cout << "succeed" << endl;
		cout << "PERFECT" << endl;
	}
	else if (degr < 50 && degr >= 0)
	{
		cout << "failed" << endl;
	}
	else if (degr < 0 || degr > 100)
	{
		cout << "enter a value between zero and one hundred" << endl;
	}
	else
	{
		cout << "unknown error" << endl;
	}


	/*
	// By Switch
	switch (degr)
	{
		case 50 :
			cout << "succeed" << endl << "FAIR" << endl;
			break;
		case 65 :
			cout << "succeed" << endl << "GOOD" << endl;
			break;
		case 75 :
			cout << "succeed" << endl << "VERY GOOD" << endl;
			break;
		case 85 :
			cout << "succeed" << endl << "PERFECT" << endl;
			break;
		default :
			cout << "failed" << endl;
			break;
	}
	*/
	return 0;
}