#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

void chmin(int &a, int b)
{
    a = min(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<vector<int> > dp(n + 1, vector<int> (3, INT_MAX));
        dp[0][0] = 0;
        rep (i, n) {
            rep (j, 3) {
                int cost = ((s[i] - '0') == (j % 2)) ? 0 : 1;
                rep (pj, j + 1) {
                    chmin(dp[i + 1][j], dp[i][pj] + cost);
                }
            }
        }
        int ans = *min_element(dp[n].begin(), dp[n].end());
        cout << ans << endl;
    }
    return 0;
}