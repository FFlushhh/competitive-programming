#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int n, m;
map<int, vector<int> > G;
vector<int> edges;
vector<bool> visited;
bool ok = true;

void dfs(int v, int p, ll &cnt1, ll &cnt2)
{
    visited[v] = true;
    cnt1 += edges[v] - 1;
    cnt2++;
    for (int nv : G[v]) {
        if (nv == p) continue;
        if (visited[nv]) continue;
        dfs(nv, v, cnt1, cnt2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    edges.resize(n + 1);
    visited.resize(n + 1);
    rep(i, m) {
        int u, v;
        cin >> u >> v;
        G[u].emplace_back(v);
        G[v].emplace_back(u);
        edges[u]++;
        edges[v]++;
    }
    rep1(i, n) {
        ll cnt1 = 0;
        ll cnt2 = 0;
        if (!visited[i]) {
            dfs(i, -1, cnt1, cnt2);
        }
        // cout << cnt1 << " " << cnt2 << "\n";
        if (cnt1 != cnt2) ok = false;
    }
    cout << (ok ? "Yes\n" : "No\n");
    return 0;
}

// #include <bits/stdc++.h>
// #include <atcoder/dsu>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)
// #define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n, m;
//     cin >> n >> m;
//     vector<int> u(m), v(m);
//     atcoder::dsu dsu(n);
//     rep(i, m) {
//         cin >> u[i] >> v[i];
//         u[i]--; v[i]--;
//         dsu.merge(u[i], v[i]);
//     }
//     vector<int> vsize(n), esize(n);
//     rep(i, n) vsize[dsu.leader(i)]++;
//     rep(i, m) esize[dsu.leader(u[i])]++;
//     cout << (vsize == esize ? "Yes" : "No") << endl;
//     return 0;
// }