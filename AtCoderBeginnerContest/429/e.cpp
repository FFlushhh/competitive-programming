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

    ll n, m;
    cin >> n >> m;
    vector<vector<ll> > g;
    vector<ll> U, V;
    rep(i, m) {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        g[u].emplace_back(v);
        g[v].emplace_back(u);
    }
    string s;
    cin >> s;
    queue<ll> q;
    rep(i, s.size()) {
        if (s[i] == 'D') q.emplace(i);
        
    }
    return 0;
}