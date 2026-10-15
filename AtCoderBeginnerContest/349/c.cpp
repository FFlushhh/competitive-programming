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
    unordered_map<char, int> mp1;
    rep (i, s.size()) {
        mp1[s[i]]++;
    }
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    unordered_map<char, int> mp2;
    rep (i, t.size()) mp2[t[i]]++;
    rep (i, t.size()) {
        if (mp2[t[i]] > mp1[t[i]]) {
            if (i == 2 && t[i] == 'x') continue;
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}