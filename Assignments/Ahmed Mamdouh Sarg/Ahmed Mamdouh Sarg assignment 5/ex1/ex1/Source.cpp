#include <iostream>
#include <string>
//#include <sstream>
//#include <iomanip>
using namespace std;

class stock
{
public:
	string name, mark;
	double previousClosingPrice, currentPrice, percent;
	stock (string nm, double pcp, double cp)
	{
		name = nm;
		previousClosingPrice = pcp;
		currentPrice = cp;
	}
	stock()
	{
		name = "NULL";
		previousClosingPrice = 0;
		currentPrice = 0;
	}
	double getChangePercent(double, double);
	void showStock();
};

double stock::getChangePercent(double pcp, double cp)
{
	if (pcp > cp)
	{
		percent = 100 - ((cp / pcp) * 100);
		mark = "-";
	}
	else if (cp > pcp)
	{
		percent = 100 - ((pcp / cp) * 100);
		mark = "";
	}
	return percent;
}

void stock::showStock()
{
	cout << endl;
	cout << "Stock name : " << name << endl;
	cout << "Stock price yesterday : " << previousClosingPrice << endl;
	cout << "Stock price today : " << currentPrice << endl;
	cout << "Stock price change percentage : " << mark << getChangePercent(previousClosingPrice, currentPrice) << "% " << endl;
}

int main()
{
	string snm;
	double prevprice, curprice;
	cout << "enter stock name : ";
	getline(cin, snm);
	cout << "enter price for the previous day : ";
	cin >> prevprice;
	cout << "enter price for current time : ";
	cin >> curprice;
	stock stk1(snm, prevprice, curprice);
	stk1.showStock();
}