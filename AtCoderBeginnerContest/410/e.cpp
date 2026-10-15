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
    
    int n, h, m;
    cin >> n >> h >> m;
    vector<vector<int> > dp(n + 1, vector<int>(m + 1, -1));
    rep(i, m + 1) dp[0][i] = h;
    rep1(i, n) {
        int a, b;
        cin >> a >> b;
        rep(j, m + 1) {
            chmax(dp[i][j], dp[i - 1][j] - a);
            if (j + b <= m) {
                chmax(dp[i][j], dp[i - 1][j + b]);
            }
        }
    }
    int ans = 0;
    rep1(i, n) {
        bool ok = false;
        rep(j, m + 1) {
            if (dp[i][j] >= 0) {
                ok = true;
                break;
            }
        }
        if (ok) ans++;
        else break;
    }
    cout << ans << endl;
    return 0;
}