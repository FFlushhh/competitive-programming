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
    vector<int> a(n);
    vector<pair<int, int> > b(m);
    rep (i, n) cin >> a[i];
    rep (i, m) {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(b.rbegin(), b.rend());
    vector<pair<int, int> > ans;
    int j = 0;
    rep (i, m) {
        while (j < n && a[j] > b[i].first) ++j;
        if (j < n) ans.emplace_back(b[i].second, j + 1);
        else ans.emplace_back(b[i].second, -1);
    }
    sort(ans.begin(), ans.end());
    rep (i, m) cout << ans[i].second << endl;
    return 0;
}