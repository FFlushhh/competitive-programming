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

// 型変換に注意
template <class T, class U>
inline bool chmax(T &a, const U &b)
{
    return a < b ? (a = b, true) : false;
}

// type: [ long long ]
constexpr long long INFll = -1LL << 60;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> x(n), y(n - 1);
        rep(i, n) cin >> x[i];
        rep(i, n - 1) cin >> y[i];

        vector<vector<ll> > dp(n + 1, vector<ll>(2, INFll));
        dp[0][0] = 0;
        dp[0][1] = 0;
        rep(i, n) {
            if (s[i] == 'S') {
                dp[i + 1][0] = dp[i][0];
                dp[i + 1][1] = dp[i][0] - x[i];
            } else {
                dp[i + 1][0] = dp[i][1] - x[i];
                dp[i + 1][1] = dp[i][1];
            }
        }
        rep(i, n - 1) {
            chmax(dp[i + 1][0], dp[i][1] + y[i]);
            chmax(dp[i + 1][1], dp[i + 1][0]);
        }
        ll ans = max(dp[n][0], dp[n][1]);
        cout << ans << endl;
    }
    return 0;
}