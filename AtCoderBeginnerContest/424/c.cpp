#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<vector<int> > g(n + 1);
    queue<int> q;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) q.emplace(i + 1);
        g[a].emplace_back(i + 1);
        g[b].emplace_back(i + 1);
    }
    vector<bool> visited(n + 1, false);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (visited[v]) continue;
        visited[v] = true;
        for (int nv : g[v]) {
            if (!visited[nv]) {
                q.emplace(nv);
            }
        }
    }
    ll ans = 0;
    rep1(i, n) if (visited[i]) ++ans;
    cout << ans << '\n';
    return 0;
}