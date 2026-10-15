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
    vector<char> mp(256); // 次に行くべき文字リスト
    string snuke = "snukes";
    rep (i, 5) mp[snuke[i]] = snuke[i + 1]; // s -> n -> u -> k -> e -> s
    vector<vector<bool>> visited(h, vector<bool>(w));
    queue<pair<int, int>> q;
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    if (s[0][0] == 's') {
        visited[0][0] = true;
        q.emplace(0, 0);
    }
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        rep (i, 4) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (s[nx][ny] != mp[s[x][y]]) continue;
            if (visited[nx][ny]) continue;
            visited[nx][ny] = true;
            q.emplace(nx, ny);
        }
    }
    cout << (visited[h - 1][w - 1] ? "Yes" : "No") << endl;
    return 0;
}

/*
方針
次に行くべきマスの文字のリストを作り、BFS
s(nx, ny)が次の文字じゃなかったらスキップ
*/