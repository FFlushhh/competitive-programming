#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> c(m);
    vector<vector<int> > a(m);
    vector<char> r(m);
    rep (i, m) {
        cin >> c[i];
        a[i].resize(c[i]);
        rep (j, c[i]) {
            cin >> a[i][j];
        }
        cin >> r[i];
    }
    int ans = 0;
    for (int i = 0; i < (1 << n); ++i) {
        set<int> s;
        for (int j = 0; j < n; ++j) {
            if (i >> j & 1) {
                s.insert(j + 1);
            }
        }
        bool ok = true;
        for (int j = 0; j < m; ++j) {
            int cnt = 0;
            for (int l = 0; l < c[j]; ++l) {
                cnt += s.count(a[j][l]);
            }
            if (!((cnt >= k && r[j] == 'o') || (cnt < k && r[j] == 'x'))) {
                ok = false;
                break;
            }
        }
        if (ok) ++ans;
    }
    cout << ans << endl;
    return 0;
}