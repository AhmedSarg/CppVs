#include <iostream>
using namespace std;

int main()
{
	int need;
    int min;
    int max;
    int mid;
    bool found = false;

	int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

    min = list[0];
    max = list[29];
    mid = (max + min) / 2;

    cout << "min value = " << min << " max value = " << max << endl;
    cout << "enter the number you want to search : ";
    cin >> need;
    
    for (int i = 0; i < 29; i++)
    {
        if (list[mid - 1] == need)
        {
            cout << list[mid - 1] << " FOUND" << endl << "LOOPS : " << i + 1 << endl;
            found = true;
            return need;
        }
        else if (need < (mid))
        {
            max = mid;
            mid = (max + min) / 2;
        }
        else if (need > (mid))
        {
            min = mid;
            mid = (max + min) / 2;
        }
    }
    if (found == false)
    {
        cout << "NOT FOUND" << endl;
    }
}