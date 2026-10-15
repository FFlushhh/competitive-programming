#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 尺取り法

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
    int ans = 0;
    int j = 0;
    rep (i, n) {
        while (j < n && a[j] - a[i] < m) ++j;
        ans = max(ans, j - i);
    }
    cout << ans << endl;
    return 0;
}
