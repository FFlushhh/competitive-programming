#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int R, C;
    cin >> R >> C;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    --sy, --sx, --gy, --gx;
    vector<string> c(R);
    rep(i, R) cin >> c[i];

    vector<vector<int>> dist(R, vector<int>(C, -1));
    queue<pair<int, int>> q;
    q.push(make_pair(sy, sx));
    dist[sy][sx] = 0;
    int dy[] = {0, 1, 0, -1};
    int dx[] = {1, 0, -1, 0};

    while (!q.empty()) {
        pair<int, int> pos = q.front();
        q.pop();
        rep (i, 4) {
            int nextY = pos.first + dy[i];
            int nextX = pos.second + dx[i];
            if (nextY < 0 || nextY >= R || nextX < 0 || nextX >= C) continue;
            if (c[nextY][nextX] == '#') continue;
            if (dist[nextY][nextX] != -1) continue;
            dist[nextY][nextX] = dist[pos.first][pos.second] + 1;
            q.push(make_pair(nextY, nextX));
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}