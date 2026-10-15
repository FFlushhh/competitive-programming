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
    vector<ll> h(n);
    rep (i, n) cin >> h[i];
    ll t = 0;
    rep (i, n) {
        bool judge = true;
        while (t % 3 != 0 && judge) {
            ++t;
            if (t % 3 == 0) h[i] -= 3;
            else --h[i];
            if (h[i] <= 0) {
                judge = false;
            }
        }
        if (judge) {
            int div = h[i] / 5;
            t += div * 3;
            h[i] %= 5;
            if (h[i] == 1) ++t;
            else if (h[i] == 2) t += 2;
            else if (h[i] >= 3) t += 3;
        }
    }
    cout << t << endl;
    return 0;
}