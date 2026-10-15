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
    vector<int> p(n), a(n), b(n);
    rep(i, n) cin >> p[i] >> a[i] >> b[i];
    vector<vector<ll> > dp(n + 1, vector<ll>(501, 0));
    rep(i, n) {
        for (int j = 0; j <= 500; ++j) {
            if (j - p[i] >= 0) {
                chmax(dp[i + 1][j], dp[i][j] + a[i]);
            } else {
                chmax(dp[i + 1][j], dp[i][j] - b[i]);
            }
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << dp[n][x] << endl;
    }
    return 0;
}