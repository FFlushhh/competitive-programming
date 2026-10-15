#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<string> s(n);
    rep (i, n) cin >> s[i];
    int rotate = x % 4;
    vector<string> ans(n, string(n, ' '));
    rep (i, n) {
        rep (j, n) {
            int ni = i, nj = j;
            rep (k, rotate) { // 90度回転
                int tmp = ni;
                ni = nj;
                nj = n - 1 - tmp; // -1はインデックスの調整
            }
            ans[ni][nj] = s[i][j];
        }
    }
    rep (i, n) cout << ans[i] << '\n';
    return 0;
}