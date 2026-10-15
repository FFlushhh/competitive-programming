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
    rep (i, h) cin >> s[i];
    int ans = 1e9;
    rep (par, 2) { // 偶数スタートと奇数スタート
        vector dist(h, vector<int>(w, -1));
        queue<pair<int, int>> q;
        auto push = [&](int y, int x, int d) {
            if (y < 0 || y >= h || x < 0 || x >= w) return;
            if (s[y][x] == '#') return;
            if (dist[y][x] != -1) return;
            dist[y][x] = d;
            q.push({y, x});
        };
        rep (i, h) {
            rep (j, w) {
                if (s[i][j] == 'S') push(i, j, 0);
                while (!q.empty()) {
                    auto [y, x] = q.front(); q.pop();
                    int d = dist[y][x];
                    if (s[y][x] == 'G') ans = min(ans, d);
                    if ((y + x) % 2 == par) {
                        push(y - 1, x, d + 1); // 上記のpush関数を呼び出す
                        push(y + 1, x, d + 1); // 上記のpush関数を呼び出す
                    }
                    else {
                        push(y, x - 1, d + 1); // 上記のpush関数を呼び出す
                        push(y, x + 1, d + 1); // 上記のpush関数を呼び出す
                    }
                }
            }
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << endl;
    return 0;
}