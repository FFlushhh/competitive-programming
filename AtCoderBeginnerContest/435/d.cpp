#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<vector<int> > g(n);
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        g[y].emplace_back(x);
    }
    int q;
    cin >> q;
    set<int> ok;
    while (q--) {
        int op, v;
        cin >> op >> v;
        v--;
        if (op == 1) {
            if (ok.count(v)) continue;
            ok.emplace(v);
            queue<int> q;
            q.emplace(v);
            while (!q.empty()) {
                int u = q.front(); q.pop();
                for (auto nv : g[u]) {
                    if (ok.count(nv)) continue;
                    ok.emplace(nv);
                    q.emplace(nv);
                }
            }
        } else {
            if (ok.count(v)) Yes;
            else No;
        }
    }
    return 0;
}