#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<ll> b(n), w(m);
    rep (i, n) cin >> b[i];
    rep (i, m) cin >> w[i];
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());
    ll ans = 0;
    int j = 0;
    int k = 0;
    vector<ll> sum_b(n + 1), sum_w(m + 1);
    rep (i, n) sum_b[i + 1] = sum_b[i] + b[i];
    rep (i, m) sum_w[i + 1] = sum_w[i] + w[i];
    while (j < n && b[j] >= 0) ++j;
    while (k < m && w[k] >= 0) ++k;
    if (j < k) {
        while (b[j] + w[j] >= 0 && j < min(m, n)) ++j;
        ans += sum_b[j] + sum_w[j]; 
    }
    else ans += sum_b[j] + sum_w[k];
    cout << ans << endl;
    return 0;
}