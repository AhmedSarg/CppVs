#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char ope;

	cout << "Enter 'x' in operation to close program." << endl << endl;

	do
	{
		cout << "Enter First Number : ";
		cin >> num1;

		cout << "Enter Second Number : ";
		cin >> num2;

		cout << "Enter Operation (+ , - , * , / , %) : ";
		cin >> ope;

		switch (ope)
		{
		case '+':
		{
			cout << "Result = " << num1 + num2 << endl;
			break;
		}
		case '-':
		{
			cout << "Result = " << num1 - num2 << endl;
			break;
		}
		case '*':
		{
			cout << "Result = " << num1 * num2 << endl;
			break;
		}
		case '/':
		{
			if (num2 == 0)
			{
				cout << "Error Can't Divide By Zero" << endl;
			}
			else if ((num1 / num2) % 2 == 0 && num2 != 0)
			{
				cout << "Result = " << num1 / num2 << endl;
			}
			else if ((num1 / num2) % 2 != 0 && num2 != 0)
			{
				cout << "Result = " << static_cast <float> (num1) / num2 << endl;
			}
			
			else
			{
				cout << "Error" << endl;
			}
			break;
		}
		case '%':
		{
			cout << "Result = " << num1 % num2 << endl;
			break;
		}
		case 'x' :
		{
			cout << "Good Bye :(" << endl;
			exit(0);
		}
		default:
		{
			cout << "Error , Choose Operation Only From (+ , - , * , / , %)" << endl;
		}
		}
	}
	while(true);
}