#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// 型変換に注意
template <class T, class U>
inline bool chmax(T &a, const U &b)
{
    return a < b ? (a = b, true) : false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> w(n), h(n), b(n);
    rep(i, n) cin >> w[i] >> h[i] >> b[i];
    ll wsum = accumulate(all(w), 1LL);
    vector<ll> dp(wsum);
    rep(i, n) {
        vector<ll> prev = dp;
        chmax(dp[i], prev[i] + h[i]);
        chmax(dp[i + w[i]], prev[i] + b[i]);
    }
    ll ans = 0;
    rep(i, dp.size() / 2) {
        chmax(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}