#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    rep (i, n) cin >> c[i];
    rep (i, n) cin >> r[i];
    int mx = -1;
    int ans = -1;
    rep (i, n) {
        if (c[i] == t) {
            if (r[i] > mx) {
                mx = r[i];
                ans = i;
            }
        }
    }
    if (mx == -1) {
        rep (i, n) {
            if (i == 0) {
                mx = r[i];
                ans = i;
            }
            else if (c[i] == c[0]) {
                if (r[i] > mx) {
                    mx = r[i];
                    ans = i;
                }
            }
        }
    }
    cout << ans + 1 << endl;
    return 0;
}