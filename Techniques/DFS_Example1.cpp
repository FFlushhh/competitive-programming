#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int h, w;
vector<string> c;
vector<vector<bool>> visited;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs (int i, int j)
{
    if (i < 0 || i >= h || j < 0 || j >= w || c[i][j] == '#') return;
    if (visited[i][j]) return;

    visited[i][j] = true;

    rep (k, 4) {
        dfs(i + dx[k], j + dy[k]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> h >> w;

    c.resize(h);
    pair<int, int> start, goal;
    rep (i, h) {
        cin >> c[i];
        rep (j, w) {
            if (c[i][j] == 's') start = make_pair(i, j);
            if (c[i][j] == 'g') goal = make_pair(i, j);
        }
    }

    visited.resize(h, vector<bool>(w, false));

    dfs(start.first, start.second);

    cout << (visited[goal.first][goal.second] ? "Yes" : "No") << endl;
    
    return 0;
}