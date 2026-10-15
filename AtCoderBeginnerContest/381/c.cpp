#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    int ans = 0;
    string s;
    cin >> n >> s;
    rep (i, n) {
        if (s[i] == '/') {
            int onecount = 0;
            int twocount = 0;
            for (int j = i - 1; j >= 0; --j) {
                if (s[j] == '1') {
                    onecount++;
                }
                else {
                    break;
                }
            }
            for (int j = i + 1; j < n; ++j) {
                if (s[j] == '2') {
                    twocount++;
                }
                else {
                    break;
                }
            }
            if (onecount != twocount) {
                int tmp = min(onecount, twocount);
                ans = max(tmp * 2 + 1, ans);
            } else {
                ans = max(onecount + twocount + 1, ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}