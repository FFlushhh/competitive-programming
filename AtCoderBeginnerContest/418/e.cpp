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
    
    int n;
    cin >> n;
    vector<long double> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    ll ans = 0;
    map<long double, ll> cnt;
    rep(i, n) {
        for (int j = i + 1; j < n; ++j) {
            long double dx = x[j] - x[i];
            long double dy = y[j] - y[i];
            if ((dx == 0 && dy == 0) || dx == 0) continue;
            long double s = dy / dx;
            cnt[s]++;
        }
    }
    for (auto [s, num] : cnt) {
        ans += num * (num - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}