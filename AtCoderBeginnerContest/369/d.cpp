#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<vector<ll>> dp(n + 1, vector<ll>(2));
    rep(i, n) {
        dp[i + 1] = dp[i];
        chmax(dp[i + 1][0], dp[i][1] + a[i] + a[i]);
    }
    cout << max(dp[n][0], dp[n][1]) << endl;
    return 0;
}