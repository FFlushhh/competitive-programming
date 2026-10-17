#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, t;
    cin >> n >> k >> t;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    ll prev = 0;

    // tを基準にする
    sort(all(a));
    
    rep(i, n) {
        // cout << "prev: " << prev << endl;
        ll now = a[i];

        if (now > t) break;

        if (prev > now) {
            prev = max(prev, now + k);
            if (prev > t) break;
            continue;
        }

        ll diff = now - prev;

        ans += (diff + k - 1) / k;

        prev = a[i] + k;

        if (prev > t) break;
    }

    if (prev < t) {
        ll diff = t - prev;
        ans += (diff + k - 1) / k;
    }

    cout << ans << endl;
    return 0;
}