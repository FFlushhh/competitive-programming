#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    ll p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    rep (i, n) cin >> f[i];
    ll ans = 0;
    sort(f.begin(), f.end(), greater<ll>());
    ll sum = 0;
    int cnt = 0;
    rep (i, n) {
        ++cnt;
        sum += f[i];
        if (cnt % d == 0) {
            ans += min(sum, p);
            sum = 0;
        }
        if (i == n - 1) ans += min(sum, p);
    }
    cout << ans << endl;
    return 0;
}