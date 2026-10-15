#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; ll k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans = s;
    int ocnt = 0;
    rep (i, n) {
        if (s[i] == 'o') ++ocnt;
    }
    rep (i, n) {
        if (s[i] == '?') {
            if (i > 0 && s[i - 1] != 'o' && i < n && s[i + 1] != 'o' && ocnt < k) {
                ans[i] = 'o';
                ++ocnt;
            }
            else if (i > 0 && s[i - 1] == 'o' && i < n && s[i + 1] != 'o') {
                ans[i] = '.';
            }
            else if (i < n && s[i + 1] == 'o' && i > 0 && s[i - 1] != 'o') {
                ans[i] = '.';
            }
            else if (ocnt < k) {
                ans[i] = 'o';
                ++ocnt;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

/*
ABC401
激遅ABC3完4ペナ
C問題でmod取るとマイナスになる可能性に気づかずWA地獄、ほんと勘弁してくれ...
*/