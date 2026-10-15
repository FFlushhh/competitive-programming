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
    
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll sum = 0;
    rep(i, n) sum += min(a[i], b[i]);
    while (q--) {
        char c;
        ll x, v;
        cin >> c >> x >> v;
        x--;
        if (c == 'A') {
            sum -= min(a[x], b[x]);
            a[x] = v;
            sum += min(a[x], b[x]);
        } else {
            sum -= min(a[x], b[x]);
            b[x] = v;
            sum += min(a[x], b[x]);
        }
        cout << sum << "\n";
    }
    return 0;
}