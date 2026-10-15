#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int ans = 0;
    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == '#') {
                bool judge = true;
                for (int k = i - 1; k <= i + 1; ++k) {
                    if (k < 0 || k >= h) continue;
                    for (int l = j - 1; l <= j + 1; ++l) {
                        if (l < 0 || l >= w || (k == i && l == j)) continue;
                        if (s[k][l] == '#') {
                            judge = false;
                            break;
                        }
                    }
                    if (!judge) break;
                }
                if (judge) ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}