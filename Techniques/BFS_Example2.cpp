#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int> > G(n + 1);
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }
    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.emplace(1);
    dist[1] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto nv : G[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            q.emplace(nv);
        }
    }
    for (int i = 1; i <= n; ++i) cout << dist[i] << endl;
    return 0;
}