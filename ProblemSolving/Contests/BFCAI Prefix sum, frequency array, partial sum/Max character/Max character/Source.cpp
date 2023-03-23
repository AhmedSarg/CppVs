#include <bits/stdc++.h>
#define AhmedSarg ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define ll long long
using namespace std;

//bool cmp(pair<char, int>& p1, pair<char, int>& p2) {
//    return p1.second > p2.second;
//}

int main() {
    AhmedSarg;
    /*string s;
    cin >> s;
    map<char, int>mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    vector<pair<char, int>>v;
    for (auto i : mp) {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].second;*/
    string s;
    cin >> s;
    int n = s.size();
    vector<int>freq(26);
    for (int i = 0; i < n; i++)
        freq[s[i] - 97]++;
    cout << *max_element(freq.begin(), freq.end());
}