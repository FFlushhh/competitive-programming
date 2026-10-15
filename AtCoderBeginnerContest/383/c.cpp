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
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    vector<vector<bool>> hd(h, vector<bool>(w, false));
    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == 'H') {
                ++ans;
                queue<pair<int, int>> q;
                q.push(make_pair(i, j));
                vector<vector<int>> dist(h, vector<int>(w, -1));
                dist[i][j] = 0;
                hd[i][j] = true;
                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();
                    rep (k, 4) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                        if (s[nx][ny] != '.') continue;
                        if (dist[nx][ny] != -1) continue;
                        if (dist[x][y] + 1 > d) continue;
                        ++ans;
                        dist[nx][ny] = dist[x][y] + 1;
                        if (hd[nx][ny]) --ans;
                        hd[nx][ny] = true;
                        q.push(make_pair(nx, ny));
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}