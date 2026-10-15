#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 90 degrees clockwise rotation of a square string matrix
vector<string> rotate90cw(const vector<string>& s)
{
    int n = s.size();
    vector<string> res(n, string(n, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[j][n - 1 - i] = s[i][j];
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep (i, n) cin >> s[i];
    rep (i, n) cin >> t[i];
    int ans = INT_MAX;
    rep (i, 4) {
        int cnt = i;
        rep (j, n) {
            rep (k, n) {
                if (s[j][k] != t[j][k]) ++cnt;
            }
        }
        ans = min(ans, cnt);
        s = rotate90cw(s);
    }
    cout << ans << endl;
    return 0;
}