#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    int cnt = 0;
    rep (i, 8) {
        string s;
        cin >> s;
        bool judge = true;
        rep (j, 8) {
            if (s[j] == '#') {
                mp[j]++;
                judge = false;
            }
        }
        if (judge) cnt++;
    }
    cout << (8 - mp.size()) * cnt << endl;
    return 0;
}