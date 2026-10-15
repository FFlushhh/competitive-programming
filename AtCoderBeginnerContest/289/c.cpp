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
    
    int n, m;
    cin >> n >> m;
    vector<set<int> > a(m);
    rep(i, m) {
        int c;
        cin >> c;
        rep(j, c) {
            int v;
            cin >> v;
            a[i].insert(v);
        }
    }
    ll ans = 0;
    rep1(i, (1 << m) - 1) {
        vector<int> target;
        rep(j, m) {
            if ((i >> j) & 1) target.emplace_back(j);
        }
        bool ok = true;
        rep1(j, n) {
            bool found = false;
            for (int idx : target) {
                if (a[idx].count(j)) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ok = false;
                break;
            }
        }
        if (ok) ++ans;
    }
    cout << ans << "\n";
    return 0;
}