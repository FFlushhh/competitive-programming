#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

/* Reference: https://github.com/FFlushhh/competitive-programming/blob/main/.vscode/cpp.code-snippets */
constexpr long long inf_ll = 1LL << 60;

using P = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, s, t;
    cin >> n >> m >> s >> t;
    s--; t--;

    vector<vector<ll>> g(n);
    vector<ll> mn_node(n, inf_ll);
    
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].emplace_back(b);
        mn_node[a] = min(mn_node[a], b);
    }

    vector<ll> mn(n, inf_ll);
    priority_queue<P, vector<P>, greater<P>> q;

    q.emplace(0LL, s);
    mn[s] = 0;

    while (!q.empty()) {
        auto [cost, v] = q.top();
        q.pop();

        for (auto nv : g[v]) {
            if (nv == mn_node[v]) {
                if (mn[nv] <= cost) continue;
            } else {
                if (mn[nv] <= cost + 1) continue;
            }

            if (nv == mn_node[v]) {
                q.emplace(cost, nv);
                mn[nv] = min(mn[nv], cost);
            } else {
                q.emplace(cost + 1, nv);
                mn[nv] = min(mn[nv], cost + 1);
            }
        }
    }

    if (mn[t] == inf_ll) {
        cout << -1 << endl;
    } else {
        cout << mn[t] << endl;
    }

    return 0;
}