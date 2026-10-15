#include <bits/stdc++.h>
#include <bit>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    int ans = 10;
    for (int i = 0; i < (1 << n); ++i) {
        vector<bool> ok(m, false);
        rep(j, n) {
            if (i >> j & 1) {
                rep(k, m) {
                    if (s[j][k] == 'o') ok[k] = true;
                }
            }
        }
        rep(j, m) {
            if (!ok[j]) break;
            if (j == m - 1) ans = min(ans, __builtin_popcount(i));
        }
    }
    cout << ans << endl;
    return 0;
}