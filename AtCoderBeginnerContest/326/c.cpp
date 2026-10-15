#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 二分探索

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    rep (i, n) {
        int end = a[i] + m;
        auto it = lower_bound(a.begin(), a.end(), end);
        ans = max(ans, (ll)(it - a.begin() - i));
    }
    cout << ans << endl;
    return 0;
}

/*
方針
尺取り法または二分探索
*/