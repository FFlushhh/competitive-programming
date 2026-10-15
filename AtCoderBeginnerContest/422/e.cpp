#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

vector<ll> dp;
vector<ll> w;
vector<vector<ll> > g;
ll nxtv = 2;

void dfs(int v, int p, ll cost)
{
    cost += w[v];
    if (cost < dp[v]) {
        dp[v] = cost;
    } else {
        return;
    }
    for (auto nv : g[v]) {
        if (nv == p) continue;
        dfs(nv, v, cost);
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m;
    cin >> n >> m;
    // vector<ll> w(n + 1);
    w.resize(n + 1);
    g.resize(n + 1);
    rep(i, n) cin >> w[i];
    // vector<vector<ll> > g(n + 1);
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    dp.assign(n + 1, LLONG_MAX);
    dp[0] = 0;
    dp[1] = w[1];
    ll cost = 0;
    dfs(1, -1, cost);
    for (int i = 0; i <= n; ++i) {
        cout << dp[i] << "\n";
    }
    return 0;
}