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
        int u, v;
        cin >> u >> v;
        G[u].emplace_back(v);
        G[v].emplace_back(u);
    }
    vector<bool> visited(n + 1, false);
    queue<int> q;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (visited[i]) continue;
        q.emplace(i);
        visited[i] = true;
        cnt++;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int nex : G[v]) {
                if (visited[nex]) continue;
                visited[nex] = true;
                q.emplace(nex);
            }
        }
    }
    cout << m - (n - cnt) << endl;
    return 0;
}