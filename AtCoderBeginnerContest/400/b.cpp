#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    ll now = 1;
    ll ans = 1;
    rep (i, m) {
        now *= n;
        ans += now;
        if (ans > 1e9) {
            cout << "inf" << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}