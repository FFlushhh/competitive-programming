#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> mp;
    rep (i, s.size()) {
        ++mp[toupper(s[i])];
    }
    if (t[2] != 'X') {
        rep (i, t.size()) {
            if (mp[t[i]] > 0) {
                --mp[t[i]];
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    else {
        rep (i, t.size() - 1) {
            if (mp[t[i]] > 0) {
                --mp[t[i]];
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}