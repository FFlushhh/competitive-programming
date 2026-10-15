#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<vector<int> > ice(n + 1);
    rep (i, n) {
        int f, s;
        cin >> f >> s;
        ice[f].emplace_back(s);
    }
    int ans = 0;
    vector<int> best;
    for (int i = 1; i <= n; ++i) {
        sort(ice[i].rbegin(), ice[i].rend());
        if (ice[i].size() >= 2) {
            ans = max(ans, ice[i][0] + ice[i][1] / 2);
        }
        if (ice[i].size() >= 1) {
            best.emplace_back(ice[i][0]);
        }
    }
    sort(best.rbegin(), best.rend());
    if (best.size() >= 2) {
        ans = max(ans, best[0] + best[1]);
    }
    cout << ans << endl;
    return 0;
}