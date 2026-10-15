#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(n));
    rep (i, n) {
        cin >> c[i];
        a[i].resize(c[i]);
        rep (j, c[i]) {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
    vector<pair<int, int>> ans;
    rep (i, n) {
        rep (j, c[i]) {
            if (a[i][j] == x) {
                ans.push_back(make_pair(c[i], i + 1));
            }
        }
    }
    sort(ans.begin(), ans.end());
    int s = 0;
    rep (i, ans.size()) {
        if (ans[i].first == ans[0].first) ++s;
    }
    cout << s << endl;
    rep (i, s) cout << ans[i].second << " ";
    return 0;
}