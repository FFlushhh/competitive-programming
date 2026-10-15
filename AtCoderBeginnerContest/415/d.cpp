#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m;
    cin >> n >> m;
    vector<tuple<ll, ll, ll> > ex(m);
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        ex[i] = make_tuple(a - b, a, b);
    }
    sort(ex.begin(), ex.end());
    ll ans = 0;
    for (auto [d, a, b] : ex) {
        if (n - a < 0) continue;
        ll x = (n - a) / d + 1;
        ans += x;
        n -= x * d;
    }
    cout << ans << endl;
    return 0;
}