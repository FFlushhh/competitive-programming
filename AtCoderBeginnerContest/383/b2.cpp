#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int ans = 0;
    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == '.') { // 一つ目の加湿器設置
                rep (k, h) {
                    rep (l, w) {
                        if (s[k][l] == '.' && (i != k || j != l)) { // 二つ目の加湿器設置
                            int cnt = 0;
                            // 加湿されている床マスをサーチ
                            rep (m, h) {
                                rep (n, w) {
                                    if (s[m][n] == '.') {
                                        if (abs(i - m) + abs(j - n) <= d || abs(k - m) + abs(l - n) <= d) {
                                            cnt++;
                                        }
                                    }
                                }
                            }
                            ans = max(ans, cnt);
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}