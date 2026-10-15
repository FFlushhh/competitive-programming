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
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    string snuke = "snuke";
    int idx = 1;
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        rep (i, 4) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (s[nx][ny] != snuke[idx]) continue;
            q.push(make_pair(nx, ny));
            visited[nx][ny] = true;
            cout << nx << " " << ny << " " << snuke[idx] << endl;
        }
        idx = (idx + 1) % 5;
    }
    if (visited[h - 1][w - 1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}