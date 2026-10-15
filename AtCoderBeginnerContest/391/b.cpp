#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i, n) cin >> s[i];
    rep(i, m) cin >> t[i];
    pair<int, int> ans;
    rep (i, n - m + 1) {
        rep (j, n - m + 1) {
            if (s[i][j] == t[0][0]) {
                bool ok = true;
                for (int k = i; k < i + m; ++k) {
                    for (int l = j; l < j + m; ++l) {
                        if (s[k][l] != t[k - i][l - j]) {
                            ok = false;
                            break;
                        }
                    }
                    if (!ok) break;
                }
                if (ok) {
                    ans.first = i;
                    ans.second = j;
                    break;
                }
            }
        }
    }
    cout << ans.first + 1 << " " << ans.second + 1 << endl;
    return 0;
}