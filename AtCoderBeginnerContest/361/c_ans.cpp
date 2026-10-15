#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 方針
// N-K個の残すもののmax-minを考える

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep (i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 1e9;
    rep (i, k + 1) { // 左端が0からkまで、右端がn-k-1からn-1まで
        ans = min(ans, a[n - k + i - 1] - a[i]);
    }
    cout << ans << endl;
    return 0;
}