#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ans = 0;
    rep (i, s.size()) {
        for (int j = 1; j <= s.size(); ++j) {
            string t = s.substr(i, j);
            int L = 0;
            for (int k = 0; k < t.size(); ++k) {
                int end = t.size() - k - 1;
                if (k >= end) {
                    L = max(L, (int)t.size());
                    break;
                }
                if (t[k] != t[end]) break;
            }
            ans = max(ans, L);
        }
    }
    cout << ans << endl;
    return 0;
}