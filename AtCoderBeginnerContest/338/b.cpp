#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int maxfreq = 0;
    cin >> s;
    map<char, int> mp;
    rep (i, s.size()) {
        mp[s[i]]++;
        maxfreq = max(maxfreq, mp[s[i]]);
    }
    sort(s.begin(), s.end());
    rep (i, s.size()) {
        if (mp[s[i]] == maxfreq) {
            cout << s[i] << endl;
            return 0;
        }
    }
    return 0;
}