#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;
    if (n == 0) {
        cout << t << endl;
        return 0;
    }
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;
    ll now = 0;
    while (now <= t) {
        int idx = lower_bound(all(a), now) - a.begin();
        if (idx > n - 1) break;
        ans += a[idx] - now;
        now = a[idx] + 100;
    }
    if (t - now > 0) ans += t - now;
    cout << ans << endl;
    return 0;
}