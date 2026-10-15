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
    vector<string> s(n), t(n);
    int cntS = 0, cntT = 0;
    rep (i, n) cin >> s[i];
    rep (i, n) cin >> t[i];
    int ans = INT_MAX;
    vector<string> tmp = s;
    rep (i, 4) {
        int cnt = 0;
        if (i == 0) {
            if (s == t) {
                ans = min(ans, cnt);
            } else {
                rep (j, s.size()) {
                    if (s[j] != t[j]) cnt++;
                }
                ans = min(ans, cnt);
            }
        }
        else if (i == 1) {
            // 90度回転
            vector<string> rotated(n, string(n, ' '));
            rep (j, n) {
                rep (k, n) {
                    rotated[k][n - 1 - j] = tmp[j][k];
                }
            }
            tmp = rotated;
            ++cnt;
            if (tmp == t) {
                ans = min(ans, cnt);
            } else {
                rep (j, s.size()) {
                    if (tmp[j] != t[j]) cnt++;
                }
                ans = min(ans, cnt);
            }
        }
        else if (i == 2) {
            // 180度回転
            vector<string> rotated(n, string(n, ' '));
            rep (j, n) {
                rep (k, n) {
                    rotated[n - 1 - j][n - 1 - k] = tmp[j][k];
                }
            }
            tmp = rotated;
            cnt += 2;
            if (tmp == t) {
                ans = min(ans, cnt);
            } else {
                rep (j, s.size()) {
                    if (tmp[j] != t[j]) cnt++;
                }
                ans = min(ans, cnt);
            }
        }
        else if (i == 3) {
            // 270度回転
            vector<string> rotated(n, string(n, ' '));
            rep (j, n) {
                rep (k, n) {
                    rotated[n - 1 - k][j] = tmp[j][k];
                }
            }
            tmp = rotated;
            ++cnt;
            if (tmp == t) {
                cout << cnt << endl;
                return 0;
            } else {
                rep (j, s.size()) {
                    if (tmp[j] != t[j]) ++ans;
                }
                ans = min(ans, cnt);
            }  
        }
    }
    cout << ans << endl;
    return 0;
}