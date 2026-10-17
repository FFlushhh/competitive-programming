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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<string> t(m);
    rep(i, m) cin >> t[i];

    vector<int> ans(n);

    rep(i, m) {
        int cnt = 0;
        int idx = -1;
        bool all = false;
        rep(j, n) {
            if (t[i].size() != s[j].size()) continue;

            if (t[i] == s[j]) {
                all = true;
                idx = j;
                break;
            }

            int diff = 0;
            int len = t[i].size();
            rep(k, len) {
                if (t[i][k] != s[j][k]) diff++;
            }

            if (diff <= 1) {
                cnt++;
                idx = j;
            }
        }

        if (all) {
            ans[idx]++;
        }
        else if (cnt == 1) {
            ans[idx]++;
        }
    }

    rep(i, n) cout << ans[i] << endl;

    return 0;
}