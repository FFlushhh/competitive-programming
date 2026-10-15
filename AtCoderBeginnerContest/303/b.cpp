#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(m, vector<int>(n));
    rep (i, m) rep (j, n) cin >> a[i][j];
    vector<set<int> > s(n + 1);
    rep (i, m) rep (j, n - 1) {
        s[a[i][j]].insert(a[i][j + 1]);
        s[a[i][j + 1]].insert(a[i][j]);
    }
    set<pair<int, int> > t;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j) continue;
            if (s[i].contains(j)) continue;
            int x = i, y = j;
            if (x > y) swap(x, y);
            t.insert(make_pair(x, y));
        }
    }
    cout << t.size() << endl;
    return 0;
}