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
    
    int h, w;
    cin >> h >> w;
    vector<vector<int>> grid(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> grid[i][j];
    vector<string> ans(h, string(w, '.'));
    rep(i, h) {
        rep(j, w) {
            if (grid[i][j] != 0) ans[i][j] = 'A' + grid[i][j] - 1;
        }
    }
    rep(i, h) cout << ans[i] << endl;
    return 0;
}