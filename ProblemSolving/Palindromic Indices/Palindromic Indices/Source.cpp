#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	string* s = new string[t];
	int* n = new int[t];
	int* res = new int[t];
	/*
	for (int i = 0; i < t; i++)
	{
		cin >> n[i];
		cin >> s[i];
		res[i] = 0;
	}
	*/
	for (int i = 0; i < t; i++)
	{
		cin >> n[i];
		cin >> s[i];
		res[i] = 0;
		for (int j = 0; j < n[i]; j++)
		{
			if (n[i] == 2 && s[i][0] == s[i][1])
			{
				res[i] = 2;
				break;
			}
			if (n[i] == 1)
			{
				res[i] = 1;
				break;
			}
			string s2;
			s2 = s[i].substr(0, j - 0) + s[i].substr(j + 1, n[i] - j - 1);
			/*
			for (int k = 0; k < j; k++)
			{
				s2 += s[i][k];
			}
			for (int k = j + 1; k < n[i]; k++)
			{
				s2 += s[i][k];
			}
			*/
			bool palin = true;
			for (int k = 0; k < (n[i] - 1) / 2; k++)
			{
				if (s2[k] != s2[n[i] - k - 2])
				{
					palin = false;
					break;
				}
			}
			if (palin == true)
			{
				res[i] += 1;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		cout << res[i] << endl;
	}
}