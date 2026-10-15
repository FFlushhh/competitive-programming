#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    rep (i, n) cin >> c[i];
    rep (i, m) cin >> d[i];
    vector<int> p(m + 1);
    rep (i, m + 1) cin >> p[i];
    int ans = 0;
    rep (i, n) {
        rep (j, m) {
            if (c[i] == d[j]) {
                ans += p[j + 1];
                break;
            }
            if (j == m - 1) ans += p[0];
        }
    }
    cout << ans << endl;
    return 0;
}