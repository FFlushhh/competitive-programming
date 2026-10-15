#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
vector<pair<int, int>> G[1005];

vector<ll> basis;

void add_basis(ll x) {
    for (ll b : basis) x = min(x, x ^ b);
    if (x) basis.push_back(x);
}

ll minimize_with_basis(ll x) {
    for (ll b : basis) x = min(x, x ^ b);
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b, w;
        cin >> a >> b >> w;
        G[a].emplace_back(b, w);
    }

    // dist[v] = 到達可能な XOR 値一覧
    vector<unordered_set<ll>> dist(n + 1);
    dist[1].insert(0);

    // 追加：全ての訪問済み状態を保存
    queue<pair<int, ll>> q;
    q.push({1, 0});

    while (!q.empty()) {
        auto [v, val] = q.front(); q.pop();
        for (auto [u, w] : G[v]) {
            ll next = val ^ w;
            if (!dist[u].count(next)) {
                dist[u].insert(next);
                q.push({u, next});
            } else {
                // 新しい経路からのサイクル発見
                for (ll prev_val : dist[u]) {
                    add_basis(prev_val ^ next);
                }
            }
        }
    }

    if (dist[n].empty()) {
        cout << -1 << endl;
        return 0;
    }

    // 最後に dist[n] の各XOR値に対して基底で最小化
    ll res = LLONG_MAX;
    for (ll val : dist[n]) {
        res = min(res, minimize_with_basis(val));
    }
    cout << res << endl;
}
