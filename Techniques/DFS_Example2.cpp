#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// ABC 317 C

int n, m;
vector<vector<pair<int, int>>> g;
vector<bool> visited;
int ans = 0;

void dfs(int cur, int len)
{
    ans = max(ans, len);
    for (auto& [next, cost] : g[cur]) {
        if (visited[next]) continue;
        visited[next] = true;
        dfs(next, len + cost);
        visited[next] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    g.resize(n);
    visited.resize(n, false);
    rep (i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    rep (i, n) { // 各頂点を始点としてDFS
        visited[i] = true;
        dfs(i, 0);
        visited[i] = false; // バックトラッキングのために元に戻す
    }
    cout << ans << endl;
    return 0;
}