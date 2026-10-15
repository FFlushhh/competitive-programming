#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

// A64 - Shortest Path 2
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int> > > G(n + 1);
    rep(i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        G[a].emplace_back(b, c);
        G[b].emplace_back(a, c);
    }

    vector<int> d(n + 1, INT_MAX);
    d[1] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > pq;
    pq.emplace(0, 1);

    while (!pq.empty()) {
        auto [dist, v] = pq.top();
        pq.pop();
        if (d[v] < dist) continue;
        for (auto [u, c] : G[v]) {
            if (d[u] > d[v] + c) {
                d[u] = d[v] + c;
                pq.emplace(d[u], u);
            }
        }
    }

    rep1(i, n) cout << (d[i] == INT_MAX ? -1 : d[i]) << endl;
    return 0;
}