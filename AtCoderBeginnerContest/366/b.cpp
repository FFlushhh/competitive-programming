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
    vector<string> s(n);
    int Maxlen = 0;
    rep (i, n) {
        cin >> s[i];
        Maxlen = max(Maxlen, (int)s[i].size());
    }
    vector<string> ans(Maxlen, string(n, ' '));
    rep (i, n) {
        rep (j, s[i].size()) {
            ans[j][n - 1 - i] = s[i][j];
        }
    }
    rep (i, Maxlen) {
        for (int j = ans[i].size() - 1; j >= 0; --j) {
            if (ans[i][j] != ' ') {
                for (int k = 0; k <= j; ++k) {
                    if (ans[i][k] == ' ') ans[i][k] = '*'; // backが'*'ならpop_back()でもOK
                }
                break;
            }
        }
    }
    rep (i, Maxlen) cout << ans[i] << endl;
    return 0;
}