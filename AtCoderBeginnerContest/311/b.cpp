#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<bool> day(d, true);
    rep (i, n) {
        string s;
        cin >> s;
        rep (j, d) {
            if (s[j] == 'x') day[j] = false;
        }
    }
    int ans = 0;
    int cnt = 0;
    rep (i, d) {
        if (day[i]) {
            ++cnt;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}