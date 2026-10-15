#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

vector<bool> visited;
vector<vector<int> > G;
vector<vector<int> > ans;
int x, y;
void dfs(int u, vector<int>& path)
{
    visited[u] = true;
    path.emplace_back(u);
    if (u == y) {
        ans.emplace_back(path);
        visited[u] = false;
        return;
    } else {
        for (auto &w : G[u]) {
            if (!visited[w]) {
                dfs(w, path);
            }
        }
    }
    visited[u] = false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m >> x >> y;
        G.resize(n + 1);
        visited.resize(n + 1, false);
        ans.clear();
        rep(i, m) {
            int u, v;
            cin >> u >> v;
            G[u].emplace_back(v);
            G[v].emplace_back(u);
        }
        
    }
    return 0;
}