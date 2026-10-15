#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    atcoder::dsu dsu(n);
    vector<int> color(n);
    vector<int> cnt(n);
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            int lu = dsu.leader(u);
            int lv = dsu.leader(v);
            if (lu != lv) {
                dsu.merge(u, v);
                int new_leader = dsu.leader(u);
                cnt[new_leader] = cnt[lu] + cnt[lv];
            }
        } else if (op == 2) {
            int v;
            cin >> v;
            v--;
            int leader = dsu.leader(v);
            if (color[v] == 0) {
                color[v] = 1;
                cnt[leader]++;
            } else {
                color[v] = 0;
                cnt[leader]--;
            }
        } else {
            int v;
            cin >> v;
            v--;
            int leader = dsu.leader(v);
            cout << (cnt[leader] > 0 ? "Yes" : "No") << "\n";
        }
    }
    return 0;
}