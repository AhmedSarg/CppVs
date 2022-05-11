#include <iostream>
using namespace std;

class cstring
{
	string x;
public:
	cstring()
	{
		x = "";
	}
	cstring(string str)
	{
		x = str;
	}
	string getX()
	{
		return x;
	}
	void setX(string str)
	{
		x = str;
	}
	cstring operator+(cstring conc)
	{
		cstring tmp;
		tmp.x = this->x + conc.x;
		return tmp;
	}
	void operator==(cstring c2)
	{
		bool eq = true;
		if (x.length() == (c2.getX()).length())
		{
			for (int i = 0; i < (x.length()); i++)
			{
				if (x[i] != (c2.getX())[i])
				{
					eq = false;
					cout << "Strings Not Equal" << endl;
					break;
				}
			}
			if (eq == true)
			{
				cout << "Strings Are Equal" << endl;
			}
		}
		else
		{
			cout << "Strings Not Equal" << endl;
		}
	}
};

int main()
{
	string strTmp;
	cout << "Enter A String : ";
	cin >> strTmp;
	cstring obj1(strTmp);
	cout << "Enter Another String : ";
	cin >> strTmp;
	
	cstring obj2(strTmp);
	cstring obj3 = obj1 + obj2;
	cout << "Concatenation Of the Two Strings : " << obj3.getX() << endl;
	obj1 == obj2;
}