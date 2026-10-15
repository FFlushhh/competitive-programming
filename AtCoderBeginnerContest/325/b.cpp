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
    vector<int> w(n), x(n);
    rep (i, n) cin >> w[i] >> x[i];
    int ans = 0;
    for (int i = 0; i < 24; ++i) {
        int cnt = 0;
        rep (j, n) {
            int time = x[j] + i;
            if (time >= 24) time -= 24;
            if (time >= 9 && time < 18) cnt += w[j];
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}