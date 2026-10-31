#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> s(5);
    rep(i, 5) cin >> s[i];

    int ans = 1e9;

    rep(i, 5) {
        int cnt = 0;
        rep(j, 5) {
            if (s[i][j] == '.') ++cnt;
        }
        ans = min(ans, cnt);
    }

    rep(j, 5) {
        int cnt = 0;
        rep(i, 5) {
            if (s[i][j] == '.') ++cnt;
        }
        ans = min(ans, cnt);
    }

    int cnt = 0;
    rep(k, 5) {
        if (s[k][k] == '.') ++cnt;
    }
    ans = min(ans, cnt);

    cnt = 0;

    rep(k, 5) {
        if (s[4 - k][k] == '.') ++cnt;
    }
    ans = min(ans, cnt);

    cout << ans << endl;
    return 0;
}