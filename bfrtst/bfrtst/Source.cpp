#include <iostream>
using namespace std;

class geeks
{
public:
	char geekname[50];
	int id;
	void printName();
	void printid()
	{
		cout << id << endl;
	}
};

void geeks::printName()
{
	cout << geekname << endl;
}

int main()
{
	geeks* classPtr,obj;
	classPtr = &obj;
	//classPtr->geekname = "xyz";
	strcpy_s(classPtr->geekname, "xyz");
	classPtr->id = 15;
	classPtr->printName();
	classPtr->printid();
	return 0;
}