#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 自力で解けた

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<char, int>> v;
    pair<char, int> p;
    rep (i, n) {
        if (i == 0) {
            p.first = s[i];
            p.second = 1;
        }
        else if (s[i] == p.first) {
            p.second++;
        }
        else {
            v.push_back(p);
            p.first = s[i];
            p.second = 1;
        }
    }
    v.push_back(p);
    map<char, int> mp;
    for (auto p : v) {
        mp[p.first] = max(mp[p.first], p.second);
    }
    int ans = 0;
    for (auto p : mp) {
        ans += p.second;
    }
    cout << ans << endl;
    return 0;
}