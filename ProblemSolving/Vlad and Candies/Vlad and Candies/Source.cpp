#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long t;
	cin >> t;
	long long c = t;
	string* res = new string[t];
	while (c--)
	{
		long long n;
		cin >> n;
		long long cands[10001];
		for (int i = 0; i < n; i++)
		{
			cin >> cands[i];
			if (cands[i] >= 100000)
			{
				cands[i] /= 100000;
			}
		}
		long long prev = 0, maxin = -1;
		while (true)
		{
			if (n == 1 && cands[0] != 1)
			{
				res[c] = "NO";
				break;
			}
			else if (n == 1 && cands[0] == 1)
			{
				res[c] = "YES";
				break;
			}
			bool zrd = true;
			for (int i = 0; i < n; i++)
			{
				if (cands[i] >= cands[maxin] && i != prev)
				{
					maxin = i;
				}
				if (cands[i] != 0)
				{
					zrd = false;
				}
			}
			cands[maxin] -= 1;
			if (prev == maxin)
			{
				res[c] = "NO";
				break;
			}
			else if (zrd)
			{
				res[c] = "YES";
				break;
			}
			prev = maxin;
		}
	}
	for (int i = t - 1; i >= 0; i--)
	{
		cout << res[i] << endl;
	}
}