#include <iostream>
using namespace std;

class CString
{
	string x;
public:
	CString()
	{
		x = "";
	}
	CString(string str)
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
	CString operator+(CString conc)
	{
		CString tmp;
		tmp.x = this->x + conc.x;
		return tmp;
	}
	void operator==(CString c2)
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
	CString obj1(strTmp);
	cout << "Enter Another String : ";
	cin >> strTmp;
	
	CString obj2(strTmp);
	CString obj3 = obj1 + obj2;
	cout << "Concatenation Of the Two Strings : " << obj3.getX() << endl;
	obj1 == obj2;
}