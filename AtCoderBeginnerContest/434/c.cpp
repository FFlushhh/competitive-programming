#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        ll n, h;
        cin >> n >> h;
        ll prevt = 0, minh = h, maxh = h;
        bool ok = true;
        rep(i, n) {
            ll t, l, u;
            cin >> t >> l >> u;
            ll dt = t - prevt;
            minh = minh - dt;
            maxh = maxh + dt;
            if (u < minh || l > maxh) ok = false;
            if (minh < l) minh = l;
            if (maxh > u) maxh = u;
            prevt = t;
        }
        if (ok) Yes;
        else No;
    }
    return 0;
}