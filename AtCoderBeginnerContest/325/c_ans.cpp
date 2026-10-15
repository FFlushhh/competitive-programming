#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

/*
方針
答えを0で初期化
未訪問の頂点がある限り、以下を繰り返す
    未訪問の頂点を1つ選ぶ
    その頂点からBFSを行い、到達できる頂点を全て訪問済みにする
    答えに1を加算する
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int ans = 0;
    
    int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
    int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == '.' || visited[i][j]) continue;
            queue<pair<int, int>> que;
            que.push(make_pair(i, j));
            while (!que.empty()) {
                pair<int, int> p = que.front();
                que.pop();
                int x = p.first, y = p.second;
                for (int d = 0; d < 8; ++d) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '#' && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        que.push(make_pair(nx, ny));
                    }
                }
            }
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}