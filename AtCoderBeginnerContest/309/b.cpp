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
    vector<string> a(n);
    rep (i, n) cin >> a[i];
    auto ans = a;
    ans[0][0] = a[1][0];
    for (int i = 1; i < n; ++i) ans[0][i] = a[0][i - 1];
    for (int i = 1; i < n - 1; ++i) rep (j, n) {
        if (j == 0) ans[i][j] = a[i + 1][j];
        else if (j == n - 1) ans[i][j] = a[i - 1][j];
        else ans[i][j] = a[i][j];
    }
    rep (i, n - 1) ans[n - 1][i] = a[n - 1][i + 1];
    ans[n - 1][n - 1] = a[n - 2][n - 1];
    rep (i, n) cout << ans[i] << endl;
    return 0;
}