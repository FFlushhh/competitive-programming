#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
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
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].emplace_back(b);
    }
    vector<bool> visited(n);
    queue<int> q;
    q.emplace(0);
    visited[0] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto nv : g[v]) {
            if (visited[nv]) continue;
            q.emplace(nv);
            visited[nv] = true;
        }
    }
    int ans = 0;
    rep(i, n) {
        if (visited[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}