#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    rep(i, n) cin >> q[i];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    int ans = 0;
    int i = 0;
    while (1) {
        bool ok = true;
        rep(i, n) q[i] -= a[i] * i;
        rep(i, n) if (q[i] < 0) {
            ok = false;
            break;
        }
        if (!ok) break;
        int mn = INT_MAX;
        rep(i, n) mn = min(mn, q[i] / b[i]);
        ans = max(ans, i + mn);
    }
    cout << ans << endl;
    return 0;
}