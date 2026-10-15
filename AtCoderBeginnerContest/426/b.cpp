#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    map<char, int> mp;
    rep(i, 3) {
        mp[i]++;
    }
    for (auto &p : mp) {
        if (p.second > 1) {
            cout << p.first << endl;
        }
    }
    return 0;
}