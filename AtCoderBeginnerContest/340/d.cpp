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
    vector<int> a(n), b(n), x(n);
    for (int i = 1; i < n; ++i) cin >> a[i] >> b[i] >> x[i];
    priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > pq;
    vector<ll> dist(n + 1, LLONG_MAX);
    dist[1] = 0;
    pq.emplace(0, 1);
    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();
        if (v == n || d > dist[v]) continue;
        if (v + 1 <= n && dist[v + 1] > d + a[v]) {
            dist[v + 1] = d + a[v];
            pq.emplace(dist[v + 1], v + 1);
        }
        if (x[v] <= n && dist[x[v]] > d + b[v]) {
            dist[x[v]] = d + b[v];
            pq.emplace(dist[x[v]], x[v]);
        }
    }
    cout << dist[n] << endl;
    return 0; 
}