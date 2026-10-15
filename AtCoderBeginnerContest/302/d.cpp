#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; ll d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    rep (i, n) cin >> a[i];
    rep (i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = -1;
    rep (i, n) {
        ll plus = a[i] + d;
        auto it = upper_bound(b.begin(), b.end(), plus);
        it--;
        if (abs(a[i] - *it) <= d) ans = max(ans, a[i] + *it);
    }
    cout << ans << endl;
    return 0;
}