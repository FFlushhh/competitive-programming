#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int n, m;
vector<vector<int>> g;
vector<bool> visited;
int ans = 0;

void dfs(int v, int p)
{
    visited[v] = true;
    for (int nv : g[v]) {
        if (nv == p) continue;
        if (visited[nv]) {
            ans++;
            continue;
        }
        dfs(nv, v);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    g.resize(n);
    visited.resize(n, false);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    rep(i, n) {
        if (!visited[i]) {
            dfs(i, -1);
        }
    }
    cout << ans / 2 << "\n";
    return 0;
}