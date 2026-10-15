#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<bool>> s(100, vector<bool>(100, false));
    rep (i, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = c; i < d; ++i) {
            for (int j = a; j < b; ++j) {
                s[i][j] = true;
            }
        }
    }
    int ans = 0;
    rep (i, 100) {
        rep (j, 100) {
            if (s[i][j]) {
                ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}