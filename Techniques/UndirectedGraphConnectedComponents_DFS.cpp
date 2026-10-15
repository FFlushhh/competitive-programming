#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n, m;
vector<vector<int> > G;
vector<bool> visited;

void dfs(int v)
{
    if (visited[v]) return;
    visited[v] = true;
    for (int nex : G[v]) {
        if (!visited[nex]) dfs(nex);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    G.resize(n + 1);
    visited.resize(n + 1, false);
    rep (i, m) {
        int u, v;
        cin >> u >> v;
        G[u].emplace_back(v);
        G[v].emplace_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

// 木構造であるとき(=サイクルがない)の辺の数: n - 1
// すべてが木構造であるとき(=サイクルがない)の辺の数: n - k (kは連結成分の数)
