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
    vector<pair<int, int> > p(n);
    rep (i, n) {
        int x;
        cin >> x;
        p[i] = make_pair(x, i);
    }
    sort(p.rbegin(), p.rend());
    int r = 1, cnt = 0;
    vector<pair<int, int> > ans;
    rep (i, n) {
        if (cnt == 0) {
            ans.emplace_back(p[i].second, r);
            ++cnt;
        }
        else if (p[i].first == p[i - 1].first) {
            ans.emplace_back(p[i].second, r);
            ++cnt;
        }
        else {
            r += cnt;
            cnt = 1;
            ans.emplace_back(p[i].second, r);
        }
    }
    sort(ans.begin(), ans.end());
    rep (i, n) cout << ans[i].second << endl;
    return 0;
}