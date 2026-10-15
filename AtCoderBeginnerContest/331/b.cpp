#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    ll ans = 0;
    for (ll i = 0; i <= n; ++i) {
        ll j = 0, k = 0;
        for (j = 0; i + j <= n; ++j) {
            ll value = n - (6 * i + 8 * j);
            if (value < 0) {
                break;
            }
            k = (value + 12 - 1) / 12;
        }
        ans = min(ans, i * s + j * m + k * l);
    }
    cout << ans << endl;
    return 0;
}