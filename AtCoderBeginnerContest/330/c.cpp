#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll d;
    cin >> d;
    ll ans;
    ll dis;
    for (ll x = 0; x <= sqrt(d); ++x) {
        for (ll y = x; y <= sqrt(d); ++y) {
            dis = abs(x * x + y * y - d);
            if (x == 1 && y == 1) {
                ans = dis;
            } else {
                ans = min(ans, dis);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

// このままだとTLE・WA