#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int h, w, d;
    int ans = 0;
    cin >> h >> w >> d;
    vector<string> s(h);
    rep (i, h) {
        cin >> s[i];
    }

    // 加湿器を置くマスを全探索
    // 1つ目の加湿器の位置
    rep (i1, h) {
        rep (j1, w) {
            if (s[i1][j1] == '#') {
                continue;
            }
            // 2つ目の加湿器の位置
            rep (i2, h) {
                rep (j2, h) {
                    if (s[i2][j2] == '#' || (i1 == i2 && j1 == j2)) { // 机と1つ目の加湿器の位置ならスキップ
                        continue;
                    }
                    // 加湿できるマスを全探索
                    int count = 0;
                    rep (i, h) {
                        rep (j, w) {
                            if (s[i][j] == '.' && (abs(i - i1) + abs(j - j1) <= d || abs(i - i2) + abs(j - j2) <= d)) {
                                ++count;
                            }
                        }
                    }
                    ans = max(ans, count); // 加湿器を置いた場合の最大値を更新
                }
            }

        }
    }
    cout << ans << endl;
    return 0;
}