#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> k(n);
    rep (i, n) cin >> k[i];
    ll ans = 0;
    ll diff = 1e8;
    rep (i, 1 << n) {
        if (i == 0 || i == (1 << n) - 1) continue;
        ll a = 0, b = 0;
        rep (j, n) {
            if (i >> j & 1) {
                a += k[j];
            } else {
                b += k[j];
            }
        }
        if (abs(a - b) < diff) {
            diff = abs(a - b);
            ans = max(a, b);
        }
    }
    cout << ans << endl;
    return 0;
}

// 2 <= n <= 20より、bit全探索しても2^20 = 1048576通りで間に合う