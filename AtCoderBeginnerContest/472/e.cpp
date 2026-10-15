#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }

    queue<int> q;
    vector<int> ans;
    vector<int> cnt(n, -1);
    vector<bool> visited(n);
    rep(i, n) {
        
        if (cnt[i] == -1) {
            cnt[i] = 0;
            q.emplace(i);
            visited[i] = true;
            
            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int nu : g[u]) {
                    if (cnt[nu] > -1) {

                    }
                }
            }

        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}