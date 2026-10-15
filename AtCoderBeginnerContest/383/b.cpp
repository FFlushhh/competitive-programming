// 全探索
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int h, w, d;
    int max = 0;
    int max_second = 0;

    cin >> h >> w >> d;
    vector<vector<char>> a(h, vector<char>(w));
    rep (i, h) {
        rep (j, w) {
            cin >> a[i][j];
        }
    }
    rep (i, h) {
        rep (j, w) {
            if (a[i][j] == '#') {
                continue;
            }
            // cout << "i: " << i << " j: " << j << endl;
            int count = 0;
            rep (k ,h) {
                rep (l, w) {
                    if (abs(i - k) + abs(j - l) <= d) {
                        if (a[k][l] == '.') {
                            count++;
                        }
                    }
                    cout << "k: " << k << " l: " << l << " count: " << count << endl;
                }
            }
            if (count >= max) {
                max_second = max;
                max = count;
            }
        }
    }
    cout << max + max_second << endl;
    return 0;
}

/*
1. 2つ目の加湿器の位置を探索するループを追加
2. 加湿範囲を正しく計算する
3. maxとmax_secondの使用をやめる
*/