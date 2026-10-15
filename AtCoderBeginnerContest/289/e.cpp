#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

void test()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(n + 1);
    rep1(i, n) cin >> c[i];
    vector<vector<int> > g(n + 1);
    rep(i, m) {
        int u, v;
        cin >> u >> v;
        g[u].emplace_back(v);
        g[v].emplace_back(u);
    }
    queue<int> q;
    vector<int> dist(n + 1, -1);
    dist[1] = 0;
    q.emplace(1);
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) test();
    return 0;
}