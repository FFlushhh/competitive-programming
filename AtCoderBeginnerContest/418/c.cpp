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
    
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> sum(n + 1, 0);
    rep(i, n) sum[i + 1] = sum[i] + a[i];
    while (q--) {
        ll b;
        cin >> b;
        if (b > a.back()) {
            cout << -1 << endl;
            continue;
        }
        ll idx = lower_bound(a.begin(), a.end(), b) - a.begin();
        cout << sum[idx] + (ll)(b - 1) * (n - idx) + 1 << endl;
    }
    return 0;
}